/* compiler: 1.2/sp2p3  */
/* func_020524fc from projets/children-of-mana/src/auto/func_020524fc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02000dec();
extern M2C_UNK func_02000ee8();
extern M2C_UNK func_0206e488();
extern s32 func_0206e66c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0206e694(M2C_UNK, M2C_UNK *);
extern s32 data_0214a5c8;
extern s32 data_0214a5cc;
extern M2C_UNK func_02000e4c;
extern M2C_UNK func_02000eac;
void func_020010a4(void) {
    if (data_0214a5c8 != 0) {
        return;
    }
    data_0214a5c8 = 1;
    func_02000dec();
    func_0206e488();
    do {

    } while (func_0206e66c(0xD, 1) == 0);
    func_0206e694(0xD, &func_02000eac);
    func_02000ee8();
    func_0206e694(0xD, ((void *) 0));
    func_0206e694(0xD, &func_02000e4c);
    data_0214a5cc = 0;
}
