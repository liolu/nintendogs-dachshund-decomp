/* compiler: 1.2/sp2p3  */
/* func_0203b67c from projets/code-lyoko/src/auto/func_0203b67c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207d7e8(void *, s32);
extern s32 func_0207e4e4(s32, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020734f8();
s32 func_02073468(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0207e4e4(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020734f8();
    func_0207d7e8(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
