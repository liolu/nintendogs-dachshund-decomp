/* compiler: 2.0/sp1p5  */
/* func_020325fc from projets/code-lyoko/src/auto/func_020325fc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
s32 func_0207e8f8(void *arg0) {
    if ((*(s32 *) ((s8 *) (arg0) + (0))) != 0x4352414E) {
        return 0;
    }
    if ((*(u16 *) ((s8 *) (arg0) + (4))) != 0xFFFE) {
        return 0;
    }
    if ((*(u16 *) ((s8 *) (arg0) + (6))) == 0x100) {
        return 1;
    }
    return 0;
}
