#include "U8glib.h" // including the U8glib library


#define OLED_CLK_PIN 13  //Arduino Digital Pin D13: SCK


#define OLED_MOSI_PIN 11 //Arduino Digital Pin D11: MOSI


#define OLED_RES_PIN 10 //Arduino Digital Pin D10: SS


#define OLED_SDC_PIN 9  //Arduino Digital Pin D9: OC1A


#define OLED_CSS_PIN 8 //Arduino Digital Pin D13: ICP1


U8GLIB_SH1106_128X64 u8g(OLED_CLK_PIN, OLED_MOSI_PIN, OLED_RES_PIN, OLED_SDC_PIN, OLED_CSS_PIN);


//the custom made circuitdigest Bitmap -> Atharva YT


const uint8_t circuitdigest[] PROGMEM = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xf9, 0xfe, 0x60, 0x07, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xf9, 0xfe, 0x60, 0x07, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xe1, 0x81, 0x9f, 0xe7, 0x3f, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xe1, 0x81, 0x9f, 0xe7, 0x3f, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xf8, 0x1e, 0x7f, 0x87, 0x30, 0x33, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xf8, 0x1e, 0x7f, 0x87, 0x30, 0x33, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xe1, 0x99, 0xe0, 0x1f, 0x30, 0x33, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xe1, 0x99, 0xe0, 0x1f, 0x30, 0x33, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xfe, 0x60, 0x00, 0x07, 0x30, 0x33, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xfe, 0x60, 0x00, 0x07, 0x30, 0x33, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xee, 0x7f, 0x99, 0xe7, 0x3f, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xe6, 0x7f, 0x99, 0xe7, 0x3f, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xe6, 0x66, 0x66, 0x67, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xe6, 0x66, 0x66, 0x67, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x9f, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x8f, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x0c, 0x00, 0x60, 0x01, 0xf8, 0xcc, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x0e, 0x00, 0x60, 0x01, 0xf8, 0x8c, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0x01, 0xf9, 0xff, 0x87, 0x03, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0x01, 0xf9, 0xff, 0x86, 0x03, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xe1, 0x80, 0x01, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xe1, 0x80, 0x01, 0xf8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xe0, 0x1f, 0x87, 0x87, 0xcc, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0x3f, 0xc0, 0x1f, 0x87, 0x87, 0xcc, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0x01, 0x98, 0x79, 0x9f, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0xf0, 0x01, 0x98, 0x79, 0x9f, 0xfc, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xe0, 0x60, 0x06, 0x18, 0x33, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xe0, 0x60, 0x06, 0x18, 0x33, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc3, 0x3c, 0xfe, 0x79, 0x86, 0x67, 0x0c, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc3, 0x3c, 0xfe, 0x79, 0x86, 0x67, 0x0c, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xf8, 0x67, 0x9f, 0xe7, 0x03, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xff, 0xf8, 0x67, 0x9f, 0xe7, 0x03, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfc, 0x3c, 0xe1, 0xe6, 0x19, 0xff, 0xcc, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xfc, 0x3c, 0xe1, 0xe6, 0x19, 0xff, 0xcc, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x1e, 0x78, 0x07, 0x87, 0x03, 0x33, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc3, 0xcf, 0x1e, 0x78, 0x07, 0x87, 0x03, 0x33, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0xc0, 0x19, 0x87, 0x87, 0xff, 0xcf, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0xc0, 0x19, 0x87, 0x87, 0xff, 0xcf, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xcf, 0x18, 0x1f, 0x86, 0x1f, 0xc3, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xcf, 0x18, 0x1f, 0x86, 0x1f, 0xc3, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x30, 0xfc, 0x19, 0xe1, 0xe0, 0x03, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x30, 0xfe, 0x19, 0xe1, 0xe0, 0x03, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xe6, 0x7e, 0x63, 0xe0, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xe6, 0x7e, 0x67, 0xf0, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe1, 0xe6, 0x7e, 0x27, 0xf0, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xe6, 0x78, 0x18, 0x07, 0x30, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xee, 0x78, 0x18, 0x07, 0x70, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xff, 0xe6, 0x67, 0x87, 0xf3, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xff, 0xe6, 0x67, 0x83, 0xf3, 0xf3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xe0, 0x61, 0x81, 0xe0, 0x03, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xe0, 0x61, 0x81, 0xe0, 0x03, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xe0, 0x7e, 0x60, 0x1f, 0xcc, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xe0, 0x7e, 0x60, 0x1f, 0xcc, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xe6, 0x06, 0x06, 0x1f, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcc, 0x0c, 0xe6, 0x06, 0x06, 0x1f, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xe0, 0x1f, 0xe6, 0x07, 0xcc, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xcf, 0xfc, 0xe0, 0x1f, 0xe6, 0x07, 0xcc, 0xcf, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xe7, 0x87, 0xe0, 0x18, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xe7, 0x87, 0xe0, 0x18, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xff, 
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