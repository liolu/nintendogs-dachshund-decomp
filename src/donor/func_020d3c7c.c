/* compiler: 1.2/sp2p3  */
/* func_020f7c5c from projets/nintendogs-dachshund/src/auto/func_020f7c5c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107ca4(void *, M2C_UNK);
extern M2C_UNK func_020d2bdc;
extern M2C_UNK func_020d2c18;
extern M2C_UNK func_020d3b18;
extern M2C_UNK func_020d3c08;
void func_020d3c7c(void *arg0, M2C_UNK arg1) {
    void *temp_r2;

    func_02107ca4(arg0, 0x45);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4))) = &func_020d3b18;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8))) = &func_020d2c18;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0))) = &func_020d3c08;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x200))) = &func_020d2bdc;
    (*(void **) ((s8 *) (arg0) + (0x214)))    = func_02003844(arg1, 0x20);
    (*(s32 *) ((s8 *) (arg0) + (0x24)))       = 0x6000;
    (*(s32 *) ((s8 *) (arg0) + (0x28)))       = 0x6000;
    (*(s32 *) ((s8 *) (arg0) + (0x2C)))       = 0x6000;
    temp_r2                                   = (*(void **) ((s8 *) (arg0) + (0x214)));
    (*(s32 *) ((s8 *) (temp_r2) + (4)))       = 0;
    (*(s32 *) ((s8 *) (temp_r2) + (0x14)))    = 0;
    (*(s32 *) ((s8 *) (temp_r2) + (0x18)))    = 1;
    (*(s32 *) ((s8 *) (temp_r2) + (8)))       = 0;
    (*(s32 *) ((s8 *) (temp_r2) + (0x1C)))    = 0;
    (*(s32 *) ((s8 *) (arg0) + (0xAC)))       = 0x3E8;
}
