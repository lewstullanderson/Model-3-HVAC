#include <Arduino.h>
#include "lvgl.h"

// put function declarations here:
int myFunction(int, int);

#define LGFX_USE_V1 // set to use new version of library
#include <LovyanGFX.hpp>
#include <driver/i2c.h>
#include <lvgl.h>
#include "ui/ui.h"

#include <TFT_eSPI.h>
#include <SPI.h>
#include <Wire.h>
//Demo of the second can interface Can0 which uses the MCP2517FD module
//install https://github.com/collin80/can_common then https://github.com/collin80/esp32_can
// modify esp_32/src/esp_can.cpp (rxpin, txpin) CAN0(GPIO_NUM_22, GPIO_NUM_35, 0) ;
#include "esp32_can.h"

    int ID2F30 = 0x44;    // 1ST byte of 2F3
    int ID2F38 = 0xBF;    // 2ND byte of 2F3
    int ID2F316 = 0x00;    // 3RD byte of 2F3
    int ID2F324 = 0x47;    // 4TH byte of 2F3
    int ID2F332 = 0x12;    // 5TH byte of 2F3
    int ID2F340 = 0x00;    // 6TH byte of 2F3
    int ID2F348 = 0x00;    // 7TH byte of 2F3
    int ID2F356 = 0x00;    // 8TH byte of 2F3
    byte ID2F3165 = 0x00;    // 1st 5 bits of 3rd byte of 2F3


/*Set to your screen resolution*/
#define TFT_HOR_RES 480
#define TFT_VER_RES 320

/*LVGL draw into this buffer, 1/10 screen size usually works well. The size is in bytes*/
#define DRAW_BUF_SIZE (TFT_HOR_RES * TFT_VER_RES / 10 * (LV_COLOR_DEPTH / 8))

#if LV_USE_LOG != 0
void my_print(lv_log_level_t level, const char *buf)
{
  LV_UNUSED(level);
  Serial.println(buf);
  Serial.flush();
}
#endif

// ESP32-3248S035 board PIN config DON'T CHANGE
class LGFX : public lgfx::LGFX_Device
{
  lgfx::Panel_ST7796 _panel_instance;
  lgfx::Bus_SPI _bus_instance;
  lgfx::Light_PWM _light_instance;
  lgfx::Touch_GT911 _touch_instance;

public:
  LGFX(void)
  {
    {
      auto cfg = _bus_instance.config();

      // SPIバスの設定
      cfg.spi_host = HSPI_HOST;
      cfg.spi_mode = 0;
      cfg.freq_write = 80000000;
      cfg.freq_read = 40000000;
      cfg.spi_3wire = true;
      cfg.use_lock = true;
      cfg.dma_channel = SPI_DMA_CH_AUTO;
      cfg.pin_sclk = 14; // 変更
      cfg.pin_mosi = 13; // 変更
      cfg.pin_miso = 12; // 変更
      cfg.pin_dc = 2;    // 変更

      _bus_instance.config(cfg);
      _panel_instance.setBus(&_bus_instance);
    }

    {
      auto cfg = _panel_instance.config();

      cfg.pin_cs = 15;   // 変更
      cfg.pin_rst = -1;  // 変更
      cfg.pin_busy = -1; // 変更

      cfg.panel_width = 320;
      cfg.panel_height = 480;
      cfg.offset_x = 0;
      cfg.offset_y = 0;
      cfg.offset_rotation = 0;
      cfg.dummy_read_pixel = 8;
      cfg.dummy_read_bits = 1;
      cfg.readable = true;
      cfg.invert = false;
      cfg.rgb_order = false;
      cfg.dlen_16bit = false;
      cfg.bus_shared = true;

      _panel_instance.config(cfg);
    }

    {
      auto cfg = _light_instance.config();

      cfg.pin_bl = 27; // 変更
      cfg.invert = false;
      cfg.freq = 1200;
      cfg.pwm_channel = 7;

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance);
    }

    {
      auto cfg = _touch_instance.config();

      cfg.pin_int = GPIO_NUM_36; // INT pin number
      cfg.pin_sda = GPIO_NUM_33; // I2C SDA pin number
      cfg.pin_scl = GPIO_NUM_32; // I2C SCL pin number
      cfg.i2c_addr = 0x5D;       // I2C device addr
      cfg.i2c_port = I2C_NUM_0;  // I2C port number
      cfg.freq = 800000;         // I2C freq
      cfg.x_min = 14;
      cfg.x_max = 310;
      cfg.y_min = 5;
      cfg.y_max = 448;
      cfg.offset_rotation = 0;
      cfg.bus_shared = false;

      _touch_instance.config(cfg);
      _panel_instance.setTouch(&_touch_instance);
    }

    setPanel(&_panel_instance);
  }
};
LGFX tft;
// Board config finished

