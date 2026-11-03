/* compiler: 1.2/sp2p3  */
/* func_020bc2ec from projets/nintendogs-dachshund/src/auto/func_020bc2ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02044644(M2C_UNK);
extern M2C_UNK func_02118e48(void *);
void func_0211bb68(void *arg0) {
    void *temp_r4;

    temp_r4 = arg0 + 0x60;
    func_02044644(0);
    func_02118e48(arg0);
    (*(s16 *) ((s8 *) (arg0) + (0x60))) = 2;
    (*(s16 *) ((s8 *) (temp_r4) + (2))) = 2;
    (*(s16 *) ((s8 *) (temp_r4) + (4))) = 2;
}
