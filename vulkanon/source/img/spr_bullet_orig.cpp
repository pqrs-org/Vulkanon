/*
Bmp 4/8 Bits to GBA Converter By Bruno Vedder.
With modifications by Pete Elmore.
spr/spr_bullet_orig.bmp Opened.
Bmp signature found.
Bmp width: 8
Bmp height: 8
Bmp not compressed: ok.
One plane.
Bmp is 4 Bit per pixel.
0 colors used. (0 mean full bpp).
Bmp data starts at 76h.
Allocating 32 bytes.
CMAP loaded.
Data loaded. */
namespace TILEINFO_spr_bullet_orig {
  enum {
    w = 1,
    h = 1,
    size = 1,
  };
  const unsigned short palette[] = {
    0x0,0x842,0x1084,0x18c6,0x2108,0x294a,0x318c,0x39ce,0x4631,0x4e73,0x56b5,0x5ef7,0x6739,0x6f7b,0x77bd,0x7fff,
    };

  const unsigned char img[] = {

    // Tile [0 , 0] 
    0x0,0xb0,0xb,0x0,
    0x0,0xfb,0xbf,0x0,
    0x0,0xfb,0xbf,0x0,
    0xb0,0xff,0xff,0xb,
    0xfb,0xff,0xff,0xbf,
    0xfb,0xbf,0xfb,0xbf,
    0xfb,0xb,0xb0,0xbf,
    0xb0,0x0,0x0,0xb,
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
