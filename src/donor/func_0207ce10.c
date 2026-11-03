/* compiler: 1.2/sp2p3  */
/* func_0207ce10 from projets/nintendogs-chihuahua-friends/src/auto/func_0207ce10.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207cd90();
extern M2C_UNK func_0207ceb8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32);
extern M2C_UNK *data_0213b5b8;
extern M2C_UNK *data_0213b5bc;
extern s16 data_0215329c;
extern M2C_UNK func_0207cbf4;
extern M2C_UNK func_0207cbfc;
void func_0207ce10(u32 arg0, s32 arg1) {
    if (arg0 <= 2U) {
        func_0207ceb8(4, 3, 2, 0, 1);
    } else {
        func_0207ceb8(4, 3, 0, 2, 1);
    }
    data_0215329c = (s16) arg0;
    func_0207cd90();
    if (arg1 == 0) {
        return;
    }
    data_0213b5b8 = &func_0207cbfc;
    data_0213b5bc = &func_0207cbf4;
}
