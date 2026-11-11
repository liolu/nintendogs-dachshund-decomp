/* compiler: 1.2/sp2p3  */
/* func_020d218c from projets/nintendogs-dachshund/src/auto/func_020d218c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020cc958(M2C_UNK);
extern void *data_02154c48;
void func_020cc900(void) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0   = (*(void **) ((s8 *) (data_02154c48) + (0x141C)));
    temp_r0_2 = temp_r0 + 4;
    if ((*(s32 *) ((s8 *) (temp_r0) + (4))) != 0) {
        return;
    }
    if ((*(s32 *) ((s8 *) (temp_r0_2) + (4))) != 0) {
        return;
    }
    func_020cc958((s32) temp_r0_2);
}
