/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210f100 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0210f100.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0213d4d0;
s16 *func_020b54bc(s32 param_1, s32 param_2) {
    s16 *p = (s16 *) &data_0213d4d0;
    if (p[2] == -1) {
        goto ret0;
    }
loop:
    if (p[1] == param_2 && p[0] == param_1) {
        return p;
    }
    p = (s16 *) ((u8 *) p + 32);
    if (p[2] != -1) {
        goto loop;
    }
ret0:
    return ((void *) 0);
}