lv_indev_t *indev;     // Touchscreen input device
uint8_t *draw_buf;     // draw_buf is allocated on heap otherwise the static area is too big on ESP32 at compile
uint32_t lastTick = 0; // Used to track the tick timer

// CN1 Extended IO PIN 3.3v(red) -> 27(yellow) -> 22(blue) -> GND(black)
// P3 Extended IO PIN 21(red - also dims backlight) -> 22(wire yellow) -> 35(wire blue) -> GND(black)
// https://randomnerdtutorials.com/esp32-cheap-yellow-display-cyd-pinout-esp32-2432s028r/

// Use either CN1 or P3 pins. So comment out appropriately

// CN1 pins and setups
//  const int ledPin27 = 27;
//  const int ledPin22 = 22;

// P3 pins and setups
// const int ledPin21 = 21;
// const int ledPin22 = 22;
// const int ledPin35 = 35;

// In Built RGB board light at the back
// const int ledPin4 = 4;    //red
// const int ledPin16 = 16;  //green
// const int ledPin17 = 17;  //blue

/* LVGL calls it when a rendered image needs to copied to the display*/
void my_disp_flush(lv_display_t *disp, const lv_area_t *area, uint8_t *px_map)
{
  uint32_t w = lv_area_get_width(area);
  uint32_t h = lv_area_get_height(area);

  // Updates UI, without it we see dark screen
  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.writePixels((lgfx::rgb565_t *)px_map, w * h);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

/*Read the touchpad*/
void my_touchpad_read(lv_indev_t *indev, lv_indev_data_t *data)
{
  uint16_t touchX, touchY;
  bool touched = tft.getTouch(&touchX, &touchY);
  if (!touched)
  {
    data->state = LV_INDEV_STATE_RELEASED;
  }
  else
  {
    Serial.println("===== ===== Touched");
    data->state = LV_INDEV_STATE_PRESSED;
    data->point.x = touchX;
    data->point.y = touchY;
  }
}

void setup()
{
  Serial.begin(115200);

   Serial.println("Initializing ...");
	
	// Initialize MCP2517FD CAN controller at the specified speed
	if(CAN0.begin(500000))
	{
		Serial.println("MCP2517FD Init OK ...");
	} else {
		Serial.println("MCP2517FD Init Failed ...");
	}

	CAN0.watchFor(); //allow anything through

	Serial.println("Ready ...!");



  tft.begin();
  tft.setRotation(1);
  tft.setBrightness(255);
  tft.fillScreen(TFT_BLACK);
  // tft.setSwapBytes(true);

  lv_init();

  lv_display_t *disp = lv_display_create(TFT_HOR_RES, TFT_VER_RES);
  // void *draw_buf_1 = heap_caps_malloc(DRAW_BUF_SIZE, MALLOC_CAP_DMA | MALLOC_CAP_INTERNAL);
  draw_buf = new uint8_t[DRAW_BUF_SIZE];
  lv_display_set_flush_cb(disp, my_disp_flush);
  lv_display_set_buffers(disp, draw_buf, NULL, DRAW_BUF_SIZE, LV_DISPLAY_RENDER_MODE_PARTIAL);

  indev = lv_indev_create();
  lv_indev_set_type(indev, LV_INDEV_TYPE_POINTER);
  lv_indev_set_read_cb(indev, my_touchpad_read);

  Serial.println("LVGL Setup done");

  // //Integrate EEZ Studio GUI
  ui_init();

  Serial.println("GUI Setup done");

  // put your main code here, to run repeatedly:
  int result = myFunction(2, 3);
  Serial.printf("Result %d", result);
  Serial.println("Result" + result);

  // //Set pin modes
  // //CN1 Extended IO PIN 3.3v(red) -> 27(yellow) -> 22(blue) -> GND(black)
  // //P3 Extended IO PIN 21(red - also dims backlight) -> 22(wire yellow) -> 35(wire blue) -> GND(black)
  // pinMode(ledPin27, OUTPUT);  // Sets it to OUTPUT

  // Register switch event handlers and update label
  //  lv_obj_add_event_cb(objects.btn1, btn1_event_handler, LV_EVENT_CLICKED, objects.label1);
  //  lv_obj_add_event_cb(objects.btn2, btn2_event_handler, LV_EVENT_CLICKED, objects.label1);
}

void EnableSystem(lv_event_t * e)
{
  ID2F340=1;
}


void EnableFloor(lv_event_t * e)
{
  ID2F340=2;
}

void EnablePanel(lv_event_t * e)
{
  ID2F340=3;
}

void EnableDefrost(lv_event_t * e)
{
  ID2F340=4;
}

void EnableRecirc(lv_event_t * e)
{
  ID2F340=5;
}

void EnableDown(lv_event_t * e)
{
  ID2F340=6;
}

void EnableUp(lv_event_t * e)
{
  ID2F340=7;
}

void EnableRight(lv_event_t * e)
{
  ID2F340=8;
}

void EnableLeft(lv_event_t * e)
{
  ID2F340=9;
}

void EnableEnter(lv_event_t * e)
{
  ID2F340=10;
}

void EnableLeftvent(lv_event_t * e)
{
  ID2F340=11;
}

void EnableHud(lv_event_t * e)
{
  ID2F340=12;
}

/*void FanSpeedSet(lv_event_t * e);

{
  lv_obj_get_height
 
		if (ID2F316 > 0x10) {
			ID2F316=10;
			}  
}
*/
void loop()
{

  lv_tick_inc(millis() - lastTick); // Update the tick timer. Tick is new for LVGL 9
  lastTick = millis();
  lv_timer_handler(); // Update the UI
  delay(5);

  _ui_label_set_property(ui_LabelLEFTTEMP, _UI_LABEL_PROPERTY_TEXT, String(ID2F30/2+15).c_str());
  _ui_label_set_property(ui_LabellRIGHTTEMP, _UI_LABEL_PROPERTY_TEXT, String(ID2F38/2+15).c_str());
  _ui_label_set_property(ui_LabellFanSegment, _UI_LABEL_PROPERTY_TEXT, String(ID2F316).c_str());

  ID2F30 = lv_slider_get_value(ui_Sliderleft);
  ID2F38 = lv_slider_get_value(ui_Sliderright);
  ID2F316 = lv_slider_get_value(ui_Sliderfan);




    CAN_FRAME txFrame;
    txFrame.rtr = 0;
    txFrame.id = 0x421;
    txFrame.extended = false;
    txFrame.length = 8;
    txFrame.data.byte[0] = 0xCB;
    txFrame.data.byte[1] = 0x29;
    txFrame.data.byte[2] = 0xA7;
    txFrame.data.byte[3] = 0x00;
	  txFrame.data.byte[4] = 0x02;
    txFrame.data.byte[5] = 0x00;
    txFrame.data.byte[6] = 0xA0;
    txFrame.data.byte[7] = 0x62;
    CAN0.sendFrame(txFrame);

	  delay(5);
		CAN_FRAME frame421;
    frame421.rtr = 0;
    frame421.id = 0x421;
    frame421.extended = false;
    frame421.length = 7;
    frame421.data.byte[0] = 0x00;
    frame421.data.byte[1] = 0x0A;
    frame421.data.byte[2] = 0x00;
    frame421.data.byte[3] = 0x10;
	  frame421.data.byte[4] = 0x00;
    frame421.data.byte[5] = 0x00;
    frame421.data.byte[6] = 0x00;
    CAN0.sendFrame(frame421);

    delay(5);

    CAN_FRAME frame212;
    frame212.rtr = 0;
    frame212.id = 0x212;
    frame212.extended = false;
    frame212.length = 8;
    frame212.data.byte[0] = 0xB9;
    frame212.data.byte[1] = 0x04;
    frame212.data.byte[2] = 0xBB;
    frame212.data.byte[3] = 0x0D;
	  frame212.data.byte[4] = 0x01;
    frame212.data.byte[5] = 0xFF;
    frame212.data.byte[6] = 0x3F;
    frame212.data.byte[7] = 0x01;
    CAN0.sendFrame(frame212);


	  delay(5);

     CAN_FRAME frame261;
    frame261.rtr = 0;
    frame261.id = 0x261;
    frame261.extended = false;
    frame261.length = 8;
    frame261.data.byte[0] = 0xFA;
    frame261.data.byte[1] = 0x19;
    frame261.data.byte[2] = 0xCC;
    frame261.data.byte[3] = 0x05;
	  frame261.data.byte[4] = 0x09;
    frame261.data.byte[5] = 0x40;
    frame261.data.byte[6] = 0x18;
    frame261.data.byte[7] = 0x00;
    CAN0.sendFrame(frame261);


	  delay(5);

		

		
		/*ID2F30 = ID2F30 +1;
		if (ID2F30 > 0x15) {
			ID2F30=0;
			}

    ID2F38 = ID2F38 +2;
		if (ID2F38 > 0x16) {
			ID2F38=0;
			}  
    */  
		

    CAN_FRAME texFrame;
    texFrame.rtr = 0;
    texFrame.id = 0x2F3;
    texFrame.extended = false;
    texFrame.length = 7;
    texFrame.data.byte[0] = ID2F30;
    texFrame.data.byte[1] = ID2F38;
    texFrame.data.byte[2] = ID2F316;
    texFrame.data.byte[3] = ID2F324;
	  texFrame.data.byte[4] = ID2F332;
    texFrame.data.byte[5] = ID2F348;
    texFrame.data.byte[6] = ID2F356;
    CAN0.sendFrame(texFrame);



}

// put function definitions here:
int myFunction(int x, int y)
{
  return x + y;
}