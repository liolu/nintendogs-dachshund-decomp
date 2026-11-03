/* compiler: 2.0/sp1p5  */
/* func_0203e280 from projets/nintendogs-chihuahua-friends/src/auto/func_0203e280.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_0203e280(void *arg0, s32 arg1, s16 arg2) {
    (*(s16 *) ((s8 *) ((arg0 + (arg1 * 2))) + (0x150))) = arg2;
    switch (arg1) {
        case 0:
            (*(s16 *) ((s8 *) (arg0) + (0xFC))) = arg2;
            return;
        case 2:
            if ((s32) arg2 >= 0x14) {
                (*(s16 *) ((s8 *) (arg0) + (0x100))) = arg2;
            }
            return;
    }
}
