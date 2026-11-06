/* compiler: 1.2/sp2p3  */
/* func_020d5978 from projets/nintendogs-dachshund/src/auto/func_020d5978.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_021214bc(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02154c78;
void func_020d00ec(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0                                = func_02003844(arg0, 0x14);
    (*(s16 *) ((s8 *) (temp_r0) + (0)))    = 0;
    (*(s16 *) ((s8 *) (temp_r0) + (2)))    = 0;
    (*(s16 *) ((s8 *) (temp_r0) + (4)))    = 0;
    (*(s16 *) ((s8 *) (temp_r0) + (6)))    = 0;
    (*(s16 *) ((s8 *) (temp_r0) + (8)))    = 0;
    (*(s32 *) ((s8 *) (temp_r0) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (temp_r0) + (0x10))) = 0;
    func_021214bc(arg0, arg1, arg2);
    data_02154c78 = temp_r0;
}
