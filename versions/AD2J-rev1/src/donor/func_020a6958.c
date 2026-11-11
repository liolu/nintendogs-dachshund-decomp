/* compiler: 1.2/sp2p3  */
/* func_020a6958 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a6958.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b9120(M2C_UNK, s32, s32);
extern s32 func_020b9144(M2C_UNK, M2C_UNK);
extern void *data_02153740;
void func_020a6958(void) {
    s32 var_r6;

    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) != 7) {
        return;
    }
    var_r6 = 0;
    do {
        func_020b9120(2, var_r6 + 7, func_020b9144(2, 0xE));
        var_r6 += 1;
    } while (var_r6 < 6);
    (*(s32 *) ((s8 *) (data_02153740) + (0x830))) = 0;
}
