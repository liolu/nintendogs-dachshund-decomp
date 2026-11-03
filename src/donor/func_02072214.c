/* compiler: 1.2/sp2p3  */
/* func_02039ff8 from projets/code-lyoko/src/auto/func_02039ff8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02074c3c(void *, s32, M2C_UNK);
void func_02072214(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 == ((void *) 0)) {
        return;
    }
    if ((*(u8 *) ((s8 *) (temp_r3) + (0x2C))) == 2) {
        return;
    }
    func_02074c3c(temp_r3 + 0x1C, arg1 << 8, arg2);
}
