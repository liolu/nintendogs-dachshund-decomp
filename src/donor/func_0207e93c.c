/* compiler: 2.0/sp1p5  */
/* func_020a1e7c from projets/eyeshield-21/src/auto/func_020a1e7c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_02128f70;
void func_0207e93c(void *arg0, s32 arg1, s32 arg2) {
    (*(M2C_UNK **) ((s8 *) (arg0) + (0)))       = &data_02128f70;
    (*(volatile s32 *) ((s8 *) (arg0) + (4)))   = arg1;
    (*(volatile s32 *) ((s8 *) (arg0) + (8)))   = arg2;
    (*(volatile s32 *) ((s8 *) (arg0) + (0xC))) = 0;
}
