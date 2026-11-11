/* compiler: 1.2/sp2p3  */
/* func_02111b58 from projets/nintendogs-dachshund/src/auto/func_02111b58.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02090508(s32, M2C_UNK);
extern s32 data_02153708;
s32 func_020904d8(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02003844(arg0, 0x5C);
    func_02090508(temp_r0, 0);
    data_02153708 = temp_r0;
    return temp_r0;
}
