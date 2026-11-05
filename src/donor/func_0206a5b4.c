/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02056c84 from projets/children-of-mana/src/auto/func_02056c84.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
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
extern UnkGxVramState data_0214e9b0;
extern UnkGxVramState data_0214e9b0;
extern void func_0206b1dc(u32 lcdc);
void func_0206a5b4(s32 subObj) {
    data_0214e9b0.lcdc   = ~subObj & (data_0214e9b0.lcdc | data_0214e9b0.subObj);
    data_0214e9b0.subObj = subObj;

    switch (subObj) {
        case 0x008:
            (*(vu8 *) 0x04000243) = 0x84;
            break;
        case 0x100:
            (*(vu8 *) 0x04000249) = 0x82;
            break;
        case 0x000:
        default:
            break;
    }
    func_0206b1dc(data_0214e9b0.lcdc);
}
