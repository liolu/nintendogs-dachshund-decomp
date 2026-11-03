/* compiler: 1.2/sp2p3  */
/* func_02091344 from projets/nintendogs-dachshund/src/auto/func_02091344.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02027508();
extern s32 func_020276d0(M2C_UNK);
extern s32 func_02044410(s32, s16);
extern s32 data_02154f60;
s32 func_020f1b04(M2C_UNK arg0, s16 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4                                = func_02027508();
    data_02154f60                          = func_02044410(func_020276d0(arg0), arg1);
    (*(s16 *) ((s8 *) (temp_r4) + (0x80))) = arg1;
    (*(s32 *) ((s8 *) (temp_r4) + (0x84))) = 0;
    (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 3;
    if (arg2 > 0x8FC) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 0x10;
    } else if (arg2 > 0x898) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 0xF;
    } else if (arg2 > 0x834) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 0xE;
    } else if (arg2 > 0x7D0) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 0xD;
    } else if (arg2 > 0x76C) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 0xC;
    } else if (arg2 > 0x708) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 0xB;
    } else if (arg2 > 0x6A4) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 0xA;
    } else if (arg2 > 0x640) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 9;
    } else if (arg2 > 0x5DC) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 8;
    } else if (arg2 > 0x578) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 7;
    } else if (arg2 > 0x514) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 6;
    } else if (arg2 > 0x4B0) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 5;
    } else if (arg2 > 0x44C) {
        (*(s16 *) ((s8 *) (temp_r4) + (0x8A))) = 4;
    }
    return 1;
}
