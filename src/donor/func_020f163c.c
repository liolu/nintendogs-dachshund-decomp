/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a2930 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a2930.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154f64[];
extern void func_0206e080(u8 *d, u8 *s, u32 n);
extern s32 func_01ffda04(s32 a);
extern u32 func_02022fa8(s32 a);
extern s32 func_020f1d68(s32 a, s32 b);
void func_020f163c(void) {
    u8 *g;
    u8 *g1;
    s32 r6;
    s16 r4;
    u32 r5;

    g = data_02154f64;
    if (*(s32 *) (g + 0x8c) == 0) {
        goto pathB;
    }
    *(s32 *) (g + 0x84) = *(s32 *) (g + 0x84) + 1;
    if (*(s32 *) (g + 0x84) <= 120) {
        goto tail;
    }
    func_0206e080(g + 4, g + 68, 64);
    r4 = *(s16 *) g;
    r5 = func_02022fa8(func_01ffda04(r4));
    r6 = 0;
    do {
        if ((r5 & (1 << r6)) != 0 && func_020f1d68(r4, r6) != 0) {
            goto found;
        }
        r6 = (s16) (r6 + 1);
    } while (r6 < 20);
    r6 = -1;
found:
    *(s32 *) (g + 0x84) = 0xffff;
    g1                  = data_02154f64;
    if (*(s32 *) (g1 + 0x8c) != 0) {
        *(s32 *) (g1 + 0x8c) = 0;
        *(s16 *) (g1 + 2)    = -1;
    }
    if (r6 == -1) {
        *(s32 *) (g + 0x98) = 1;
    } else {
        *(s32 *) (g + 0x98) = 0;
    }
    *(s32 *) (g + 0x90) = 0;
tail:
    if (*(s32 *) (g + 0x94) == 0) {
        return;
    }
    if (*(s16 *) (g + 0x88) >= 16) {
        *(s32 *) (g + 0x94) = 0;
        *(s32 *) (g + 0x98) = 0;
    }
    return;
pathB:
    if (*(s32 *) (g + 0x94) == 0) {
        return;
    }
    *(s32 *) (g + 0x90) = *(s32 *) (g + 0x90) + 1;
    if (*(s32 *) (g + 0x90) > 300) {
        *(s32 *) (g + 0x94) = 0;
        *(s32 *) (g + 0x98) = 0;
    }
}
