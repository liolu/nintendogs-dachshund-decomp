/* compiler: 1.2/sp2p3  */
/* func_020a3dfc from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a3dfc.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c6438(s32, M2C_UNK, M2C_UNK, s32, s32);
extern s32 data_02153740;
s32 func_020a3dfc(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020c6438((*(s32 *) ((s8 *) (((arg0 * 0x294) + data_02153740 + (arg1 * 4))) + (0xCE4))), arg2, arg3,
                  data_02153740 + 0x3538, 0x200);
    return data_02153740 + 0x3538;
}
