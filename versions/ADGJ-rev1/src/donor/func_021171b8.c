/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021171b8 from projets/nintendogs-chihuahua-friends/src/donor/func_021171b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
void func_021171b8(s32 *p1, s32 *p2, s32 *p3, s32 *p4, s32 p5, s32 *p6) {
    s32 u11;
    s32 u10;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    u11   = (s32) ((u32) (((s64) (p5) * (s64) (p5) + 0x800) >> 12));
    u10   = (s32) ((u32) (((s64) (u11) * (s64) (p5) + 0x800) >> 12));
    b     = (u10 * 3 + u11 * -5 + 0x2000) / 2;
    c     = (p5 + (u10 * -3 + u11 * 4)) / 2;
    d     = (u11 * 2 - u10 - p5) / 2;
    a     = (u10 - u11) / 2;
    p6[0] = ((u32) (((s64) (a) * (s64) (p4[0]) + 0x800) >> 12)) +
            (((u32) (((s64) (c) * (s64) (p3[0]) + 0x800) >> 12)) +
             (((u32) (((s64) (d) * (s64) (p1[0]) + 0x800) >> 12)) + ((u32) (((s64) (b) * (s64) (p2[0]) + 0x800) >> 12))));
    p6[1] = ((u32) (((s64) (a) * (s64) (p4[1]) + 0x800) >> 12)) +
            (((u32) (((s64) (c) * (s64) (p3[1]) + 0x800) >> 12)) +
             (((u32) (((s64) (d) * (s64) (p1[1]) + 0x800) >> 12)) + ((u32) (((s64) (b) * (s64) (p2[1]) + 0x800) >> 12))));
    p6[2] = ((u32) (((s64) (a) * (s64) (p4[2]) + 0x800) >> 12)) +
            (((u32) (((s64) (c) * (s64) (p3[2]) + 0x800) >> 12)) +
             (((u32) (((s64) (d) * (s64) (p1[2]) + 0x800) >> 12)) + ((u32) (((s64) (b) * (s64) (p2[2]) + 0x800) >> 12))));
}
