/* compiler: 1.2/sp2p3  */
/* func_02054690 from projets/children-of-mana/src/auto/func_02054690.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208b934(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0208ba94(void *);
s32 func_0208b868(s32 arg0, s32 arg1) {
    u8 sp0[68];

    func_0208ba94(sp0);
    if (func_0208b934((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
