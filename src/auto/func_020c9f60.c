/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c9f08 from projets/nintendogs-chihuahua-friends/src/donor/func_020c9f08.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154c48;
extern void func_0206dfd4(u32 p0, u32 p1, s32 p2);
void func_020c9f60(u32 param_1, s16 param_2, u32 param_3) {
    u8 *g = *(u8 **) &data_02154c48;
    u8 *e = g + 0x1484 + param_2 * 24;
    u32 v = *(u32 *) (e + 0x10) + *(u32 *) (e + 4) * (u16) param_3;
    func_0206dfd4(param_1, v + 320, 64);
    *(u16 *) (v + 256 + 134) = *(u16 *) (v + 256 + 134) | 1;
}
