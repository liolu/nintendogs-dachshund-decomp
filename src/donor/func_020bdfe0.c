/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02117cf0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02117cf0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern void func_020bde94(u8 *a, s16 b, s16 c);
void func_020bdfe0(u8 *p) {
    s32 n;
    s32 y1;
    s32 x1;
    s32 t;

    *(s32 *) (p + 0x14) = 1;
    *(u16 *) (p + 0x1c) = 0;
    if (*(s32 *) (p + 0x14) != 0) {
        t  = *(u16 *) (p + 0x1c);
        x1 = *(s16 *) (p + 0x18);
        n  = *(u16 *) (p + 0xe);
        y1 = *(s16 *) (p + 0x1a);
        func_020bde94(p, (s16) ((*(s16 *) (p + 10) * (n - t) + x1 * t) / n - x1),
                      (s16) ((*(s16 *) (p + 12) * (n - t) + y1 * t) / n - y1));
    }
}
