/* compiler: 1.2/sp2p3  */
/* func_02105cd8 from projets/nintendogs-dachshund/src/auto/func_02105cd8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void func_020e1c60(void);
extern void func_020e1ff8(void);
extern void *data_02154cac;
void func_020e1c0c(void) {
    if ((*(s32 *) ((s8 *) (data_02154cac) + (0))) == 0) {
        return;
    }
    if ((*(s32 *) ((s8 *) (data_02154cac) + (8))) != 0) {
        (*(s32 *) ((s8 *) (data_02154cac) + (4))) =
            (s32) ((*(s32 *) ((s8 *) (data_02154cac) + (4))) + (*(s32 *) ((s8 *) (data_02154cac) + (0xC))));
    }
    func_020e1ff8();
    func_020e1c60();
}
