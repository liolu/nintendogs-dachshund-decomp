/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u8 vu8;
typedef enum {
    GX_VRAM_SUB_BG_128K = 0x0080,
    GX_VRAM_SUB_BG_32K  = 0x0004,
    GX_VRAM_SUB_BG_0    = 0x0000,
    GX_VRAM_SUB_BG_256K = 0x0180
} GXVRamSubBG;
typedef struct {
    u16 lcdc;
    u16 bg;
    u16 obj;
    u16 arm7;
    u16 tex;
    u16 texPltt;
    u16 clearImage;
    u16 bgExtPltt;
    u16 objExtPltt;
    u16 subBg;
    u16 subObj;
    u16 subBgExtPltt;
    u16 subObjExtPltt;
} UnkGxVramState;
extern UnkGxVramState data_0214f450;
void func_02069de4(u32 lcdc);

static inline void GX_VRAMCNT_SetSubBG_(s32 subBg) {
    switch (subBg) {
        case GX_VRAM_SUB_BG_0:
            break;
        case GX_VRAM_SUB_BG_32K:
            (*(vu8 *) 0x04000242) = 0x84;
            break;
        case GX_VRAM_SUB_BG_256K:
            (*(vu8 *) 0x04000249) = 0x81;
        case GX_VRAM_SUB_BG_128K:
            (*(vu8 *) 0x04000248) = 0x81;
            break;
        default:
            break;
    }
}

/* GX_SetBankForSubBg from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_vramcnt.c (license: none),
 * reused by tools/donor_match.py */
void func_02069238(s32 subBg) {
    data_0214f450.lcdc  = ~subBg & (data_0214f450.lcdc | data_0214f450.subBg);
    data_0214f450.subBg = subBg;

    if (subBg > 0x80) {
        goto big;
    }
    if (subBg >= 0x80) {
        goto case80;
    }
    if (subBg > 4) {
        goto end;
    }
    if (subBg < 0) {
        goto end;
    }
    if (subBg == 0) {
        goto end;
    }
    if (subBg != 4) {
        goto end;
    }
    (*(vu8 *) 0x04000242) = 0x84;
    goto end;

big:
    if (subBg != 0x180) {
        goto end;
    }
    (*(vu8 *) 0x04000249) = 0x81;

case80:
    (*(vu8 *) 0x04000248) = 0x81;

end:
    func_02069de4(data_0214f450.lcdc);
}
