/* compiler: 1.2/sp2p3  */
/* func_0200674c from projets/code-lyoko/src/auto/func_0200674c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_0206b794(void *arg0, s32 arg1, s32 arg2) {
    if (arg2 < 0) {
        (*(s16 *) ((s8 *) (arg0) + (0))) = (s16) (arg1 | 0xC0);
        (*(s16 *) ((s8 *) (arg0) + (4))) = (s16) (0 - arg2);
        return;
    }
    (*(s16 *) ((s8 *) (arg0) + (0))) = (s16) (arg1 | 0x80);
    (*(s16 *) ((s8 *) (arg0) + (4))) = (s16) arg2;
}
