
#include <Arduino.h>
#include <U8g2lib.h>
 
#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif
#include "1.c"
#include "2.c"
#include "3.c"
#include "4.c"
#include "5.c"
#include "6.c"
#include "7.c"
#include "8.c"
#include "9.c"
#include "10.c"
#include "11.c"
#include "12.c"
#include "13.c"
#include "14.c"
#include "15.c"
#include "16.c"
#include "17.c"
#include "18.c"
#include "19.c"
#include "20.c"
#include "21.c"
#include "22.c"
#include "23.c"
#include "24.c"
#include "25.c"
#include "26.c"
#include "27.c"
#include "28.c"
#include "29.c"
#include "30.c"
#include "k.c"
U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
 
#define bmp_x 128
#define bmp_y 64




void setup(void) {
  u8g2.begin();  
  u8g2.clearDisplay();
}
 
void loop(void) {
  
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_1);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_2);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_3);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_4);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_5);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_6);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_7);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_8);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_9);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_10);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_11);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_12);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_13);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_14);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_15);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_1);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_2);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_3);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_4);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_5);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_6);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_7);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_8);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_9);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_10);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_11);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_12);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_13);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_14);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_15);
  } while ( u8g2.nextPage() );

u8g2.clearDisplay();  
u8g2.firstPage();
  do {
    u8g2.drawXBMP(32,0, 64, 64, gImage_k);
  } while ( u8g2.nextPage() );
delay (1000) ;
  u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_16);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_17);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_18);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_19);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_20);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_21);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_22);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_23);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_24);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_25);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_26);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_27);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_28);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_29);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_30);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_16);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_17);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_18);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_19);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_20);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_21);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_22);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_23);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_24);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_25);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_26);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_27);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_28);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_29);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_30);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_16);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_17);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_18);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_19);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_20);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_21);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_22);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_23);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_24);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_25);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_26);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_27);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_28);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_29);
  } while ( u8g2.nextPage() );
u8g2.firstPage();
  do {
    u8g2.drawXBMP(0,0, bmp_x, bmp_y, gImage_30);
  } while ( u8g2.nextPage() );

u8g2.clearDisplay();
u8g2.firstPage();
  do {
    u8g2.drawXBMP(32,0, 64, 64, gImage_k);
  } while ( u8g2.nextPage() );
delay (1000) ;
}
