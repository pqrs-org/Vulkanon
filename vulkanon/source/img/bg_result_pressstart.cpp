/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_result_pressstart.bmp Opened.
Bmp signature found.
Bmp width: 72
Bmp height: 8
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
16 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 288 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_result_pressstart {
  enum {
    w = 9,
    h = 1,
    size = 9,
  };
  const unsigned short palette[] = {
    0x0,0x842,0x1084,0x1ce7,0x2529,0x2d6b,0x35ad,0x3def,0x4210,0x4a52,0x56b5,0x5ef7,0x6318,0x6f7b,0x739c,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x31,0xff,0xff,0x4d,
    0x31,0xbf,0x86,0xdf,
    0x31,0x8f,0x11,0xeb,
    0x31,0xaf,0x64,0xde,
    0x31,0xff,0xff,0x4e,
    0x31,0x9f,0x33,0x11,
    0x31,0x8f,0x11,0x11,
    0x31,0x8f,0x11,0x11,
    
    // Tile [1 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0xe5,0xe8,0x92,0xff,
    0xf5,0x8d,0xf8,0x65,
    0xf5,0x15,0xeb,0x88,
    0xf5,0x14,0xec,0x88,
    0xf5,0x14,0xe9,0x22,
    0xf5,0x14,0xd2,0xff,
    
    // Tile [2 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0x19,0xb2,0xff,0x2b,
    0x7f,0xf7,0x56,0x8f,
    0xbe,0xf6,0x9d,0x14,
    0x78,0x51,0xea,0x8f,
    0x6a,0xb8,0x22,0xbe,
    0x3d,0xe4,0xff,0x4e,
    
    // Tile [3 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0x11,0x11,
    0xb2,0xff,0x2b,0x11,
    0xf7,0x56,0x8f,0x11,
    0xf6,0x9d,0x14,0x11,
    0x51,0xea,0x8f,0x11,
    0xb8,0x22,0xbe,0x11,
    0xe4,0xff,0x4e,0x11,
    
    // Tile [4 , 0] 
    0x11,0xfa,0xff,0x2b,
    0x61,0x8f,0x84,0x8f,
    0x81,0x4f,0x11,0x56,
    0x31,0xff,0xad,0x16,
    0x11,0x72,0xda,0xaf,
    0x41,0x16,0x11,0xec,
    0x81,0x8f,0x42,0xde,
    0x11,0xfb,0xff,0x4e,
    
    // Tile [5 , 0] 
    0xfd,0xff,0xff,0x19,
    0x65,0xfa,0x68,0x14,
    0x11,0xf7,0x14,0x11,
    0x11,0xf7,0x14,0x31,
    0x11,0xf7,0x14,0x81,
    0x11,0xf7,0x14,0xd1,
    0x11,0xf7,0x14,0xf4,
    0x11,0xf7,0x14,0xf9,
    
    // Tile [6 , 0] 
    0xf2,0x3f,0x11,0x31,
    0xf7,0x8f,0x11,0x31,
    0xdc,0xdc,0x11,0x31,
    0x8f,0xf7,0x13,0x31,
    0x3f,0xf3,0x19,0x31,
    0xff,0xff,0x1e,0x31,
    0x7a,0xa7,0x4f,0x31,
    0x13,0x31,0x9f,0x31,
    
    // Tile [7 , 0] 
    0xff,0xff,0x9f,0xd1,
    0xbf,0x66,0xfc,0x54,
    0x9f,0x11,0xf6,0x15,
    0xcf,0x99,0xcd,0x11,
    0xef,0xdd,0x9f,0x11,
    0x9f,0x11,0xfa,0x11,
    0x9f,0x11,0xf9,0x12,
    0x9f,0x11,0xf8,0x15,
    
    // Tile [8 , 0] 
    0xff,0xff,0x9f,0x11,
    0xa6,0x8f,0x46,0x11,
    0x71,0x4f,0x11,0x11,
    0x71,0x4f,0x11,0x11,
    0x71,0x4f,0x11,0x11,
    0x71,0x4f,0x11,0x11,
    0x71,0x4f,0x11,0x11,
    0x71,0x4f,0x11,0x11,
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
