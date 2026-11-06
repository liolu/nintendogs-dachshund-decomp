/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a0778 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a0778.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154efc;
extern u32 data_02154ef4[];
extern void func_02072320(u32 *p, u32 a);
void func_020ef510(u32 param_1) {
    s32 i;
    u32 *p;
    u32 *base = data_02154ef4;

    if (data_02154efc != 0) {
        func_02072320(&data_02154efc, param_1);
    }
    p = base + 3;
    i = 0;
    do {
        if (*(u32 *) ((u8 *) base + i * 4 + 12) != 0) {
            func_02072320(p, param_1);
        }
        i = (s16) (i + 1);
        p = p + 1;
    } while (i < 2);
    base[5] = 0xffffffff;
}
