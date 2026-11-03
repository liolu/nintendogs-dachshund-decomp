/* compiler: 2.0/sp1p5  */
/* NNSi_G3dGetTexPatAnmDataByIdx from projets/lego-star-wars-ii-the-original-trilogy/src/auto/NNSi_G3dGetTexPatAnmDataByIdx.c
 * (same code in another game of this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
s32 func_02078ed0(void *a0, s32 a1) {
    u16 idx = *(u16 *) ((u8 *) a0 + 0x12);
    u8 *p   = (u8 *) a0 + 0xc + idx;
    u16 v   = *(u16 *) p;
    return (s32) (p + 4) + v * a1;
}
