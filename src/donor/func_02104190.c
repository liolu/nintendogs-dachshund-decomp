/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02125020 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02125020.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u32 vu32;
extern s32 func_02100214(u8 *p);
void func_02104190(u8 *param_1) {
    s32 x;
    s32 r;

    x                    = func_02100214(param_1);
    r                    = -32 - x % 80;
    *(vu32 *) 0x04001018 = 0x01ff0000 & (u32) (r << 16);
}
