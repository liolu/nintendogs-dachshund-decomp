/* compiler: 1.2/sp2p3 -O4,s */
/* func_02043498 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02043498.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c4d60(s32);
extern s32 func_020c4da0(M2C_UNK, s32);
extern void *data_0214b484;
void func_02043498(M2C_UNK arg0) {
    s16 var_r6;
    s32 temp_r0;
    void *temp_r4;
    void *temp_r5;

    var_r6 = 0;
    do {
        temp_r0 = (*(s32 *) ((s8 *) ((data_0214b484 + (var_r6 * 4))) + (0x44)));
        if (temp_r0 != 0) {
            func_020c4d60(temp_r0 + 0x98);
        }
        var_r6 += 1;
    } while ((s32) var_r6 < 3);
    temp_r5                                  = data_0214b484;
    (*(s32 *) ((s8 *) (temp_r5) + (0x7404))) = func_020c4da0(arg0, (*(s32 *) ((s8 *) (temp_r5) + (0x7400))));
    temp_r4                                  = data_0214b484;
    (*(s32 *) ((s8 *) (temp_r4) + (0x7418))) = func_020c4da0(arg0, (*(s32 *) ((s8 *) (temp_r4) + (0x7414))));
}
