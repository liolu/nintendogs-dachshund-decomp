/* compiler: 1.2/sp2p3  */
/* func_021244e8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_021244e8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02112820();
extern M2C_UNK func_02118e54(M2C_UNK, M2C_UNK, s16, M2C_UNK);
extern void *data_02153720;
extern void *data_02156080;
void func_021244e0(M2C_UNK arg0) {
    s16 temp_r2;
    s16 temp_r2_2;
    s32 temp_r0;
    void *var_r5;

    temp_r2 = (*(s16 *) ((s8 *) (data_02153720) + (0x7A)));
    if (((s32) temp_r2 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= (s32) temp_r2)) {
        var_r5 = ((void *) 0);
    } else {
        var_r5 = (*(void **) ((s8 *) ((data_02156080 + (temp_r2 * 4))) + (4)));
    }
    temp_r0 = func_02112820();
    if (var_r5 == ((void *) 0)) {
        return;
    }
    if (temp_r0 == -1) {
        return;
    }
    temp_r2_2 = (*(s16 *) ((s8 *) (var_r5) + (0x98)));
    if (temp_r0 != temp_r2_2) {
        return;
    }
    func_02118e54(arg0, 0x10, temp_r2_2, 4);
}
