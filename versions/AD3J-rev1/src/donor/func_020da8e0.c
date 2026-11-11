/* compiler: 1.2/sp2p3  */
/* func_020fe8f0 from projets/nintendogs-dachshund/src/auto/func_020fe8f0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern void func_0202767c(M2C_UNK, M2C_UNK);
void func_020da8e0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_01ffda04((s32) (*(s16 *) ((s8 *) (arg0) + (0x8C))));
    if (temp_r0 == 0) {
        return;
    }
    func_0202767c(temp_r0, 0);
}
