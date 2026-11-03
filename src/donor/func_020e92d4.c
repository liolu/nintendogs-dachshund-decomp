/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fba9c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020fba9c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0212ff20[];
extern u8 data_0212ff08[];
extern void func_020b8b0c(u32 a, u32 b, u32 c);
extern u8 *func_020c81e8(u32 a, u32 b);
void func_020e92d4(s32 *param_1) {
    s32 i;
    s32 j;
    s32 zero;
    u8 *p;
    u8 *r6;
    u8 *r5;
    s32 r9;
    u8 *r8;

    zero = 0;
    i    = zero;
    r8   = data_0212ff20;
    do {
        j = zero;
        do {
            func_020b8b0c(2, r8[j], zero);
            j = j + 1;
        } while (j < 3);
        i  = i + 1;
        r8 = r8 + 3;
    } while (i < 4);
    if ((u32) (param_1[0] - 6) <= 2) {
        r6 = data_0212ff08;
        r5 = data_0212ff20;
        i  = 0;
        do {
            p  = func_020c81e8(*(s16 *) ((u8 *) param_1 + 12), *r6);
            r9 = *(s16 *) (p + 0x14);
            if (r9 >= 1 && r9 <= 3) {
                func_020b8b0c(2, r5[r9 - 1], 1);
            }
            i  = i + 1;
            r6 = r6 + 1;
            r5 = r5 + 3;
        } while (i < 4);
    }
}
