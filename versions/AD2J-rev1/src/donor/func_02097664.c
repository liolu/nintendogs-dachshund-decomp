/* compiler: 1.2/sp2p3  */
/* func_02118df4 from projets/nintendogs-dachshund/src/auto/func_02118df4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020ae8d8(M2C_UNK);
extern M2C_UNK func_02095524(M2C_UNK);
extern M2C_UNK func_02095610(M2C_UNK);
extern void func_02095784(M2C_UNK);
extern void *data_02156080;
extern void *data_02153720;
void func_02097664(s32 arg0) {
    s16 temp_r0;
    s16 temp_r1;
    s16 temp_r2;
    s32 var_r0;
    void *var_r1;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x2E)));
    switch (temp_r1) {
        case 0:
            func_02095610(arg0);
            return;
        case 1:
            temp_r2 = (*(s16 *) ((s8 *) (data_02153720) + (0x7A)));
            if (((s32) temp_r2 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= (s32) temp_r2)) {
                var_r1 = ((void *) 0);
            } else {
                var_r1 = (*(void **) ((s8 *) ((data_02156080 + (temp_r2 * 4))) + (4)));
            }
            if (var_r1 == ((void *) 0)) {
                return;
            }
            if (((*(s16 *) ((s8 *) (var_r1) + (0x92))) == 3) && ((*(s16 *) ((s8 *) (var_r1) + (0x90))) == 1)) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            if (var_r0 == 0) {
                return;
            }
            (*(s16 *) ((s8 *) (arg0) + (0x58))) = -2;
            temp_r0                             = (*(s16 *) ((s8 *) (arg0) + (0x5A)));
            if ((s32) temp_r0 < 0x3E8) {
                (*(s16 *) ((s8 *) (arg0) + (0x5A))) = (s16) (temp_r0 + 1);
            }
            (*(s16 *) ((s8 *) (arg0) + (0x5C))) = 0;
            (*(s32 *) ((s8 *) (arg0) + (0x60))) = 0;
            (*(s16 *) ((s8 *) (arg0) + (0x5E))) = 1;
            func_020ae8d8(8);
            return;
        case 4:
            if (func_02095524(arg0) == 0) {
                return;
            }
            func_02095784(arg0);
            return;
    }
}
