/* compiler: 1.2/sp2p3  */
/* func_020a6920 from projets/nintendogs-dachshund/src/auto/func_020a6920.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02107178(s16);
extern void *data_02156080;
void func_02106ca0(s32 arg0, s32 arg1) {
    switch (arg1) {
        case 0:
            return;
        case 3:
            (*(s16 *) ((s8 *) (data_02156080) + (0x2C))) = 0;
            return;
        case 1:
            func_02107178((*(s16 *) ((s8 *) (data_02156080) + (0x22))));
            (*(s16 *) ((s8 *) (data_02156080) + (0x2C))) = 2;
            return;
    }
}
