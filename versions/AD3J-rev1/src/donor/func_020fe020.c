/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fe028 from projets/nintendogs-chihuahua-friends/src/donor/func_020fe028.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u32 vu32;
extern u8 *data_02153740;
extern s32 func_02100214(u32 p);
void func_020fe020(u32 param_1) {
    s32 x = func_02100214(param_1);
    s32 r = x % 96;
    s32 t = -0x20 - r;

    if (*(u32 *) (data_02153740 + 0xac) == 3) {
        t = 0;
    }
    *(vu32 *) 0x04001018 = 0x01ff0000 & (t << 16);
}
