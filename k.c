const unsigned char gImage_k[512] = { /* 0X20,0X01,0X3F,0X00,0X40,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X60,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFC,0X03,0X00,0X00,
0X00,0X00,0X00,0X00,0XFE,0X1F,0X00,0X00,0X00,0X00,0X80,0X3F,0X07,0X3C,0X00,0X00,
0X00,0X00,0XE0,0X7F,0X03,0XF0,0X00,0X00,0X00,0X00,0XFC,0XE0,0X01,0XC0,0X03,0X00,
0X00,0X00,0X1F,0X00,0X00,0X80,0X07,0X00,0X00,0X80,0X07,0X00,0X00,0X00,0X0E,0X00,
0X00,0XE0,0X01,0X00,0X31,0X00,0X1C,0X00,0X00,0X70,0X00,0X80,0XFB,0X00,0X78,0X00,
0X00,0X3C,0X00,0XC0,0XFD,0X01,0XF0,0X00,0X00,0X1E,0X00,0XC0,0X8E,0X03,0XC0,0X01,
0X00,0X07,0X00,0XC0,0XFF,0X07,0X80,0X03,0X80,0X03,0X00,0XE0,0XFF,0X8F,0X01,0X03,
0XC0,0X01,0X00,0XE0,0X03,0X9C,0X03,0X07,0XE0,0X00,0X00,0X60,0X00,0X18,0X07,0X0E,
0X70,0X00,0X00,0X60,0X00,0X38,0X0E,0X0C,0X38,0X60,0X00,0X60,0X00,0X30,0X0C,0X0C,
0X18,0X70,0X00,0XE0,0X07,0X70,0X1C,0X18,0X1C,0X30,0X00,0XF0,0X1F,0X78,0X18,0X18,
0X0C,0X30,0X00,0X30,0X38,0X7C,0X38,0X38,0X06,0X38,0X00,0X30,0X70,0X6E,0X30,0X30,
0X76,0X18,0X00,0X30,0XE0,0XE6,0X71,0X30,0X33,0X18,0X00,0X30,0XC0,0XE3,0X7F,0X30,
0X33,0X18,0X00,0X30,0XD8,0X03,0X7F,0X30,0X37,0X18,0X00,0X33,0XBC,0X01,0XFF,0X30,
0X3E,0X18,0X30,0X3F,0XBE,0X01,0XCF,0X30,0X30,0X18,0X38,0X7F,0XBE,0X01,0XEF,0X30,
0X30,0X18,0XD8,0X33,0X9C,0X03,0XEF,0X39,0X30,0X18,0XF8,0X07,0XC0,0X03,0XB0,0X1F,
0X30,0X18,0X38,0X0E,0XC0,0X06,0X38,0X0F,0X30,0X1F,0X38,0X1C,0X70,0X0E,0X9C,0X07,
0XF0,0X1F,0X78,0X78,0XFC,0XFF,0XEF,0X07,0XF0,0XFF,0XFF,0XE0,0X1F,0XF8,0XF3,0X07,
0X20,0XFF,0XFF,0X00,0X07,0X60,0XF0,0X07,0XF0,0XFB,0XFF,0X00,0X02,0XC0,0XF8,0X07,
0XFF,0XF3,0XFF,0X00,0X03,0XC0,0XF8,0X07,0XFF,0XF3,0XFF,0X00,0X03,0XE0,0XF8,0X07,
0XC3,0XF3,0XFF,0X00,0X1F,0XFE,0XF8,0X07,0XC1,0XE7,0XFF,0X00,0XFE,0XCF,0XF8,0X07,
0XFF,0XE7,0X7F,0X00,0X0E,0X60,0XF0,0X03,0XFF,0XCF,0X3F,0X00,0X3C,0X38,0XF0,0X03,
0XD3,0X1F,0X0F,0X00,0XF0,0X1F,0XE0,0X01,0X00,0X3F,0XC0,0XFF,0X01,0X00,0XE0,0X00,
0X01,0X7F,0XFF,0XFF,0X7F,0X00,0XFC,0X00,0X02,0XFF,0XFF,0XFF,0XFF,0X1F,0XFC,0X07,
0X3F,0XFE,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,
0XFC,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X07,0XA8,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X03,
0X00,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0X03,0X00,0X03,0XF8,0XFF,0XFF,0XFF,0X1F,0X02,
0X00,0X03,0XF0,0XFF,0XFF,0XFF,0X03,0X02,0X01,0X7F,0XC0,0XFF,0XFF,0XFF,0X81,0X03,
0X0B,0XFF,0XC3,0XFE,0XFF,0X9F,0XE0,0X03,0X0F,0XFF,0X87,0XE0,0XFF,0XE0,0XF8,0X03,
0X7E,0XFF,0X8F,0X1F,0X04,0X7F,0XFC,0X07,0X70,0XFF,0X8F,0XFF,0XF3,0X7F,0XFC,0X07,
0XF0,0XFF,0X9F,0XFF,0XF3,0X7F,0XFE,0X0F,0X80,0XFF,0X9F,0XFF,0XC1,0X7F,0XFE,0X0F,
0X80,0XFF,0X9F,0XFF,0XC1,0X7F,0XFE,0X0F,0X80,0XFF,0X9F,0XFF,0XC1,0X7F,0XFE,0X1F,
};
