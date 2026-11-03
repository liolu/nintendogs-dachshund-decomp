/* compiler: 1.2/sp2p3  */
/* func_0211d620 from projets/nintendogs-dachshund/src/auto/func_0211d620.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_020929b4();
extern M2C_UNK func_0209becc;
extern M2C_UNK func_0209bf20;
void *func_0209be8c(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x20);
    func_020929b4();
    (*(s16 *) ((s8 *) (temp_r4) + (0)))         = 0xB;
    (*(M2C_UNK **) ((s8 *) (temp_r4) + (0x14))) = &func_0209bf20;
    (*(M2C_UNK **) ((s8 *) (temp_r4) + (0x10))) = &func_0209becc;
    return temp_r4;
}
