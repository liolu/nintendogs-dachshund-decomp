/* compiler: 1.2/sp2p3  */
/* func_0206b74c from projets/nintendogs-chihuahua-friends/src/auto/func_0206b74c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
void func_0206b74c(void *arg0, s32 arg1) {
    u16 temp_r3;

    temp_r3 = (*(u16 *) ((s8 *) (arg0) + (0)));
    if (arg1 < 0) {
        if ((temp_r3 & 0xC0) == 0x80) {
            (*(u16 *) ((s8 *) (arg0) + (0))) = (u16) ((temp_r3 & ~0xC0) | 0xC0);
        }
        (*(s16 *) ((s8 *) (arg0) + (4))) = (s16) (0 - arg1);
        return;
    }
    if ((temp_r3 & 0xC0) == 0xC0) {
        (*(u16 *) ((s8 *) (arg0) + (0))) = (u16) ((temp_r3 & ~0xC0) | 0x80);
    }
    (*(s16 *) ((s8 *) (arg0) + (4))) = (s16) arg1;
}
