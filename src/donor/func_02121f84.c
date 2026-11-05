/* compiler: 1.2/sp2p3  */
/* func_020c2648 from projets/nintendogs-dachshund/src/auto/func_020c2648.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02084a14(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 *data_02154c9c;
void func_02121f84(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;

    if (data_02154c9c != ((void *) 0)) {
        var_r0 = *data_02154c9c;
    } else {
        var_r0 = 0;
    }
    func_02084a14(var_r0, 0x3A, arg0 + 0xBC);
    if (data_02154c9c != ((void *) 0)) {
        var_r0_2 = *data_02154c9c;
    } else {
        var_r0_2 = 0;
    }
    func_02084a14(var_r0_2, 0x3B, arg0 + 0xBC);
    if (data_02154c9c != ((void *) 0)) {
        var_r0_3 = *data_02154c9c;
    } else {
        var_r0_3 = 0;
    }
    func_02084a14(var_r0_3, 0x3C, arg0 + 0xBC);
}
