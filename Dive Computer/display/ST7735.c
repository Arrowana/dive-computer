#include "ST7735.h"
#include "glcdfont.c"

#define LOW  0
#define HIGH 1
#define LCD_C LOW
#define LCD_D HIGH

struct io_descriptor *io_lcd_spi;

// "Attributes"
uint8_t _height;
uint8_t _width;
uint8_t tabcolor;
uint8_t _rst = 0;

uint8_t colstart, rowstart, xstart, ystart;

#define DELAY 0x80
static const uint8_t
Bcmd[] = {                  // Initialization commands for 7735B screens
	18,                       // 18 commands in list:
	ST7735_SWRESET,   DELAY,  //  1: Software reset, no args, w/delay
	50,                     //     50 ms delay
	ST7735_SLPOUT ,   DELAY,  //  2: Out of sleep mode, no args, w/delay
	255,                    //     255 = 500 ms delay
	ST7735_COLMOD , 1+DELAY,  //  3: Set color mode, 1 arg + delay:
	0x05,                   //     16-bit color
	10,                     //     10 ms delay
	ST7735_FRMCTR1, 3+DELAY,  //  4: Frame rate control, 3 args + delay:
	0x00,                   //     fastest refresh
	0x06,                   //     6 lines front porch
	0x03,                   //     3 lines back porch
	10,                     //     10 ms delay
	ST7735_MADCTL , 1      ,  //  5: Memory access ctrl (directions), 1 arg:
	0x08,                   //     Row addr/col addr, bottom to top refresh
	ST7735_DISSET5, 2      ,  //  6: Display settings #5, 2 args, no delay:
	0x15,                   //     1 clk cycle nonoverlap, 2 cycle gate
	//     rise, 3 cycle osc equalize
	0x02,                   //     Fix on VTL
	ST7735_INVCTR , 1      ,  //  7: Display inversion control, 1 arg:
	0x0,                    //     Line inversion
	ST7735_PWCTR1 , 2+DELAY,  //  8: Power control, 2 args + delay:
	0x02,                   //     GVDD = 4.7V
	0x70,                   //     1.0uA
	10,                     //     10 ms delay
	ST7735_PWCTR2 , 1      ,  //  9: Power control, 1 arg, no delay:
	0x05,                   //     VGH = 14.7V, VGL = -7.35V
	ST7735_PWCTR3 , 2      ,  // 10: Power control, 2 args, no delay:
	0x01,                   //     Opamp current small
	0x02,                   //     Boost frequency
	ST7735_VMCTR1 , 2+DELAY,  // 11: Power control, 2 args + delay:
	0x3C,                   //     VCOMH = 4V
	0x38,                   //     VCOML = -1.1V
	10,                     //     10 ms delay
	ST7735_PWCTR6 , 2      ,  // 12: Power control, 2 args, no delay:
	0x11, 0x15,
	ST7735_GMCTRP1,16      ,  // 13: Magical unicorn dust, 16 args, no delay:
	0x09, 0x16, 0x09, 0x20, //     (seriously though, not sure what
	0x21, 0x1B, 0x13, 0x19, //      these config values represent)
	0x17, 0x15, 0x1E, 0x2B,
	0x04, 0x05, 0x02, 0x0E,
	ST7735_GMCTRN1,16+DELAY,  // 14: Sparkles and rainbows, 16 args + delay:
	0x0B, 0x14, 0x08, 0x1E, //     (ditto)
	0x22, 0x1D, 0x18, 0x1E,
	0x1B, 0x1A, 0x24, 0x2B,
	0x06, 0x06, 0x02, 0x0F,
	10,                     //     10 ms delay
	ST7735_CASET  , 4      ,  // 15: Column addr set, 4 args, no delay:
	0x00, 0x02,             //     XSTART = 2
	0x00, 0x81,             //     XEND = 129
	ST7735_RASET  , 4      ,  // 16: Row addr set, 4 args, no delay:
	0x00, 0x02,             //     XSTART = 1
	0x00, 0x81,             //     XEND = 160
	ST7735_NORON  ,   DELAY,  // 17: Normal display on, no args, w/delay
	10,                     //     10 ms delay
	ST7735_DISPON ,   DELAY,  // 18: Main screen turn on, no args, w/delay
255 },                  //     255 = 500 ms delay

