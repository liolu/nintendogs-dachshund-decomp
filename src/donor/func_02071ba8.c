/* compiler: 1.2/sp2p3  */
/* func_02039ad8 from projets/code-lyoko/src/auto/func_02039ad8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02071808(M2C_UNK, M2C_UNK);
extern void func_020719d0(M2C_UNK);
extern void func_02074c3c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02071ba8(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return;
    }
    if ((*(u8 *) ((s8 *) (arg0) + (0x2C))) == 0) {
        return;
    }
    if (arg1 == 0) {
        func_020719d0(arg0);
        return;
    }
    func_02074c3c(arg0 + 0x1C, 0, arg1);
    func_02071808(arg0, 0);
    (*(u8 *) ((s8 *) (arg0) + (0x2C))) = 2U;
}
