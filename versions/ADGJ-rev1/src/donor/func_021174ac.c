/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021174ac from projets/nintendogs-chihuahua-friends/src/donor/func_021174ac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
#pragma optimization_level 3
void func_021174ac(s32 *p1, s32 *p2, s32 *p3, s32 *p4, s32 p5, s32 *p6) {
    s32 i11;
    s32 *o6;
    s32 i10;
    s32 i9;
    s32 i8;
    s32 u7;
    s32 u6;
    u7    = ((s32) (((s64) (p5) * (s64) (p5) + 0x800) >> 12));
    u6    = ((s32) (((s64) (u7) * (s64) (p5) + 0x800) >> 12));
    i10   = (u6 / 2 - u7) + 0xaaa;
    i11   = (((p5 - u7) * -3) + 0x1000) - u6;
    i9    = i11 / 6;
    i8    = (-u6) / 2 + u7 / 2 + p5 / 2 + 0x2aa;
    i11   = u6 / 6;
    o6    = p6;
    o6[0] = ((s32) (((s64) (i11) * (s64) (p4[0]) + 0x800) >> 12)) +
            (((s32) (((s64) (i8) * (s64) (p3[0]) + 0x800) >> 12)) +
             (((s32) (((s64) (i9) * (s64) (p1[0]) + 0x800) >> 12)) + ((s32) (((s64) (i10) * (s64) (p2[0]) + 0x800) >> 12))));
    o6[1] = ((s32) (((s64) (i11) * (s64) (p4[1]) + 0x800) >> 12)) +
            (((s32) (((s64) (i8) * (s64) (p3[1]) + 0x800) >> 12)) +
             (((s32) (((s64) (i9) * (s64) (p1[1]) + 0x800) >> 12)) + ((s32) (((s64) (i10) * (s64) (p2[1]) + 0x800) >> 12))));
    o6[2] = ((s32) (((s64) (i11) * (s64) (p4[2]) + 0x800) >> 12)) +
            (((s32) (((s64) (i8) * (s64) (p3[2]) + 0x800) >> 12)) +
             (((s32) (((s64) (i9) * (s64) (p1[2]) + 0x800) >> 12)) + ((s32) (((s64) (i10) * (s64) (p2[2]) + 0x800) >> 12))));
}
