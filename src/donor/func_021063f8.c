/* compiler: 1.2/sp2p3  */
/* func_020a6080 from projets/nintendogs-dachshund/src/auto/func_020a6080.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02106474(M2C_UNK);
extern M2C_UNK func_021077a4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02156080;
s32 func_021063f8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    void *var_r0;

    temp_r0 = func_02106474(arg1);
    if ((temp_r0 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= temp_r0)) {
        var_r0 = ((void *) 0);
    } else {
        var_r0 = (*(void **) ((s8 *) ((data_02156080 + (temp_r0 * 4))) + (4)));
    }
    if (var_r0 == ((void *) 0)) {
        return -1;
    }
    (*(s16 *) ((s8 *) (var_r0) + (0x9C))) = (s16) arg0;
    (*(s16 *) ((s8 *) (var_r0) + (0x9E))) = 0;
    func_021077a4((s32) var_r0, arg2, -1, -1);
    return temp_r0;
}