Rcmd1[] = {                 // Init for 7735R, part 1 (red or green tab)
	15,                       // 15 commands in list:
	ST7735_SWRESET,   DELAY,  //  1: Software reset, 0 args, w/delay
	150,                    //     150 ms delay
	ST7735_SLPOUT ,   DELAY,  //  2: Out of sleep mode, 0 args, w/delay
	255,                    //     500 ms delay
	ST7735_FRMCTR1, 3      ,  //  3: Frame rate ctrl - normal mode, 3 args:
	0x01, 0x2C, 0x2D,       //     Rate = fosc/(1x2+40) * (LINE+2C+2D)
	ST7735_FRMCTR2, 3      ,  //  4: Frame rate control - idle mode, 3 args:
	0x01, 0x2C, 0x2D,       //     Rate = fosc/(1x2+40) * (LINE+2C+2D)
	ST7735_FRMCTR3, 6      ,  //  5: Frame rate ctrl - partial mode, 6 args:
	0x01, 0x2C, 0x2D,       //     Dot inversion mode
	0x01, 0x2C, 0x2D,       //     Line inversion mode
	ST7735_INVCTR , 1      ,  //  6: Display inversion ctrl, 1 arg, no delay:
	0x07,                   //     No inversion
	ST7735_PWCTR1 , 3      ,  //  7: Power control, 3 args, no delay:
	0xA2,
	0x02,                   //     -4.6V
	0x84,                   //     AUTO mode
	ST7735_PWCTR2 , 1      ,  //  8: Power control, 1 arg, no delay:
	0xC5,                   //     VGH25 = 2.4C VGSEL = -10 VGH = 3 * AVDD
	ST7735_PWCTR3 , 2      ,  //  9: Power control, 2 args, no delay:
	0x0A,                   //     Opamp current small
	0x00,                   //     Boost frequency
	ST7735_PWCTR4 , 2      ,  // 10: Power control, 2 args, no delay:
	0x8A,                   //     BCLK/2, Opamp current small & Medium low
	0x2A,
	ST7735_PWCTR5 , 2      ,  // 11: Power control, 2 args, no delay:
	0x8A, 0xEE,
	ST7735_VMCTR1 , 1      ,  // 12: Power control, 1 arg, no delay:
	0x0E,
	ST7735_INVOFF , 0      ,  // 13: Don't invert display, no args, no delay
	ST7735_MADCTL , 1      ,  // 14: Memory access control (directions), 1 arg:
	0xC8,                   //     row addr/col addr, bottom to top refresh
	ST7735_COLMOD , 1      ,  // 15: set color mode, 1 arg, no delay:
0x05 },                 //     16-bit color

Rcmd2green[] = {            // Init for 7735R, part 2 (green tab only)
	2,                        //  2 commands in list:
	ST7735_CASET  , 4      ,  //  1: Column addr set, 4 args, no delay:
	0x00, 0x02,             //     XSTART = 0
	0x00, 0x7F+0x02,        //     XEND = 127
	ST7735_RASET  , 4      ,  //  2: Row addr set, 4 args, no delay:
	0x00, 0x01,             //     XSTART = 0
0x00, 0x9F+0x01 },      //     XEND = 159

Rcmd2red[] = {              // Init for 7735R, part 2 (red tab only)
	2,                        //  2 commands in list:
	ST7735_CASET  , 4      ,  //  1: Column addr set, 4 args, no delay:
	0x00, 0x00,             //     XSTART = 0
	0x00, 0x7F,             //     XEND = 127
	ST7735_RASET  , 4      ,  //  2: Row addr set, 4 args, no delay:
	0x00, 0x00,             //     XSTART = 0
0x00, 0x9F },           //     XEND = 159

