/* compiler: 2.0/sp1p5  */
/* func_02088dd0 from projets/nintendogs-dachshund/src/auto/func_02088dd0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02154cb8;
s32 func_020e96f0(void) {
    if ((*(s32 *) ((s8 *) (&data_02154cb8) + (0x38))) != 0) {
        return 0;
    }
    (*(s32 *) ((s8 *) (&data_02154cb8) + (0x38))) = 1;
    return 1;
}
