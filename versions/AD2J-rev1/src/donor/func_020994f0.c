/* compiler: 1.2/sp2p3  */
/* func_0211ac80 from projets/nintendogs-dachshund/src/auto/func_0211ac80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020929b4();
extern M2C_UNK func_02099530;
extern M2C_UNK func_02099740;
void *func_020994f0(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x20);
    func_020929b4();
    (*(s16 *) ((s8 *) (temp_r4) + (0)))         = 4;
    (*(M2C_UNK **) ((s8 *) (temp_r4) + (0x10))) = &func_02099530;
    (*(M2C_UNK **) ((s8 *) (temp_r4) + (0x14))) = &func_02099740;
    return temp_r4;
}
