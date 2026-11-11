/* compiler: 1.2/sp2p3  */
/* func_020a6518 from projets/nintendogs-dachshund/src/auto/func_020a6518.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern void *data_02156080;
s32 func_02106890(void) {
    s32 var_r3;
    void *var_r0;

    var_r3 = 0;
loop_1:
    if ((var_r3 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= var_r3)) {
        var_r0 = ((void *) 0);
    } else {
        var_r0 = (*(void **) ((s8 *) ((data_02156080 + (var_r3 * 4))) + (4)));
    }
    if ((var_r0 != ((void *) 0)) && ((u32) (u16) (s16) ((*(s16 *) ((s8 *) (var_r0) + (0x90))) - 2) <= 1U)) {
        return 1;
    }
    var_r3 = (s32) (s16) (var_r3 + 1);
    if (var_r3 >= 7) {
        return 0;
    }
    goto loop_1;
}
