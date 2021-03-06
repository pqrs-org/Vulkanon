/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
bg/bg_boss_core_4.bmp Opened.
Bmp signature found.
Bmp width: 32
Bmp height: 8
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
0 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 128 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_bg_boss_core_4 {
  enum {
    w = 4,
    h = 1,
    size = 4,
  };
  const unsigned short palette[] = {
    0x3e0,0x7c00,0x7ce7,0x7def,0x7ef7,0x7fff,0x5ef7,0x1ce7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x66,0x76,0x77,0x77,
    0x76,0x77,0x0,0x0,
    0x76,0x0,0x0,0x0,
    0x77,0x0,0x0,0x0,
    0x7,0x0,0x0,0x0,
    0x7,0x0,0x0,0x0,
    0x7,0x0,0x0,0x0,
    0x7,0x0,0x0,0x0,
    
    // Tile [1 , 0] 
    0x77,0x77,0x77,0x77,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x53,
    0x0,0x0,0x10,0x22,
    0x0,0x0,0x20,0x32,
    0x0,0x0,0x20,0x43,
    0x0,0x0,0x30,0x54,
    0x0,0x0,0x0,0x44,
    
    // Tile [2 , 0] 
    0x77,0x77,0x77,0x77,
    0x0,0x0,0x0,0x0,
    0x35,0x0,0x0,0x0,
    0x22,0x1,0x0,0x0,
    0x23,0x2,0x0,0x0,
    0x34,0x2,0x0,0x0,
    0x45,0x3,0x0,0x0,
    0x44,0x0,0x0,0x0,
    
    // Tile [3 , 0] 
    0x77,0x77,0x67,0x66,
    0x0,0x0,0x77,0x67,
    0x0,0x0,0x0,0x67,
    0x0,0x0,0x0,0x77,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
    0x0,0x0,0x0,0x70,
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
