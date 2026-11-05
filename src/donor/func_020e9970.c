/* compiler: 1.2/sp2p3  */
/* func_02089050 from projets/nintendogs-dachshund/src/auto/func_02089050.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020f0698(void);
extern M2C_UNK data_02154cb8;
s32 func_020e9970(void) {
    if ((func_020f0698() != 0) || ((*(s32 *) ((s8 *) (&data_02154cb8) + (0x20))) != 0)) {
        return 1;
    }
    return 0;
}
