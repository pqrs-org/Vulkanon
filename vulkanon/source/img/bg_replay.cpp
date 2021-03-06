/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_replay.bmp Opened.
Bmp signature found.
Bmp width: 40
Bmp height: 8
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
0 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 160 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_replay {
  enum {
    w = 5,
    h = 1,
    size = 5,
  };
  const unsigned short palette[] = {
    0x3e0,0xc63,0x14a5,0x1ce7,0x2529,0x2d8b,0x35cd,0x3e10,0x4a52,0x5294,0x5ad6,0x6318,0x6b5a,0x739c,0x77bd,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0xf1,0xff,0x4e,0x11,
    0xf1,0x11,0xe3,0x11,
    0xf1,0x11,0xd3,0x41,
    0xf1,0xff,0x6f,0xe1,
    0xf1,0x11,0xd3,0xf1,
    0xf1,0x11,0xf1,0xe1,
    0xf1,0x11,0xf1,0x41,
    0x11,0x11,0x11,0x11,
    
    // Tile [1 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0xf1,0xff,
    0xfd,0x4d,0xf1,0x11,
    0x13,0xd3,0xf1,0x11,
    0xff,0xff,0xf1,0x11,
    0x13,0x11,0xf1,0xff,
    0xfe,0xff,0xf1,0x11,
    0x11,0x11,0xf1,0x11,
    
    // Tile [2 , 0] 
    0x11,0xf1,0x1f,0x11,
    0x4d,0x11,0x1f,0x11,
    0xd3,0x11,0x1f,0x41,
    0xf1,0x11,0x1f,0xe1,
    0xd3,0x11,0x1f,0xf1,
    0x4e,0x11,0x1f,0xe1,
    0x11,0xf1,0xff,0x41,
    0x11,0x11,0x11,0x11,
    
    // Tile [3 , 0] 
    0x11,0x11,0x11,0x11,
    0x11,0x11,0xf1,0x11,
    0xfe,0xff,0xf1,0x11,
    0x13,0xf1,0xf1,0x11,
    0x11,0xf1,0xe1,0x13,
    0x23,0xfc,0x41,0xfe,
    0xce,0xf2,0x11,0x11,
    0x11,0x11,0x11,0x11,
    
    // Tile [4 , 0] 
    0x11,0x11,0x11,0x11,
    0xf1,0x11,0x11,0x11,
    0xf1,0x11,0x11,0x11,
    0xf1,0x11,0x11,0x11,
    0xf1,0x11,0x11,0x11,
    0xff,0x11,0x11,0x11,
    0xe3,0x11,0x11,0x11,
    0xf1,0x11,0x11,0x11,
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
