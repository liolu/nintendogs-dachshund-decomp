/* compiler: 2.0/sp1p5  */
/* func_020af650 from projets/nintendogs-dachshund/src/auto/func_020af650.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;
void func_0210f81c(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0                        = (*(void **) ((s8 *) (arg0) + (0x214)));
    temp_r0_2                      = temp_r0 + 0xC;
    *(M2C_S12 *) ((s8 *) arg1 + 0) = *(M2C_S12 *) ((s8 *) temp_r0 + 12);
}
