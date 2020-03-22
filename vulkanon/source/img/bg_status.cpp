/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_status.bmp Opened.
Bmp signature found.
Bmp width: 240
Bmp height: 8
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
0 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 960 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_status {
  enum {
    w = 30,
    h = 1,
    size = 30,
  };
  const unsigned short palette[] = {
    0x3e0,0xc63,0x14a5,0x1ce7,0x2529,0x2d8b,0x35cd,0x3e10,0x4a52,0x5294,0x5ad6,0x6318,0x6b5a,0x739c,0x77bd,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x11,0xff,0xef,0x14,
    0x11,0x1f,0x31,0x1e,
    0x11,0x1f,0x31,0x4d,
    0x11,0xff,0xef,0xe4,
    0x11,0x1f,0x11,0xf1,
    0x11,0x1f,0x11,0xe1,
    0x11,0x1f,0x11,0x41,
    0x11,0x11,0x11,0x11,
    
    // Tile [1 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0xfd,0x4d,0xf1,0xf1,
    0x13,0xd3,0xf1,0xf1,
    0x11,0xf1,0xf1,0xf1,
    0x13,0xd3,0xd1,0xf4,
    0xfe,0x4e,0x51,0x5e,
    0x11,0x11,0x11,0x11,
    
    // Tile [2 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0xf1,0x41,0xfd,0x4d,
    0xf1,0xe1,0x13,0xd3,
    0xf1,0xf1,0xff,0xff,
    0xd4,0xe1,0x13,0x11,
    0x5e,0x41,0xfe,0xff,
    0x11,0x11,0x11,0x11,
    
    // Tile [3 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0xf1,0xc2,0x4e,0x11,
    0xf1,0x2c,0xe3,0x11,
    0xf1,0x11,0x11,0x11,
    0xf1,0x11,0x11,0x11,
    0xf1,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [4 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [5 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [6 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [7 , 0] 
    0xef,0x41,0x1f,0x11,
    0xee,0xf1,0x14,0x11,
    0x1f,0xf4,0x11,0x11,
    0x41,0x4f,0x11,0x11,
    0xf1,0x14,0x1f,0x11,
    0xf4,0xe1,0x1f,0x11,
    0x4f,0xe1,0x1f,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [8 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [9 , 0] 
    0x11,0xd4,0xdf,0x14,
    0x11,0x3e,0x31,0x1d,
    0x11,0x3e,0x11,0x11,
    0x11,0xe4,0xdf,0x14,
    0x11,0x11,0x31,0x1d,
    0x11,0x3e,0x31,0x1d,
    0x11,0xe4,0xef,0x14,
    0x11,0x11,0x11,0x11,
    
    // Tile [10 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0xd4,0xdf,0x14,0xd4,
    0x3e,0x31,0x1d,0x3e,
    0x1f,0x11,0x11,0x1f,
    0x3e,0x11,0x11,0x3e,
    0xe4,0xff,0x1f,0xe4,
    0x11,0x11,0x11,0x11,
    
    // Tile [11 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0xdf,0x14,0x2f,0xec,
    0x31,0x1d,0xcf,0x32,
    0x11,0x1f,0x1f,0x11,
    0x31,0x1d,0x1f,0x11,
    0xef,0x14,0x1f,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [12 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x64,0xfe,0x6e,0x11,
    0xee,0x14,0xe4,0x11,
    0xf1,0xff,0xff,0x11,
    0xe1,0x14,0x11,0x11,
    0x61,0xfe,0xff,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [13 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [14 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [15 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [16 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [17 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [18 , 0] 
    0x41,0xfd,0x4d,0x11,
    0xe1,0x13,0xd6,0x11,
    0xf1,0x31,0xfe,0x11,
    0xf1,0xe3,0xf3,0x11,
    0xf1,0x3e,0xf1,0x11,
    0xe1,0x16,0xd3,0x11,
    0x41,0xfe,0x4e,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [19 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [20 , 0] 
    0x11,0xf1,0xff,0xff,
    0x11,0x11,0xf1,0x11,
    0x11,0x11,0xf1,0x11,
    0x11,0x11,0xf1,0x11,
    0x11,0x11,0xf1,0x11,
    0x11,0x11,0xf1,0x11,
    0x11,0x11,0xf1,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [21 , 0] 
    0xb1,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0xff,0xf1,0xff,0x6e,
    0xf1,0xf1,0xf1,0xe4,
    0xf1,0xf1,0xf1,0xf1,
    0xf1,0xf1,0xf1,0xf1,
    0xff,0xff,0xf1,0xf1,
    0x11,0x11,0x11,0x11,
    
    // Tile [22 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x61,0xfe,0x6e,0x11,
    0xe1,0x14,0xe4,0x11,
    0xf1,0xff,0xff,0x11,
    0xe1,0x14,0x11,0x11,
    0x61,0xfe,0xff,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [23 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [24 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0xa1,0x1a,0x11,
    0x11,0xa1,0x1a,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0xa1,0x1a,0x11,
    0x11,0xa1,0x1a,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [25 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [26 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [27 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0xa1,0x1a,0x11,
    0x11,0xa1,0x1a,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0xa1,0x1a,0x11,
    0x11,0xa1,0x1a,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [28 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [29 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
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
