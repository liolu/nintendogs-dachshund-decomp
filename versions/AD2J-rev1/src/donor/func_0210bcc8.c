/* compiler: 2.0/sp1p5  */
/* func_020ab948 from projets/nintendogs-dachshund/src/auto/func_020ab948.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_021077e0(M2C_UNK);
void func_0210bcc8(s32 arg0) {
    void *temp_r2;

    temp_r2                                = *(*(void ***) ((s8 *) (arg0) + (0x214)));
    (*(u16 *) ((s8 *) (temp_r2) + (0x20))) = (u16) ((*(u16 *) ((s8 *) (temp_r2) + (0x20))) | 1);
    func_021077e0(arg0);
}
