/* compiler: 1.2/sp2p3  */
/* func_020ca1f8 from projets/nintendogs-dachshund/src/auto/func_020ca1f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02078be4(M2C_UNK);
void func_020c4bf4(s32 arg0, s32 arg1) {
    void *temp_r0;

    (*(s32 *) ((s8 *) (arg0) + (8)))     = arg1;
    (*(void **) ((s8 *) (arg0) + (0xC))) = ((void *) 0);
    if (arg1 == 0) {
        return;
    }
    temp_r0 = (void *) func_02078be4(arg1);
    (*(void **) ((s8 *) (arg0) + (0xC))) =
        (void *) (temp_r0 + (*(s32 *) ((s8 *) ((temp_r0 + (*(u16 *) ((s8 *) (temp_r0) + (0xE))))) + (0xC))));
}
