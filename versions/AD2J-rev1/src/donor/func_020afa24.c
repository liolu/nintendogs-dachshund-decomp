/* compiler: 1.2/sp2p3  */
/* func_020e26f8 from projets/nintendogs-dachshund/src/auto/func_020e26f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void func_020b10cc(void);
extern void *data_02153740;
extern s32 *data_02153894;
void func_020afa24(void) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0xA8)));
    if ((temp_r0 != 0) && (temp_r0 != 4) && (temp_r0 != 0xE)) {
        return;
    }
    temp_r0_2 = *data_02153894;
    if ((temp_r0_2 != 6) && (temp_r0_2 != 7)) {
        return;
    }
    func_020b10cc();
}
