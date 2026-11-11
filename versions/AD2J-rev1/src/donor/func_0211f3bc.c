/* compiler: 1.2/sp2p3  */
/* func_020bfa74 from projets/nintendogs-dachshund/src/auto/func_020bfa74.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern u16 func_02066510(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
extern u16 data_021560f0;
s32 func_0211f3bc(M2C_UNK arg0, M2C_UNK arg1, u16 *arg2) {
    if (data_021560f0 == 0x8000) {
        *arg2 = 3;
        return 0;
    }
    if (data_021560f0 == 0) {
        *arg2 = 0x15;
        return 0;
    }
    *arg2 = func_02066510(arg0, 3, 0x11, arg1, 0x1E);
    if (*arg2 == 2) {
        return 1;
    }
    return 0;
}
