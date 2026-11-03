/* compiler: 1.2/sp2p3  */
/* func_02013a40 from projets/nintendogs-chihuahua-friends/src/auto/func_02013a40.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02027f08(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020351a0(M2C_UNK);
extern void func_ov002_0218a430(M2C_UNK);
void func_02013a80(s32 arg0) {
    if (func_020351a0(arg0) == 0) {
        return;
    }
    (*(s16 *) ((s8 *) (arg0) + (0x112))) = 0;
    func_02027f08(arg0, 2, 0);
    func_ov002_0218a430(arg0);
}
