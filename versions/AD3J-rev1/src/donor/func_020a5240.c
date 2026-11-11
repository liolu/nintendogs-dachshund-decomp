/* compiler: 2.0/sp1p5  */
/* func_020d7880 from projets/nintendogs-dachshund/src/auto/func_020d7880.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_02153740;
void func_020a5240(s32 arg0) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB0))) != 0) {
        return;
    }
    if (arg0 < 0) {
        return;
    }
    if (arg0 < 0x2B) {
        (*(s32 *) ((s8 *) (data_02153740) + (0xB4))) = arg0;
    }
}
