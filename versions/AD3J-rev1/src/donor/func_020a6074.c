/* compiler: 1.2/sp2p3  */
/* func_020a6074 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a6074.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_020039d0();
extern void *data_02153740;
void func_020a6074(void *arg0) {
    s32 temp_r1;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0)));
    if (temp_r1 < 0x10) {
        (*(s32 *) ((s8 *) (arg0) + (0)))     = (s32) (temp_r1 + 1);
        (*(s32 *) ((s8 *) (arg0) + (0x1D4))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x1D4))) - 0x100);
        return;
    }
    if (func_020039d0() != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x34D8))) = 1;
    }
}
