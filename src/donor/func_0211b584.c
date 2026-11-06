/* compiler: 1.2/sp2p3  */
/* func_0211b584 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0211b584.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02106e90(s16);
extern M2C_UNK func_02108160(M2C_UNK);
extern M2C_UNK func_02118e5c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02153720;
void func_0211b584(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02106e90((*(s16 *) ((s8 *) (data_02153720) + (0x7C))));
    switch (temp_r0) {
        case 11:
            func_02108160(1);
            func_02118e5c(arg0, 0x13, -1, 0);
            return;
        case 12:
            func_02108160(1);
            func_02118e5c(arg0, 3, -1, 0);
            return;
    }
}
