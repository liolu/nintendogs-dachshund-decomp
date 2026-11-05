/* compiler: 2.0/sp1p5  */
/* func_020b95a8 from projets/nintendogs-dachshund/src/auto/func_020b95a8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;
void func_02118e34(void *arg0) {
    void *temp_r1;
    void *temp_r3;

    (*(s16 *) ((s8 *) (arg0) + (0x50))) = 0x3C;
    temp_r1                             = arg0 + 0xC;
    temp_r3                             = arg0 + 0x54;
    *(M2C_S12 *) ((s8 *) arg0 + 84)     = *(M2C_S12 *) ((s8 *) arg0 + 12);
}
