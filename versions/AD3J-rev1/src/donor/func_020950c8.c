/* compiler: 1.2/sp2p3  */
/* func_02116858 from projets/nintendogs-dachshund/src/auto/func_02116858.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern M2C_UNK func_02026fa0(void);
extern M2C_UNK func_02026fc8(M2C_UNK);
extern void *data_02156080;
extern void *data_02153720;
void func_020950c8(s32 arg0) {
    s16 temp_r0_2;
    s16 temp_r2;
    s32 temp_r0;
    s32 var_r5;
    s32 var_r5_2;
    void *var_r0;

    var_r5                              = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x24))) = 0;
loop_1:
    if ((func_01ffda04(var_r5) != 0) && (func_02026fa0() != 0)) {
        (*(s16 *) ((s8 *) (arg0) + (0x24))) = 1;
        return;
    }
    var_r5 = (s32) (s16) (var_r5 + 1);
    if (var_r5 >= 3) {
        var_r5_2 = 0;
    loop_6:
        temp_r0 = func_01ffda04(var_r5_2);
        if ((temp_r0 != 0) && (func_02026fc8(temp_r0) != 0)) {
            (*(s16 *) ((s8 *) (arg0) + (0x24))) = 2;
            return;
        }
        var_r5_2 = (s32) (s16) (var_r5_2 + 1);
        if (var_r5_2 >= 3) {
            temp_r2 = (*(s16 *) ((s8 *) (data_02153720) + (0x7A)));
            if (((s32) temp_r2 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= (s32) temp_r2)) {
                var_r0 = ((void *) 0);
            } else {
                var_r0 = (*(void **) ((s8 *) ((data_02156080 + (temp_r2 * 4))) + (4)));
            }
            if (var_r0 == ((void *) 0)) {
                return;
            }
            temp_r0_2 = (*(s16 *) ((s8 *) (var_r0) + (0x90)));
            if ((temp_r0_2 != 2) && (temp_r0_2 != 3)) {
                return;
            }
            (*(s16 *) ((s8 *) (arg0) + (0x24))) = 2;
            return;
        }
        goto loop_6;
    }
    goto loop_1;
}
