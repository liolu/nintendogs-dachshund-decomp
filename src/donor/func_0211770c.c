/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211770c from projets/nintendogs-chihuahua-friends/src/donor/func_0211770c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
s32 func_0211770c(s32 p1, s32 p2, s32 p3, s32 p4, s32 p5) {
    s32 u6;
    s32 u7;
    s32 i5;
    s32 a2;
    s32 a4;
    u6 = ((s32) ((((s64) (p5) * (s64) (p5)) + 0x800) >> 12));
    u7 = ((s32) ((((s64) (u6) * (s64) (p5)) + 0x800) >> 12));
    i5 = (p5 - u6) * -3 + 0x1000 - u7;
    a4 = u7 / 2 - u6 + 0xaaa;
    a2 = (-u7) / 2 + u6 / 2 + p5 / 2 + 0x2aa;
    return ((s32) ((((s64) (u7 / 6) * (s64) (p4)) + 0x800) >> 12)) +
           (((s32) ((((s64) (a2) * (s64) (p3)) + 0x800) >> 12)) +
            (((s32) ((((s64) (i5 / 6) * (s64) (p1)) + 0x800) >> 12)) + ((s32) ((((s64) (a4) * (s64) (p2)) + 0x800) >> 12))));
}
