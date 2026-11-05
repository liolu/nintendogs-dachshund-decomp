/* compiler: 1.2/sp2p3  */
/* func_0211e494 from projets/nintendogs-dachshund/src/auto/func_0211e494.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02095524(M2C_UNK);
extern M2C_UNK func_02095610(M2C_UNK);
extern void func_02095784(M2C_UNK);
void func_0209ccb0(s32 arg0) {
    s16 temp_r1;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x2E)));
    switch (temp_r1) {
        case 1:
            return;
        case 0:
            func_02095610(arg0);
            return;
        case 4:
            if (func_02095524(arg0) == 0) {
                return;
            }
            func_02095784(arg0);
            return;
    }
}
