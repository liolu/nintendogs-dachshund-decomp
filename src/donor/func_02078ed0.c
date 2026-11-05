/* compiler: 2.0/sp1p5  */
/* func_0206f2e8 from projets/children-of-mana/src/auto/func_0206f2e8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
s32 func_02078ed0(void *a0, s32 a1) {
    u16 idx = *(u16 *) ((u8 *) a0 + 0x12);
    u8 *p   = (u8 *) a0 + 0xc + idx;
    u16 v   = *(u16 *) p;
    return (s32) (p + 4) + v * a1;
}
