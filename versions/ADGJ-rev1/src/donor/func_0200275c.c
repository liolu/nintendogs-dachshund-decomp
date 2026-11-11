/* compiler: 1.2/sp2p3  */
/* func_020117a4 from projets/code-lyoko/src/auto/func_020117a4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02002798(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *);
extern M2C_UNK func_02002d74();
extern M2C_UNK func_02002d6c;
s32 func_0200275c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02002798(arg0, arg1, &func_02002d6c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02002d74();
    return sp0;
}
