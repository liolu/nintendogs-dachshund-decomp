/* compiler: 1.2/sp2p3  */
/* func_02039698 from projets/code-lyoko/src/auto/func_02039698.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063760(s32, M2C_UNK);
extern s32 data_0214f360;
void func_0207177c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02063760(arg0, 0);
    data_0214f360 &= ~arg0;
}
