/* compiler: 1.2/sp2p3  */
/* func_020e1fb8 from projets/nintendogs-dachshund/src/auto/func_020e1fb8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020b1108(M2C_UNK);
extern void *data_02153740;
void func_020af2c0(void) {
    s32 temp_r0;

    temp_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0xA8)));
    if ((temp_r0 != 7) && (temp_r0 != 8)) {
        return;
    }
    func_020b1108(0xC);
}
