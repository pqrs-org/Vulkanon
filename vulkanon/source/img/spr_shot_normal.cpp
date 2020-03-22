/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
spr/spr_shot_normal.bmp Opened.
Bmp signature found.
Bmp width: 32
Bmp height: 64
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
0 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 1024 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_spr_shot_normal {
  enum {
    w = 4,
    h = 8,
    size = 32,
  };
  const unsigned short palette[] = {
    0x5000,0x108,0x14a,0x1ce,0x273,0x339,0x3ff,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x10,
    0x0,0x0,0x0,0x20,
    
    // Tile [1 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x1,0x0,
    0x0,0x1,0x2,0x0,
    0x0,0x2,0x3,0x0,
    0x0,0x3,0x4,0x0,
    0x0,0x4,0x5,0x0,
    0x0,0x5,0x5,0x0,
    0x0,0x5,0x6,0x0,
    
    // Tile [2 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x10,0x0,0x0,
    0x0,0x20,0x10,0x0,
    0x0,0x30,0x20,0x0,
    0x0,0x40,0x30,0x0,
    0x0,0x50,0x40,0x0,
    0x0,0x50,0x50,0x0,
    0x0,0x60,0x50,0x0,
    
    // Tile [3 , 0] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x1,0x0,0x0,0x0,
    0x2,0x0,0x0,0x0,
    
    // Tile [0 , 1] 
    0x0,0x0,0x0,0x30,
    0x0,0x0,0x10,0x40,
    0x0,0x0,0x20,0x50,
    0x0,0x0,0x30,0x50,
    0x0,0x0,0x40,0x60,
    0x0,0x0,0x50,0x60,
    0x0,0x0,0x50,0x60,
    0x0,0x0,0x60,0x60,
    
    // Tile [1 , 1] 
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x6,0x0,
    
    // Tile [2 , 1] 
    0x0,0x60,0x60,0x0,
    0x0,0x60,0x60,0x0,
    0x0,0x60,0x60,0x0,
    0x0,0x60,0x60,0x0,
    0x0,0x60,0x60,0x0,
    0x0,0x60,0x60,0x0,
    0x0,0x60,0x60,0x0,
    0x0,0x60,0x60,0x0,
    
    // Tile [3 , 1] 
    0x3,0x0,0x0,0x0,
    0x4,0x1,0x0,0x0,
    0x5,0x2,0x0,0x0,
    0x5,0x3,0x0,0x0,
    0x6,0x4,0x0,0x0,
    0x6,0x5,0x0,0x0,
    0x6,0x5,0x0,0x0,
    0x6,0x6,0x0,0x0,
    
    // Tile [0 , 2] 
    0x0,0x0,0x60,0x60,
    0x0,0x0,0x60,0x60,
    0x0,0x0,0x60,0x60,
    0x0,0x0,0x60,0x60,
    0x0,0x0,0x60,0x60,
    0x0,0x0,0x60,0x60,
    0x0,0x0,0x60,0x60,
    0x0,0x0,0x60,0x50,
    
    // Tile [1 , 2] 
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x6,0x0,
    0x0,0x6,0x5,0x0,
    0x0,0x5,0x5,0x0,
    0x0,0x5,0x4,0x0,
    0x0,0x4,0x3,0x0,
    0x0,0x3,0x2,0x0,
    0x0,0x2,0x1,0x0,
    
    // Tile [2 , 2] 
    0x0,0x60,0x60,0x0,
    0x0,0x60,0x60,0x0,
    0x0,0x50,0x60,0x0,
    0x0,0x50,0x50,0x0,
    0x0,0x40,0x50,0x0,
    0x0,0x30,0x40,0x0,
    0x0,0x20,0x30,0x0,
    0x0,0x10,0x20,0x0,
    
    // Tile [3 , 2] 
    0x6,0x6,0x0,0x0,
    0x6,0x6,0x0,0x0,
    0x6,0x6,0x0,0x0,
    0x6,0x6,0x0,0x0,
    0x6,0x6,0x0,0x0,
    0x6,0x6,0x0,0x0,
    0x6,0x6,0x0,0x0,
    0x5,0x6,0x0,0x0,
    
    // Tile [0 , 3] 
    0x0,0x0,0x60,0x50,
    0x0,0x0,0x60,0x40,
    0x0,0x0,0x50,0x30,
    0x0,0x0,0x50,0x20,
    0x0,0x0,0x40,0x10,
    0x0,0x0,0x30,0x0,
    0x0,0x0,0x20,0x0,
    0x0,0x0,0x10,0x0,
    
    // Tile [1 , 3] 
    0x0,0x1,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [2 , 3] 
    0x0,0x0,0x10,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [3 , 3] 
    0x5,0x6,0x0,0x0,
    0x4,0x6,0x0,0x0,
    0x3,0x5,0x0,0x0,
    0x2,0x5,0x0,0x0,
    0x1,0x4,0x0,0x0,
    0x0,0x3,0x0,0x0,
    0x0,0x2,0x0,0x0,
    0x0,0x1,0x0,0x0,
    
    // Tile [0 , 4] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x1,
    0x0,0x0,0x0,0x2,
    0x0,0x0,0x10,0x13,
    0x0,0x0,0x20,0x24,
    
    // Tile [1 , 4] 
    0x0,0x10,0x0,0x0,
    0x0,0x20,0x0,0x0,
    0x0,0x31,0x1,0x0,
    0x0,0x42,0x2,0x0,
    0x0,0x53,0x3,0x0,
    0x0,0x54,0x4,0x0,
    0x0,0x65,0x5,0x0,
    0x0,0x65,0x5,0x0,
    
    // Tile [2 , 4] 
    0x0,0x0,0x1,0x0,
    0x0,0x0,0x2,0x0,
    0x0,0x10,0x13,0x0,
    0x0,0x20,0x24,0x0,
    0x0,0x30,0x35,0x0,
    0x0,0x40,0x45,0x0,
    0x0,0x50,0x56,0x0,
    0x0,0x50,0x56,0x0,
    
    // Tile [3 , 4] 
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x10,0x0,0x0,0x0,
    0x20,0x0,0x0,0x0,
    0x31,0x1,0x0,0x0,
    0x42,0x2,0x0,0x0,
    
    // Tile [0 , 5] 
    0x0,0x0,0x30,0x35,
    0x0,0x0,0x40,0x45,
    0x0,0x0,0x50,0x56,
    0x0,0x0,0x50,0x56,
    0x0,0x0,0x60,0x66,
    0x0,0x0,0x60,0x66,
    0x0,0x0,0x60,0x66,
    0x0,0x0,0x60,0x66,
    
    // Tile [1 , 5] 
    0x0,0x66,0x6,0x0,
    0x0,0x66,0x6,0x0,
    0x0,0x66,0x6,0x0,
    0x0,0x66,0x6,0x0,
    0x0,0x66,0x6,0x0,
    0x0,0x66,0x6,0x0,
    0x0,0x66,0x6,0x0,
    0x0,0x66,0x6,0x0,
    
    // Tile [2 , 5] 
    0x0,0x60,0x66,0x0,
    0x0,0x60,0x66,0x0,
    0x0,0x60,0x66,0x0,
    0x0,0x60,0x66,0x0,
    0x0,0x60,0x66,0x0,
    0x0,0x60,0x66,0x0,
    0x0,0x60,0x66,0x0,
    0x0,0x60,0x66,0x0,
    
    // Tile [3 , 5] 
    0x53,0x3,0x0,0x0,
    0x54,0x4,0x0,0x0,
    0x65,0x5,0x0,0x0,
    0x65,0x5,0x0,0x0,
    0x66,0x6,0x0,0x0,
    0x66,0x6,0x0,0x0,
    0x66,0x6,0x0,0x0,
    0x66,0x6,0x0,0x0,
    
    // Tile [0 , 6] 
    0x0,0x0,0x60,0x66,
    0x0,0x0,0x60,0x66,
    0x0,0x0,0x60,0x66,
    0x0,0x0,0x60,0x66,
    0x0,0x0,0x60,0x66,
    0x0,0x0,0x60,0x65,
    0x0,0x0,0x60,0x65,
    0x0,0x0,0x50,0x54,
    
    // Tile [1 , 6] 
    0x0,0x66,0x6,0x0,
    0x0,0x56,0x6,0x0,
    0x0,0x56,0x6,0x0,
    0x0,0x45,0x5,0x0,
    0x0,0x35,0x5,0x0,
    0x0,0x24,0x4,0x0,
    0x0,0x13,0x3,0x0,
    0x0,0x2,0x2,0x0,
    
    // Tile [2 , 6] 
    0x0,0x60,0x66,0x0,
    0x0,0x60,0x65,0x0,
    0x0,0x60,0x65,0x0,
    0x0,0x50,0x54,0x0,
    0x0,0x50,0x53,0x0,
    0x0,0x40,0x42,0x0,
    0x0,0x30,0x31,0x0,
    0x0,0x20,0x20,0x0,
    
    // Tile [3 , 6] 
    0x66,0x6,0x0,0x0,
    0x66,0x6,0x0,0x0,
    0x66,0x6,0x0,0x0,
    0x66,0x6,0x0,0x0,
    0x66,0x6,0x0,0x0,
    0x56,0x6,0x0,0x0,
    0x56,0x6,0x0,0x0,
    0x45,0x5,0x0,0x0,
    
    // Tile [0 , 7] 
    0x0,0x0,0x50,0x53,
    0x0,0x0,0x40,0x42,
    0x0,0x0,0x30,0x31,
    0x0,0x0,0x20,0x20,
    0x0,0x0,0x10,0x10,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [1 , 7] 
    0x0,0x1,0x1,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [2 , 7] 
    0x0,0x10,0x10,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    0x0,0x0,0x0,0x0,
    
    // Tile [3 , 7] 
    0x35,0x5,0x0,0x0,
    0x24,0x4,0x0,0x0,
    0x13,0x3,0x0,0x0,
    0x2,0x2,0x0,0x0,
    0x1,0x1,0x0,0x0,
    0x0,0x0,0x0,0x0,
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