/* compiler: 2.0/sp1p5  */
/* func_020bf97c from projets/nintendogs-dachshund/src/auto/func_020bf97c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02156180;
s32 func_0211f2c4(s32 arg0) {
    if (((u32) (*(u16 *) ((s8 *) (&data_02156180) + (0x3C))) >= 8U) &&
        ((*(s32 *) ((s8 *) (&data_02156180) + (0x44))) == arg0)) {
        return 1;
    }
    return 0;
}
