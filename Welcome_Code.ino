#include "U8glib.h" // including the U8glib library


#define OLED_CLK_PIN 13  //Arduino Digital Pin D13: SCK


#define OLED_MOSI_PIN 11 //Arduino Digital Pin D11: MOSI


#define OLED_RES_PIN 10 //Arduino Digital Pin D10: SS


#define OLED_SDC_PIN 9  //Arduino Digital Pin D9: OC1A


#define OLED_CSS_PIN 8 //Arduino Digital Pin D13: ICP1


U8GLIB_SH1106_128X64 u8g(OLED_CLK_PIN, OLED_MOSI_PIN, OLED_RES_PIN, OLED_SDC_PIN, OLED_CSS_PIN);


//the custom made circuitdigest Bitmap


const uint8_t circuitdigest[] PROGMEM = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xc0, 0x00, 0x18, 0x7f, 0x83, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xe1, 0xc3, 0xbd, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf1, 0xc3, 0x7d, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf1, 0xe3, 0x7d, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf0, 0xe1, 0x7d, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xf8, 0xe0, 0xff, 0xd3, 0xe3, 0xe4, 0xfe, 0x4f, 0x0c, 0x30, 0xff, 0x4f, 0xff, 0xff, 
	0xff, 0xff, 0xf8, 0xf0, 0xfb, 0x99, 0xe3, 0xce, 0x7c, 0xe7, 0x8a, 0x2c, 0x7e, 0xe7, 0xff, 0xff, 
	0xff, 0xff, 0xf8, 0x70, 0xfb, 0x3c, 0xe3, 0xce, 0x7d, 0xe7, 0x87, 0x0e, 0x7c, 0xe3, 0xff, 0xff, 
	0xff, 0xff, 0xf8, 0x70, 0xfb, 0x3c, 0xe3, 0x9e, 0x79, 0xf3, 0x87, 0x1e, 0x7c, 0xe3, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x70, 0xf6, 0x3c, 0xe3, 0x9e, 0x71, 0xf3, 0x87, 0x1e, 0x78, 0xf3, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x38, 0xf6, 0x3c, 0x63, 0x1f, 0xf1, 0xf3, 0x8f, 0x1e, 0x38, 0xf3, 0xff, 0xff, 
	0xff, 0xff, 0xfc, 0x38, 0xf6, 0x3c, 0x63, 0x1f, 0xf1, 0xf1, 0x8f, 0x1e, 0x38, 0xf1, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0x38, 0x7e, 0x38, 0x63, 0x1f, 0xf1, 0xf1, 0x8f, 0x1e, 0x38, 0xe1, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0x38, 0x6e, 0x00, 0xe3, 0x1f, 0xf1, 0xf1, 0x8f, 0x1e, 0x30, 0x03, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0x34, 0x6e, 0x3f, 0xe3, 0x1f, 0xf1, 0xf1, 0x8f, 0x1e, 0x30, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xfe, 0x14, 0x2e, 0x3f, 0xe3, 0x1f, 0xf1, 0xf1, 0x8f, 0x1e, 0x30, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x14, 0x1e, 0x3f, 0xe3, 0x1f, 0xf1, 0xf1, 0x8f, 0x1e, 0x38, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x0e, 0x1e, 0x3f, 0xe3, 0x1f, 0xf1, 0xf1, 0x8f, 0x1e, 0x38, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x0e, 0x1e, 0x3f, 0xe3, 0x1f, 0xf1, 0xf3, 0x8f, 0x1e, 0x38, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x0e, 0x1e, 0x3f, 0xe3, 0x9f, 0xf9, 0xf3, 0x8f, 0x1e, 0x38, 0xfb, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x8f, 0x3f, 0x3e, 0xe3, 0x9f, 0x79, 0xe3, 0x8f, 0x1e, 0x3c, 0xfb, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x9f, 0x3f, 0x3f, 0xe3, 0xcf, 0x7c, 0xe7, 0x8f, 0x1e, 0x3c, 0xf7, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0x9f, 0x3f, 0x9d, 0xc3, 0xce, 0xfc, 0xef, 0x8e, 0x1c, 0x3e, 0x77, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0xe1, 0xff, 0x1f, 0xff, 0xff, 0xff, 0x1f, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};


void draw(void) {

  u8g.drawBitmapP( 0, 0, 16, 64, circuitdigest);
}


void setup() {


  //  empty setup function as the library manages all internally


}


void loop() {


  u8g.firstPage();  //A call to this procedure, marks the beginning of the picture loop.


  do {


    draw();


  } while( u8g.nextPage() ); // A call to this procedure, marks the end of the body of the picture loop.


  // rebuild the picture after some delay


  delay(1000);


}
