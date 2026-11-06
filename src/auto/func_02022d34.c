/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02022d78 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02022d78.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
u32 func_02022d34(u8 *param_1) {
    u32 r;
    s32 b;
    s32 a;
    s32 x;

    x = *(s16 *) (param_1 + 0xf0);
    if (x < 91) {
        goto L18;
    }
    if (x < 111) {
        a = 1;
        goto LA;
    }
L18:
    a = 0;
LA:
    if (a != 0) {
        b = 1;
        goto LTAIL;
    }
    if (x < 15) {
        goto L3C;
    }
    if (x <= 74) {
        b = 1;
        goto LTAIL;
    }
L3C:
    b = 0;
LTAIL:
    if (b != 0) {
        r = (u16) (x - 12);
    } else {
        r = 0;
    }
    return r;
}
