/* compiler: 1.2/sp2p3  */
/* func_020914bc from projets/nintendogs-dachshund/src/auto/func_020914bc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02027508();
extern s32 func_020276d0(M2C_UNK);
extern s32 func_02044410(s32, s16);
extern s32 data_02154f60;
s32 func_020f1c84(M2C_UNK arg0, s16 arg1) {
    void *temp_r4;

    temp_r4                                = func_02027508();
    data_02154f60                          = func_02044410(func_020276d0(arg0), arg1);
    (*(s16 *) ((s8 *) (temp_r4) + (0x80))) = arg1;
    (*(s32 *) ((s8 *) (temp_r4) + (0x84))) = 0;
    (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 0x10;
    return 1;
}
