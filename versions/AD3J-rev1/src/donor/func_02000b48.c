/* compiler: 1.2/sp2p3  */
/* func_02072990 from projets/madagascar/src/auto/func_02072990.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK WaitByLoop(M2C_UNK);
extern s32 func_0206e5b8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02000b48(M2C_UNK arg0) {
    if (func_0206e5b8(0xD, arg0, 0) == 0) {
        return;
    }
    do {
        WaitByLoop(1);
    } while (func_0206e5b8(0xD, arg0, 0) != 0);
}
