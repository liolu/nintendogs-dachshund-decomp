/* compiler: 1.2/sp2p3  */
/* func_02111b2c from projets/nintendogs-dachshund/src/auto/func_02111b2c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02090508(M2C_UNK, M2C_UNK);
extern s32 data_02153708;
void func_020904ac(void) {
    s32 temp_r4;

    temp_r4 = data_02153708;
    func_02090508(temp_r4, 0xC000);
    (*(s16 *) ((s8 *) (temp_r4) + (4))) = 9;
}
