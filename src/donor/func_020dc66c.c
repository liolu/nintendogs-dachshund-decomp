/* compiler: 1.2/sp2p3  */
/* func_0210069c from projets/nintendogs-dachshund/src/auto/func_0210069c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020dc6c4(M2C_UNK);
extern void func_020dc8b0(M2C_UNK);
void func_020dc66c(s32 arg0) {
    s16 temp_r1;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x90)));
    switch (temp_r1) {
        case 0:
            return;
        case 2:
            func_020dc8b0(arg0);
            return;
        case 3:
            func_020dc6c4(arg0);
            return;
    }
}
