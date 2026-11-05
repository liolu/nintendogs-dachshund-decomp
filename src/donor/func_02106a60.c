/* compiler: 1.2/sp2p3  */
/* func_020a66e0 from projets/nintendogs-dachshund/src/auto/func_020a66e0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0210bebc(M2C_UNK);
extern void *data_02156080;
s32 func_02106a60(s32 arg0) {
    s16 temp_r0;
    s32 var_r0;
    s32 var_r9;
    void *var_r8;

    var_r9 = 0;
loop_1:
    if ((var_r9 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= var_r9)) {
        var_r8 = ((void *) 0);
    } else {
        var_r8 = (*(void **) ((s8 *) ((data_02156080 + (var_r9 * 4))) + (4)));
    }
    if (var_r8 != ((void *) 0)) {
        temp_r0 = (*(s16 *) ((s8 *) (var_r8) + (0x90)));
        if ((temp_r0 == 0) || (temp_r0 == 2)) {
            var_r0 = 1;
        } else if (((*(s16 *) ((s8 *) (var_r8) + (0x94))) == 0x35) && (func_0210bebc((s32) var_r8) == 0)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 == 0) {
            if (arg0 == (*(s16 *) ((s8 *) (var_r8) + (0x98)))) {
                return (s32) var_r8;
            }
            if (arg0 == (*(s16 *) ((s8 *) (var_r8) + (0x9A)))) {
                return (s32) var_r8;
            }
            goto block_18;
        }
        goto block_18;
    }
block_18:
    var_r9 = (s32) (s16) (var_r9 + 1);
    if (var_r9 >= 7) {
        return 0;
    }
    goto loop_1;
}