Rcmd2green144[] = {              // Init for 7735R, part 2 (green 1.44 tab)
	2,                        //  2 commands in list:
	ST7735_CASET  , 4      ,  //  1: Column addr set, 4 args, no delay:
	0x00, 0x00,             //     XSTART = 0
	0x00, 0x7F,             //     XEND = 127
	ST7735_RASET  , 4      ,  //  2: Row addr set, 4 args, no delay:
	0x00, 0x00,             //     XSTART = 0
0x00, 0x7F },           //     XEND = 127

Rcmd2green160x80[] = {              // Init for 7735R, part 2 (mini 160x80)
	2,                        //  2 commands in list:
	ST7735_CASET  , 4      ,  //  1: Column addr set, 4 args, no delay:
	0x00, 0x00,             //     XSTART = 0
	0x00, 0x7F,             //     XEND = 79
	ST7735_RASET  , 4      ,  //  2: Row addr set, 4 args, no delay:
	0x00, 0x00,             //     XSTART = 0
0x00, 0x9F },           //     XEND = 159


Rcmd3[] = {                 // Init for 7735R, part 3 (red or green tab)
	4,                        //  4 commands in list:
	ST7735_GMCTRP1, 16      , //  1: Magical unicorn dust, 16 args, no delay:
	0x02, 0x1c, 0x07, 0x12,
	0x37, 0x32, 0x29, 0x2d,
	0x29, 0x25, 0x2B, 0x39,
	0x00, 0x01, 0x03, 0x10,
	ST7735_GMCTRN1, 16      , //  2: Sparkles and rainbows, 16 args, no delay:
	0x03, 0x1d, 0x07, 0x06,
	0x2E, 0x2C, 0x29, 0x2D,
	0x2E, 0x2E, 0x37, 0x3F,
	0x00, 0x00, 0x02, 0x10,
	ST7735_NORON  ,    DELAY, //  3: Normal display on, no args, w/delay
	10,                     //     10 ms delay
	ST7735_DISPON ,    DELAY, //  4: Main screen turn on, no args w/delay
100 };                  //     100 ms delay

void setAddrWindow(uint8_t x0, uint8_t y0, uint8_t x1, uint8_t y1) {
	writecommand(ST7735_CASET); // Column addr set
	writedata(0x00);
	writedata(x0+xstart);     // XSTART
	writedata(0x00);
	writedata(x1+xstart);     // XEND

	writecommand(ST7735_RASET); // Row addr set
	writedata(0x00);
	writedata(y0+ystart);     // YSTART
	writedata(0x00);
	writedata(y1+ystart);     // YEND

	writecommand(ST7735_RAMWR); // write to RAM
}

void fillScreen(uint16_t color) {
	fillRect(0, 0,  _width, _height, color);
}

uint16_t line_buffer[128];

// fill a rectangle
void fillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color) {
	// rudimentary clipping (drawChar w/big text requires this)
	if((x >= _width) || (y >= _height)) return;
	if((x + w - 1) >= _width)  w = _width  - x;
	if((y + h - 1) >= _height) h = _height - y;

	setAddrWindow(x, y, x+w-1, y+h-1);

	uint8_t hi = color >> 8, lo = color;
	
	//Byte swap for MSB first
	uint8_t color_buff[2];
	color_buff[0] = color >> 8;
	color_buff[1] = color & 0xff;

	DC_HIGH();
	CS_LOW();
	for(y=h; y>0; y--) {
		for(x=w; x>0; x--) {
			io_write(io_lcd_spi, color_buff, 2);
		}
	}
	CS_HIGH();
}

void drawPixel(int16_t x, int16_t y, uint16_t color) {

	if((x < 0) ||(x >= _width) || (y < 0) || (y >= _height)) return;

	setAddrWindow(x,y,x+1,y+1);

	uint8_t color_buff[2];
	color_buff[0] = color >> 8;
	color_buff[1] = color & 0xff;

	DC_HIGH();
	CS_LOW();
	io_write(io_lcd_spi, color_buff, 2);
	CS_HIGH();
}

