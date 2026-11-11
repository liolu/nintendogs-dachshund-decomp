/* compiler: 2.0/sp1p5  */
/* func_020a7dc0 from projets/nintendogs-dachshund/src/auto/func_020a7dc0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02156084;
typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;
void func_02108140(void *arg0) {
    void *temp_r0;

    temp_r0                        = data_02156084 + 0xC;
    *(M2C_S12 *) ((s8 *) arg0 + 0) = *(M2C_S12 *) ((s8 *) data_02156084 + 12);
}
