/* compiler: 1.2/sp2p3  */
/* func_020396d0 from projets/code-lyoko/src/auto/func_020396d0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206378c(s32, M2C_UNK);
extern s32 data_0214f360;
s32 func_020717b4(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_0214f360) {
        return 0;
    }
    func_0206378c(arg0, 0);
    data_0214f360 |= arg0;
    return 1;
}
