/* compiler: 1.2/sp2p3  */
/* func_0205ab74 from projets/children-of-mana/src/auto/func_0205ab74.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0207f67c(void);
extern M2C_UNK func_0207f76c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0207f89c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (func_0207f76c(arg0, arg1, arg2, arg3) <= 0) {
        return;
    }
    do {
        func_0207f67c();
    } while (func_0207f76c(arg0, arg1, arg2, arg3) > 0);
}
