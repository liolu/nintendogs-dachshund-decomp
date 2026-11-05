/* compiler: 1.2/sp2p3  */
/* func_02119e3c from projets/nintendogs-dachshund/src/auto/func_02119e3c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020929b4();
extern M2C_UNK func_020986f4;
extern M2C_UNK func_020989b8;
void *func_020986ac(M2C_UNK arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x20);
    func_020929b4();
    (*(M2C_UNK **) ((s8 *) (temp_r4) + (0x14))) = &func_020989b8;
    (*(M2C_UNK **) ((s8 *) (temp_r4) + (0x10))) = &func_020986f4;
    (*(s32 *) ((s8 *) (temp_r4) + (0x1C)))      = arg1;
    return temp_r4;
}