#define MADCTL_MY  0x80
#define MADCTL_MX  0x40
#define MADCTL_MV  0x20
#define MADCTL_ML  0x10
#define MADCTL_RGB 0x00
#define MADCTL_BGR 0x08
#define MADCTL_MH  0x04

void setRotation(uint8_t m) {

  writecommand(ST7735_MADCTL);
  uint8_t rotation = m % 4; // can't be higher than 3
  switch (rotation) {
   case 0:
     if ((tabcolor == INITR_BLACKTAB) || (tabcolor == INITR_MINI160x80)) {
       writedata(MADCTL_MX | MADCTL_MY | MADCTL_RGB);
     } else {
       writedata(MADCTL_MX | MADCTL_MY | MADCTL_BGR);
     }

     if (tabcolor == INITR_144GREENTAB) {
       _height = ST7735_TFTHEIGHT_128;
       _width  = ST7735_TFTWIDTH_128;
     } else if (tabcolor == INITR_MINI160x80)  {
       _height = ST7735_TFTHEIGHT_160;
       _width = ST7735_TFTWIDTH_80;
     } else {
       _height = ST7735_TFTHEIGHT_160;
       _width  = ST7735_TFTWIDTH_128;
     }
     xstart = colstart;
     ystart = rowstart;
     break;
   case 1:
     if ((tabcolor == INITR_BLACKTAB) || (tabcolor == INITR_MINI160x80)) {
       writedata(MADCTL_MY | MADCTL_MV | MADCTL_RGB);
     } else {
       writedata(MADCTL_MY | MADCTL_MV | MADCTL_BGR);
     }

     if (tabcolor == INITR_144GREENTAB)  {
       _width = ST7735_TFTHEIGHT_128;
       _height = ST7735_TFTWIDTH_128;
     } else if (tabcolor == INITR_MINI160x80)  {
       _width = ST7735_TFTHEIGHT_160;
       _height = ST7735_TFTWIDTH_80;
     } else {
       _width = ST7735_TFTHEIGHT_160;
       _height = ST7735_TFTWIDTH_128;
     }
     ystart = colstart;
     xstart = rowstart;
     break;
  case 2:
     if ((tabcolor == INITR_BLACKTAB) || (tabcolor == INITR_MINI160x80)) {
       writedata(MADCTL_RGB);
     } else {
       writedata(MADCTL_BGR);
     }

     if (tabcolor == INITR_144GREENTAB) {
       _height = ST7735_TFTHEIGHT_128;
       _width  = ST7735_TFTWIDTH_128;
     } else if (tabcolor == INITR_MINI160x80)  {
       _height = ST7735_TFTHEIGHT_160;
       _width = ST7735_TFTWIDTH_80;
     } else {
       _height = ST7735_TFTHEIGHT_160;
       _width  = ST7735_TFTWIDTH_128;
     }
     xstart = colstart;
     ystart = rowstart;
     break;
   case 3:
     if ((tabcolor == INITR_BLACKTAB) || (tabcolor == INITR_MINI160x80)) {
       writedata(MADCTL_MX | MADCTL_MV | MADCTL_RGB);
     } else {
       writedata(MADCTL_MX | MADCTL_MV | MADCTL_BGR);
     }

     if (tabcolor == INITR_144GREENTAB)  {
       _width = ST7735_TFTHEIGHT_128;
       _height = ST7735_TFTWIDTH_128;
     } else if (tabcolor == INITR_MINI160x80)  {
       _width = ST7735_TFTHEIGHT_160;
       _height = ST7735_TFTWIDTH_80;
     } else {
       _width = ST7735_TFTHEIGHT_160;
       _height = ST7735_TFTWIDTH_128;
     }
     ystart = colstart;
     xstart = rowstart;
     break;
  }
}


