/* compiler: 1.2/sp2p3  */
/* func_0207161c from projets/children-of-mana/src/auto/func_0207161c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_0207b234(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    if (arg3 & 4) {
        (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) | 1);
    } else {
        (*(s32 *) ((s8 *) (arg0) + (4)))   = (s32) (*(s32 *) ((s8 *) (arg1) + (0)));
        (*(s32 *) ((s8 *) (arg0) + (8)))   = (s32) (*(s32 *) ((s8 *) (arg1) + (4)));
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) (*(s32 *) ((s8 *) (arg1) + (8)));
    }
    (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) | 0x18);
}
