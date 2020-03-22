/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_menu_logo.bmp Opened.
Bmp signature found.
Bmp width: 144
Bmp height: 24
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
16 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 1728 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_menu_logo {
  enum {
    w = 18,
    h = 3,
    size = 54,
  };
  const unsigned short palette[] = {
    0x0,0x842,0x1084,0x1ce7,0x2529,0x2d6b,0x35ad,0x3def,0x4210,0x4a52,0x56b5,0x5ef7,0x6318,0x6f7b,0x739c,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x61,0x66,
    0x0,0x0,0xf0,0xff,
    0x0,0x0,0xa0,0xff,
    0x0,0x0,0x50,0xff,
    0x0,0x0,0x0,0xff,
    0x0,0x0,0x0,0xfa,
    0x0,0x0,0x0,0xf5,
    
    // Tile [1 , 0] 
    0x0,0x0,0x0,0x0,
    0x6,0x0,0x0,0x0,
    0x2f,0x0,0x0,0x0,
    0x7f,0x0,0x0,0x0,
    0xcf,0x0,0x0,0x0,
    0xff,0x1,0x0,0x0,
    0xff,0x5,0x0,0x0,
    0xff,0xa,0x0,0x0,
    
    // Tile [2 , 0] 
    0x0,0x0,0x0,0x0,
    0x10,0x66,0x66,0x0,
    0x50,0xff,0xcf,0x0,
    0xa0,0xff,0x7f,0x0,
    0xe0,0xff,0x1f,0x0,
    0xf3,0xff,0xc,0x0,
    0xf8,0xff,0x6,0x0,
    0xfd,0xff,0x1,0x50,
    
    // Tile [3 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x22,0x12,0x0,0x0,
    0xff,0x8f,0x0,0x0,
    
    // Tile [4 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x10,0x22,0x2,0x0,
    0xc0,0xff,0x2f,0x0,
    
    // Tile [5 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x60,0x66,0x5,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    
    // Tile [6 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x20,0x66,0x36,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    
    // Tile [7 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x21,0x22,
    0x0,0x10,0xfe,0xff,
    
    // Tile [8 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x1,0x0,0x0,0x20,
    0x6,0x0,0x60,0xfe,
    
    // Tile [9 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x54,0x35,0x0,0x0,
    0xff,0xff,0x9f,0x1,
    
    // Tile [10 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x22,
    0x0,0x0,0x30,0xff,
    
    // Tile [11 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x12,0x0,0x41,0x35,
    0xaf,0xa1,0xff,0xff,
    
    // Tile [12 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x5e,0x0,0x0,0x0,
    
    // Tile [13 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x20,0x55,
    0x0,0x60,0xfe,0xff,
    
    // Tile [14 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x24,0x0,0x0,0x0,
    0xff,0x6d,0x0,0x0,
    
    // Tile [15 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x20,0x22,0x1,
    0x0,0xf3,0xff,0x1a,
    
    // Tile [16 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x10,0x54,0x3,0x0,
    0xfa,0xff,0xef,0x5,
    
    // Tile [17 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [0 , 1] 
    0x0,0x0,0x0,0xf0,
    0x0,0x0,0x0,0xa0,
    0x0,0x0,0x0,0x50,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [1 , 1] 
    0xff,0xe,0x0,0x10,
    0xff,0x3f,0x0,0x60,
    0xff,0x8f,0x0,0xa0,
    0xfe,0xdf,0x0,0xf0,
    0xfa,0xff,0x1,0xf4,
    0xf4,0xff,0x6,0xf9,
    0xe0,0xff,0xb,0xfd,
    0xa0,0xff,0x2f,0xff,
    
    // Tile [2 , 1] 
    0xff,0xbf,0x0,0x50,
    0xff,0x6f,0x0,0x50,
    0xff,0x1f,0x0,0x50,
    0xff,0xb,0x0,0x50,
    0xff,0x5,0x0,0x50,
    0xff,0x0,0x0,0x50,
    0xaf,0x0,0x0,0x50,
    0x5f,0x0,0x0,0x50,
    
    // Tile [3 , 1] 
    0xff,0x8f,0x0,0x0,
    0xff,0x8f,0x0,0x0,
    0xff,0x8f,0x0,0x0,
    0xff,0x8f,0x0,0x0,
    0xff,0x8f,0x0,0x0,
    0xff,0x8f,0x0,0x0,
    0xff,0x8f,0x0,0x0,
    0xff,0x8f,0x0,0x0,
    
    // Tile [4 , 1] 
    0xc0,0xff,0x2f,0x0,
    0xc0,0xff,0x2f,0x0,
    0xc0,0xff,0x2f,0x0,
    0xc0,0xff,0x2f,0x0,
    0xc0,0xff,0x2f,0x0,
    0xc0,0xff,0x2f,0x0,
    0xc0,0xff,0x2f,0x0,
    0xc0,0xff,0x2f,0x0,
    
    // Tile [5 , 1] 
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    
    // Tile [6 , 1] 
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0xcf,
    0x0,0x50,0xff,0xff,
    0x0,0x50,0xff,0xff,
    0x0,0x50,0xff,0xff,
    
    // Tile [7 , 1] 
    0x0,0xc0,0xff,0x8f,
    0x0,0xfa,0xff,0x9,
    0x80,0xff,0xaf,0x0,
    0xf5,0xff,0xc,0x0,
    0xff,0xff,0x1,0x0,
    0xff,0xff,0x5,0x0,
    0xff,0xff,0xe,0x0,
    0xce,0xff,0x8f,0x0,
    
    // Tile [8 , 1] 
    0x0,0x0,0xf9,0xff,
    0x0,0x40,0xff,0xff,
    0x0,0xa0,0xff,0x7f,
    0x0,0xa0,0xdd,0xd,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x20,0xb7,
    0x0,0x0,0xf9,0xff,
    0x0,0x80,0xff,0xff,
    
    // Tile [9 , 1] 
    0xff,0xff,0xff,0xd,
    0xce,0xfd,0xff,0x7f,
    0x0,0x50,0xff,0xbf,
    0x0,0x10,0xff,0xcf,
    0x0,0xb3,0xff,0xcf,
    0xfe,0xff,0xff,0xcf,
    0xff,0xff,0xff,0xcf,
    0x7b,0x14,0xff,0xcf,
    
    // Tile [10 , 1] 
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    
    // Tile [11 , 1] 
    0xbf,0xfd,0xff,0xff,
    0xff,0xff,0xff,0xff,
    0xff,0x3c,0x0,0xf7,
    0xef,0x1,0x0,0xc0,
    0xbf,0x0,0x0,0xa0,
    0xaf,0x0,0x0,0x90,
    0xaf,0x0,0x0,0x90,
    0xaf,0x0,0x0,0x90,
    
    // Tile [12 , 1] 
    0xff,0x5,0x0,0x0,
    0xff,0xd,0x0,0x0,
    0xff,0x2f,0x0,0x0,
    0xff,0x3f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    
    // Tile [13 , 1] 
    0x0,0xfb,0xff,0xff,
    0x90,0xff,0xff,0xde,
    0xf2,0xff,0x8f,0x0,
    0xf8,0xff,0xa,0x0,
    0xfc,0xff,0x3,0x0,
    0xfe,0xff,0x0,0x0,
    0xff,0xef,0x0,0x0,
    0xff,0xff,0x0,0x0,
    
    // Tile [14 , 1] 
    0xff,0xff,0xa,0x0,
    0xfe,0xff,0x7f,0x0,
    0x90,0xff,0xff,0x1,
    0x0,0xfb,0xff,0x7,
    0x0,0xf4,0xff,0xb,
    0x0,0xf1,0xff,0xd,
    0x0,0xf0,0xff,0xe,
    0x0,0xf0,0xff,0xe,
    
    // Tile [15 , 1] 
    0x0,0xf3,0xff,0xdb,
    0x0,0xf3,0xff,0xff,
    0x0,0xf3,0xff,0xcf,
    0x0,0xf3,0xff,0x1e,
    0x0,0xf3,0xff,0xb,
    0x0,0xf3,0xff,0xa,
    0x0,0xf3,0xff,0xa,
    0x0,0xf3,0xff,0xa,
    
    // Tile [16 , 1] 
    0xff,0xff,0xff,0x5f,
    0xff,0xff,0xff,0xdf,
    0x3,0x70,0xff,0xff,
    0x0,0x0,0xfc,0xff,
    0x0,0x0,0xfa,0xff,
    0x0,0x0,0xf9,0xff,
    0x0,0x0,0xf9,0xff,
    0x0,0x0,0xf9,0xff,
    
    // Tile [17 , 1] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x2,0x0,0x0,0x0,
    0x3,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    
    // Tile [0 , 2] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [1 , 2] 
    0x40,0xff,0xbf,0xff,
    0x0,0xfe,0xff,0xff,
    0x0,0xf9,0xff,0xff,
    0x0,0xf4,0xff,0xef,
    0x0,0xe0,0xff,0x9f,
    0x0,0x90,0xff,0x4f,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [2 , 2] 
    0xf,0x0,0x0,0x50,
    0xa,0x0,0x0,0x50,
    0x4,0x0,0x0,0x40,
    0x0,0x0,0x0,0x10,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [3 , 2] 
    0xff,0x8f,0x0,0x0,
    0xff,0xaf,0x0,0x0,
    0xff,0xff,0x2,0x0,
    0xff,0xff,0xbf,0xeb,
    0xf9,0xff,0xff,0xff,
    0xb0,0xff,0xff,0xdf,
    0x0,0x83,0x99,0x5,
    0x0,0x0,0x0,0x0,
    
    // Tile [4 , 2] 
    0xc0,0xff,0x2f,0x0,
    0xe0,0xff,0x2f,0x0,
    0xfa,0xff,0x2f,0x0,
    0xff,0xff,0x2f,0x0,
    0xde,0xff,0x2f,0x0,
    0xc2,0xff,0x2f,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [5 , 2] 
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0xf2,0xff,0xc,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [6 , 2] 
    0x0,0x50,0xff,0xef,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x50,0xff,0x9f,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [7 , 2] 
    0x32,0xff,0xff,0x2,
    0x0,0xfa,0xff,0xb,
    0x0,0xf2,0xff,0x4f,
    0x0,0x90,0xff,0xdf,
    0x0,0x10,0xff,0xff,
    0x0,0x0,0xf8,0xff,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [8 , 2] 
    0x0,0xe0,0xff,0x2e,
    0x0,0xf2,0xff,0xb,
    0x0,0xf2,0xff,0xe,
    0x0,0xf0,0xff,0xdf,
    0x7,0x90,0xff,0xff,
    0x1e,0x0,0xfc,0xff,
    0x0,0x0,0x40,0x98,
    0x0,0x0,0x0,0x0,
    
    // Tile [9 , 2] 
    0x0,0x10,0xff,0xcf,
    0x0,0x40,0xff,0xcf,
    0x0,0xd0,0xff,0xcf,
    0x99,0xfe,0xff,0xcf,
    0xff,0xdf,0xff,0xef,
    0xff,0x1a,0xfd,0xff,
    0x38,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [10 , 2] 
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x0,0x0,0x30,0xff,
    0x8,0x0,0x30,0xff,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [11 , 2] 
    0xaf,0x0,0x0,0x90,
    0xaf,0x0,0x0,0x90,
    0xaf,0x0,0x0,0x90,
    0xaf,0x0,0x0,0x90,
    0xaf,0x0,0x0,0x90,
    0xaf,0x0,0x0,0x90,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [12 , 2] 
    0xff,0x4f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    0xff,0x4f,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [13 , 2] 
    0xfd,0xff,0x2,0x0,
    0xfa,0xff,0x8,0x0,
    0xf4,0xff,0x3f,0x0,
    0xc0,0xff,0xff,0x8a,
    0x10,0xfe,0xff,0xff,
    0x0,0xa1,0xff,0xff,
    0x0,0x0,0x62,0xa9,
    0x0,0x0,0x0,0x0,
    
    // Tile [14 , 2] 
    0x0,0xf3,0xff,0xc,
    0x0,0xf9,0xff,0x9,
    0x50,0xff,0xff,0x3,
    0xfb,0xff,0xaf,0x0,
    0xff,0xff,0x1d,0x0,
    0xff,0xaf,0x1,0x0,
    0x69,0x1,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [15 , 2] 
    0x0,0xf3,0xff,0xa,
    0x0,0xf3,0xff,0xa,
    0x0,0xf3,0xff,0xa,
    0x0,0xf3,0xff,0xa,
    0x0,0xf3,0xff,0xa,
    0x0,0xf3,0xff,0xa,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [16 , 2] 
    0x0,0x0,0xf9,0xff,
    0x0,0x0,0xf9,0xff,
    0x0,0x0,0xf9,0xff,
    0x0,0x0,0xf9,0xff,
    0x0,0x0,0xf9,0xff,
    0x0,0x0,0xf9,0xff,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [17 , 2] 
    0x4,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    0x4,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
      };
  inline u16 *copyImage(u16 *vram) {
    for (u32 i = 0; i < sizeof(img) / 2; ++i) {
      *vram++ = img[i * 2] | (img[i * 2 + 1] << 8);
    }
    return vram;
  }
  inline u16 *copyPalette(u16 *pal) {
    for (u32 i = 0; i < sizeof(palette) / 2; ++i) {
      *pal++ = palette[i];
    }
    return pal;
  }
};
