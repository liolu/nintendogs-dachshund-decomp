/* compiler: 1.2/sp2p3  */
/* func_020abb70 from projets/nintendogs-dachshund/src/auto/func_020abb70.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02106b40(M2C_UNK);
extern void func_021077e0(M2C_UNK);
extern void func_0210bce8(M2C_UNK, M2C_UNK);
void func_0210bef0(s32 arg0) {
    void **temp_r2;
    void *temp_r2_2;
    void *temp_r4;

    temp_r4                                = (*(void **) ((s8 *) (arg0) + (0x1B0)));
    (*(s16 *) ((s8 *) (temp_r4) + (0x9C))) = 0;
    func_0210bce8((s32) temp_r4, (*(s32 *) ((s8 *) (arg0) + (0x28))));
    temp_r2                                  = (*(void ***) ((s8 *) (temp_r4) + (0x214)));
    *temp_r2                                 = (*(void **) ((s8 *) (arg0) + (0x1BC)));
    temp_r2_2                                = *temp_r2;
    (*(u16 *) ((s8 *) (temp_r2_2) + (0x20))) = (u16) ((*(u16 *) ((s8 *) (temp_r2_2) + (0x20))) | 1);
    func_021077e0((s32) temp_r4);
    func_02106b40((s32) temp_r4);
}
