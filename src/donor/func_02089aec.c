/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02089aec from projets/nintendogs-chihuahua-friends/src/donor/func_02089aec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
s32 func_02089aec(s32 *param_1, s32 param_2, u32 param_3) {
    s32 t = (s32) ((u32) * (u16 *) ((u8 *) param_1 + 4) * 0x10) / 8;
    s32 r = *param_1 + (t * ((s32) param_3 >> 3) + (param_2 >> 3) * 0x10) * 2;
    return r + (param_3 & 7) * 4;
}
