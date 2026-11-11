/* compiler: 1.2/sp2p3  */
/* func_02101cc4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02101cc4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b7f38(M2C_UNK, s16, s16);
extern s32 func_020cba34();
extern M2C_UNK func_020cd3d8(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32);
extern void *data_02153740;
void func_02101cc4(void *arg0) {
    void *temp_r4;

    (*(s32 *) ((s8 *) (arg0) + (0)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (8)))    = -0x40;
    temp_r4                             = arg0 + 0x964;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xBC))) == 0x1D) {
        func_020b7f38(0x14, (*(s16 *) ((s8 *) (arg0) + (0x888))), (*(s16 *) ((s8 *) (arg0) + (0x88A))));
    }
    if (func_020cba34() == 0) {
        func_020cd3d8(1, 0x838, 0, 0, 0);
        (*(s16 *) ((s8 *) (data_02153740) + (0xFDD0))) = 0x10;
        return;
    }
    if ((*(s32 *) ((s8 *) (temp_r4) + (4))) != 0) {
        return;
    }
    func_020cd3d8(8, 0x251C, 0, 0, 1);
    (*(s32 *) ((s8 *) (temp_r4) + (4))) = 1;
}
