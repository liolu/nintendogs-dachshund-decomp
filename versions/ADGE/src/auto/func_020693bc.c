/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* GX_SetBankForClearImage from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx_vramcnt.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef volatile u8 vu8;
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
extern UnkGxVramState data_0214f450;
void func_02069de4(u32 lcdc);
void func_020693bc(s32 clearImage) {
    data_0214f450.lcdc       = ~clearImage & (data_0214f450.lcdc | data_0214f450.clearImage);
    data_0214f450.clearImage = clearImage;

    switch (clearImage) {
        case 0x03:
            (*(vu8 *) 0x04000240) = 0x93;
        case 0x02:
            (*(vu8 *) 0x04000241) = 0x9b;
            (*(vu16 *) 0x04000060) |= 0x4000;
            break;
        case 0x0c:
            (*(vu8 *) 0x04000242) = 0x93;
        case 0x08:
            (*(vu8 *) 0x04000243) = 0x9b;
            (*(vu16 *) 0x04000060) |= 0x4000;
            break;
        case 0x00:
            (*(vu16 *) 0x04000060) &= ~0x4000;
            break;
        case 0x01:
            (*(vu8 *) 0x04000240) = 0x9b;
            (*(vu16 *) 0x04000060) |= 0x4000;
            break;
        case 0x04:
            (*(vu8 *) 0x04000242) = 0x9b;
            (*(vu16 *) 0x04000060) |= 0x4000;
            break;
        default:
            break;
    }
    func_02069de4(data_0214f450.lcdc);
}
