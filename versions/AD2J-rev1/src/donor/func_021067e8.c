/* compiler: 1.2/sp2p3  */
/* func_020a6468 from projets/nintendogs-dachshund/src/auto/func_020a6468.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void *data_02156080;
s32 func_021067e8(void) {
    s16 temp_r0;
    s32 var_lr;
    s32 var_r0_2;
    void *var_r0;

    var_lr = 0;
loop_1:
    if ((var_lr < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= var_lr)) {
        var_r0 = ((void *) 0);
    } else {
        var_r0 = (*(void **) ((s8 *) ((data_02156080 + (var_lr * 4))) + (4)));
    }
    if (var_r0 != ((void *) 0)) {
        temp_r0 = (*(s16 *) ((s8 *) (var_r0) + (0x90)));
        if ((temp_r0 == 3) || (temp_r0 == 6) || (temp_r0 == 8)) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            return 1;
        }
        goto block_13;
    }
block_13:
    var_lr = (s32) (s16) (var_lr + 1);
    if (var_lr >= 7) {
        return 0;
    }
    goto loop_1;
}
