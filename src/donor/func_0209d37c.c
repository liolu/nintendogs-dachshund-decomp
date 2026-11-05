/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209d37c from projets/nintendogs-shiba-friends/src/donor/func_0209d37c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
extern s32 func_01ffda04(s32 a);
extern s32 func_02027f40(s32 a, s32 b);
extern s32 func_0209d5ec(u8 *p);
extern void func_0209d520(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_02098318(u8 *p, s32 a);
void func_0209d37c(u8 *param_1) {
    s16 i;
    s32 n;
    s32 d;
    s16 v;
    s16 a1;
    s16 a2;
    s16 a3;

    n = (10000 - func_02027f40(func_01ffda04(*(s16 *) (data_02153708 + 0xe)), 7)) * 10;
    for (i = 0; i < 3; i++) {
        d = 500;
        if (i >= 2) {
            d = 250;
        }
        v = n / d;
        if (v < 0) {
            v = 0;
        }
        ((s16 *) (param_1 + 0x60))[i] = -v;
    }
    a1 = 0;
    for (i = 0; i < 5; i++) {
        a1 += ((s16 *) (param_1 + 0x42))[i];
    }
    a1 += *(s16 *) (param_1 + 0x60);
    if (a1 < 0) {
        a1 = 0;
    }
    a2 = 0;
    for (i = 0; i < 5; i++) {
        a2 += ((s16 *) (param_1 + 0x4c))[i];
    }
    a2 += *(s16 *) (param_1 + 0x62);
    if (a2 < 0) {
        a2 = 0;
    }
    a3 = 0;
    for (i = 0; i < 5; i++) {
        a3 += ((s16 *) (param_1 + 0x56))[i];
    }
    a3 += *(s16 *) (param_1 + 0x64);
    if (a3 < 0) {
        a3 = 0;
    }
    func_0209d520(*(s32 *) (param_1 + 0x1c), func_0209d5ec(param_1), a1, a2, a3);
    func_02098318(param_1, *(s32 *) (param_1 + 0x1c));
    *(s16 *) (param_1 + 4) = 0x807;
    *(u16 *) (param_1 + 6) = 0;
}
