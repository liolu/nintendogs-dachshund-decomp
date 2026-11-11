/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02005bec from projets/code-lyoko/src/donor/func_02005bec.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
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
void func_0206abec(s32 objExtPltt) {
    data_0214e9b0.lcdc       = ~objExtPltt & (data_0214e9b0.lcdc | data_0214e9b0.objExtPltt);
    data_0214e9b0.objExtPltt = objExtPltt;

    switch (objExtPltt) {
        case 0x20:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x80000000;
            (*(vu8 *) 0x04000245) = 0x85;
            break;
        case 0x40:
            (*(u32 *) ((0x04000000) | 0x0)) |= 0x80000000;
            (*(vu8 *) 0x04000246) = 0x85;
            break;
        case 0x00:
            (*(u32 *) ((0x04000000) | 0x0)) &= ~0x80000000;
            break;
        default:
            break;
    }
    func_0206b1dc(data_0214e9b0.lcdc);
}
