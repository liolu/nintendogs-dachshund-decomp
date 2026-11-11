/* compiler: 1.2/sp2p3  */
/* func_020999e8 from projets/nintendogs-dachshund/src/auto/func_020999e8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207fc10(M2C_UNK *);
extern M2C_UNK func_0207fd7c(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK *, s32, s32);
extern M2C_UNK func_02080568(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern M2C_UNK data_02155990;
extern s32 data_02155994;
extern M2C_UNK data_02155998;
extern M2C_UNK data_0215599c;
extern M2C_UNK data_021559a0;
extern M2C_UNK data_021559b4;
extern M2C_UNK data_021559c8;
extern M2C_UNK data_021559dc;
extern M2C_UNK data_02156070;
extern M2C_UNK func_020fa230;
void func_020fa174(void) {
    if (data_02155994 != 0) {
        return;
    }
    func_02080568(&data_021559c8, &data_0215599c, 1);
    func_02080568(&data_021559b4, &data_02155998, 1);
    func_02080568(&data_021559a0, &data_02155990, 1);
    func_0207fd7c(&data_021559dc, &func_020fa230, 0, &data_02156070, 0x600, 0x18);
    func_0207fc10(&data_021559dc);
    data_02155994 = 1;
}
