/* compiler: 1.2/sp2p3  */
/* func_020f6b20 from projets/nintendogs-dachshund/src/auto/func_020f6b20.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02107ca4(void *, M2C_UNK);
extern s32 *data_02154c9c;
extern M2C_UNK func_020d16f8;
extern M2C_UNK func_020d1744;
extern M2C_UNK func_020d2958;
extern M2C_UNK func_020d2b34;
void func_020d2b40(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    void *temp_r1;

    func_02107ca4(arg0, 0x31);
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F4))) = &func_020d2958;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F8))) = &func_020d1744;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x1F0))) = &func_020d2b34;
    (*(M2C_UNK **) ((s8 *) (arg0) + (0x200))) = &func_020d16f8;
    (*(void **) ((s8 *) (arg0) + (0x214)))    = func_02003844(arg1, 0x1C);
    temp_r1                                   = (*(void **) ((s8 *) (arg0) + (0x214)));
    if (temp_r1 == ((void *) 0)) {
        return;
    }
    if (data_02154c9c != ((void *) 0)) {
        var_r0 = *data_02154c9c;
    } else {
        var_r0 = 0;
    }
    (*(s32 *) ((s8 *) (temp_r1) + (0x18))) = var_r0;
    (*(s16 *) ((s8 *) (temp_r1) + (0x10))) = 0;
}