void commandList(const uint8_t *addr) {

	uint8_t  numCommands, numArgs;
	uint16_t ms;

	numCommands = pgm_read_byte(addr++);   // Number of commands to follow
	while(numCommands--) {                 // For each command...
		writecommand(pgm_read_byte(addr++)); //   Read, issue command
		numArgs  = pgm_read_byte(addr++);    //   Number of args to follow
		ms       = numArgs & DELAY;          //   If hibit set, delay follows args
		numArgs &= ~DELAY;                   //   Mask out delay bit
		while(numArgs--) {                   //   For each argument...
			writedata(pgm_read_byte(addr++));  //     Read, issue argument
		}

		if(ms) {
			ms = pgm_read_byte(addr++); // Read post-command delay time (ms)
			if(ms == 255) ms = 500;     // If 255, delay for 500 ms
			delay(ms);
		}
	}
}

void ST7735_backLight(uint8_t state)
{
  if(state)
	gpio_set_pin_level(GPIO_PIN_BKL, HIGH);
  else
	gpio_set_pin_level(GPIO_PIN_BKL, LOW);
}

void writecommand(uint8_t c) {
	DC_LOW();
	CS_LOW();
	io_write(io_lcd_spi, &c, 1);
	CS_HIGH();
}

void writedata(uint8_t c) {
	DC_HIGH();
	CS_LOW();
	io_write(io_lcd_spi, &c, 1);
	CS_HIGH();
}

uint8_t gfxFont = 0;

void drawChar(int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size)
{
    if(!gfxFont) { // 'Classic' built-in font

        if((x >= _width)            || // Clip right
           (y >= _height)           || // Clip bottom
           ((x + 6 * size - 1) < 0) || // Clip left
           ((y + 8 * size - 1) < 0))   // Clip top
            return;

        for(int8_t i=0; i<5; i++ ) { // Char bitmap = 5 columns
            uint8_t line = font[c * 5 + i];
            for(int8_t j=0; j<8; j++, line >>= 1) {
                if(line & 1) {
                    if(size == 1)
                        drawPixel(x+i, y+j, color);
                    else
                        fillRect(x+i*size, y+j*size, size, size, color);
                } else if(bg != color) {
                    if(size == 1)
                        drawPixel(x+i, y+j, bg);
                    else
                        fillRect(x+i*size, y+j*size, size, size, bg);
                }
            }
        }
	}
}

void fastDrawChar(int16_t x, int16_t y, unsigned char c, uint16_t color, uint16_t bg, uint8_t size)
{
	//Buffer whole character before sending to save function reduce function calls
    if((x >= _width)            || // Clip right
        (y >= _height)           || // Clip bottom
        ((x + 6 * size - 1) < 0) || // Clip left
        ((y + 8 * size - 1) < 0))   // Clip top
        return;

	uint8_t color_buff[2];
	color_buff[0] = color >> 8;
	color_buff[1] = color & 0xff;
	
	uint8_t* char_buffer = (uint8_t*) malloc(5 * 8 * size * 2);

    for(int8_t i=0; i<5; i++ ) { // Char bitmap = 5 columns
        uint8_t line = font[c * 5 + i];
		
        for(int8_t j=0; j<8; j++, line >>= 1) {
            if(line & 1) {
                if(size == 1) {
					//drawPixel(x+i, y+j, color);
					char_buffer[(x + i + 5 * (y + j)) * 2] = color_buff[0];
					char_buffer[(x + i + 5 * (y + j)) * 2 + 1] = color_buff[1];
				} else {
					//fillRect(x+i*size, y+j*size, size, size, color);
					for(uint8_t v=0;v<size;v++) {
						for(uint8_t u=0;u<size;u++) {
							char_buffer[(x + i + u + 5 * (y + j + v)) * 2] = color_buff[0];
							char_buffer[(x + i + u + 5 * (y + j + v)) * 2 + 1] = color_buff[1];
						}
					}
				}
            } else if(bg != color) {
                if(size == 1) {
					//drawPixel(x+i, y+j, bg);
				} else {
					//fillRect(x+i*size, y+j*size, size, size, bg);
				}
            }
        }
    }
	setAddrWindow(x, y, x + 5 * size - 1, y + 8 * size - 1);
	
	DC_HIGH();
	CS_LOW();
	io_write(io_lcd_spi, char_buffer, 5 * 8 * size * 2);
	CS_HIGH();

	free(char_buffer);
}

