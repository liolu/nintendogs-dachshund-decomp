/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0b84 from projets/nintendogs-chihuahua-friends/src/donor/func_020f0b84.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154f24[];
extern void func_02072320(u32 *p, u32 a);
s32 func_020f0b84(u32 param_1) {
    u8 *g;
    s16 i;
    u32 mask;
    g = data_02154f24;
    i = 0;
    do {
        mask = (u16) (1u << i);
        if (*(u32 *) (g + i * 4 + 0x28) != 0 && (*(u16 *) (g + 0x1a) & mask) != 0) {
            func_02072320((u32 *) (g + 0x28 + i * 4), param_1);
            *(u16 *) (g + 0x1a) = *(u16 *) (g + 0x1a) & ~mask;
            *(u16 *) (g + 0x18) = *(u16 *) (g + 0x18) & ~mask;
            return i;
        }
        i = (s16) (i + 1);
    } while (i < 4);
    return -1;
}
