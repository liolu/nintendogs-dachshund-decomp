/* compiler: 2.0/sp1p5  */
/* func_02027590 from projets/nintendogs-chihuahua-friends/src/auto/func_02027590.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;
void func_02027590(void *arg0, void *arg1) {
    void *temp_r0;

    temp_r0                        = arg0 + 0x384;
    *(M2C_S12 *) ((s8 *) arg1 + 0) = *(M2C_S12 *) ((s8 *) arg0 + 900);
}