uint8_t cursor_x = 0;
uint8_t cursor_y = 0;
uint8_t textsize = 1;
uint16_t textcolor = ST7735_WHITE;
uint16_t textbgcolor = ST7735_BLACK;

void ST7732_set_cursor(uint8_t x, uint8_t y)
{
	cursor_x = x;
	cursor_y = y;
}

void ST7735_set_text_size(uint8_t new_text_size)
{
	textsize = new_text_size;
}

void ST7735_print(unsigned char* string)
{
	do
	{
		write(*string);
	} while (*++string);
}

void ST7735_drawBitmap(int16_t x, int16_t y, const uint8_t bitmap[], int16_t w, int16_t h, uint16_t color)
{
    int16_t byteWidth = (w + 7) / 8; // Bitmap scanline pad = whole byte
    uint8_t byte = 0;

    for(int16_t j=0; j<h; j++, y++) {
        for(int16_t i=0; i<w; i++) {
            if(i & 7) byte <<= 1;
            else      byte   = bitmap[j * byteWidth + i / 8];
            if(byte & 0x80) drawPixel(x+i, y, color);
        }
    }
}

void fastFillRect(int16_t x, int16_t y, int16_t w, int16_t h, uint16_t color)
{
	// rudimentary clipping (drawChar w/big text requires this)
	if((x >= _width) || (y >= _height)) return;
	if((x + w - 1) >= _width)  w = _width  - x;
	if((y + h - 1) >= _height) h = _height - y;

	setAddrWindow(x, y, x+w-1, y+h-1);
	uint8_t hi = color >> 8, lo = color;
	
	//Byte swap for MSB first
	uint8_t color_buff[2];
	color_buff[0] = color >> 8;
	color_buff[1] = color & 0xff;
	
	uint8_t* buffer = (uint8_t*) malloc(2*h*w);
	
	for(uint16_t i = 0;i<2*h*w;i+=2) {
		buffer[i] = hi;
		buffer[i+1] = lo;
	}
	
	DC_HIGH();
	CS_LOW();
	io_write(io_lcd_spi, buffer, 2 * h * w);
	CS_HIGH();

	free(buffer);
}

void write(uint8_t c)
{
	if(c == '\n')
	{ 
		cursor_x  = 0;                     // Reset x to zero,
		cursor_y += textsize * 8;          // advance y one line
	}
	else if (c == '\r')
	{
		cursor_x  = 0;                 // Reset x to zero,
	}
	else
	{
		drawChar(cursor_x, cursor_y, c, textcolor, textbgcolor, textsize);
		cursor_x += textsize * 6;          // Advance x one char
	}
}

commonInit(const uint8_t *cmdList) {
	//GPIO init - In this case we initialize somewhere else?

	// toggle RST low to reset; CS low so it'll listen to us
	CS_LOW();
	if (_rst != -1) {
		gpio_set_pin_level(GPIO_PIN_RST, HIGH);
		delay(500);
		gpio_set_pin_level(GPIO_PIN_RST, LOW);
		delay(500);
		gpio_set_pin_level(GPIO_PIN_RST, HIGH);
		delay(500);
	}

	if(cmdList) commandList(cmdList);
}

// Initialization for ST7735R screens (green or red tabs)
void initR(uint8_t options) {
	commonInit(Rcmd1);
	if(options == INITR_GREENTAB) {
		commandList(Rcmd2green);
		colstart = 2;
		rowstart = 1;
		} else if(options == INITR_144GREENTAB) {
		_height = ST7735_TFTHEIGHT_128;
		_width = ST7735_TFTWIDTH_128;
		commandList(Rcmd2green144);
		colstart = 2;
		rowstart = 3;
		} else if(options == INITR_MINI160x80) {
		_height = ST7735_TFTHEIGHT_160;
		_width = ST7735_TFTWIDTH_80;
		commandList(Rcmd2green160x80);
		colstart = 24;
		rowstart = 0;
		} else {
		// colstart, rowstart left at default '0' values
		commandList(Rcmd2red);
	}
	commandList(Rcmd3);
	tabcolor = options;
	setRotation(0);
}