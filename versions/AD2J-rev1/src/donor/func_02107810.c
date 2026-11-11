/* compiler: 1.2/sp2p3  */
/* func_020a7490 from projets/nintendogs-dachshund/src/auto/func_020a7490.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_01ffec9c(M2C_UNK);
void func_02107810(s32 arg0) {
    M2C_UNK (*temp_r1)(arg0);

    temp_r1 = (*(M2C_UNK(**)())((s8 *) (arg0) + (0x20C)));
    if (temp_r1 != ((void *) 0)) {
        temp_r1(arg0);
    }
    func_01ffec9c(arg0);
}
