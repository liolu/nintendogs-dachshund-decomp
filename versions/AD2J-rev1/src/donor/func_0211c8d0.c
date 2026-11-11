/* compiler: 2.0/sp1p5  */
/* func_020bd04c from projets/nintendogs-dachshund/src/auto/func_020bd04c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;
void func_0211c8d0(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r3;

    temp_r3                           = (arg1 * 0xC) + (*(s32 *) ((s8 *) (arg0) + (4)));
    *(M2C_S12 *) ((s8 *) temp_r3 + 0) = *(M2C_S12 *) ((s8 *) arg2 + 0);
}
