/* compiler: 2.0/sp1p5  */
/* func_02038ef8 from projets/nintendogs-chihuahua-friends/src/auto/func_02038ef8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;
void func_02038ef8(void *arg0) {
    void *temp_r1;
    void *temp_r3;

    temp_r1                          = arg0 + 0x2A0;
    temp_r3                          = arg0 + 0x26C;
    *(M2C_S12 *) ((s8 *) arg0 + 620) = *(M2C_S12 *) ((s8 *) arg0 + 672);
}
