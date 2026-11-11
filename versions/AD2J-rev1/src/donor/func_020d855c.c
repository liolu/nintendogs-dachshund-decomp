/* compiler: 1.2/sp2p3  */
/* func_020fc54c from projets/nintendogs-dachshund/src/auto/func_020fc54c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02069b68(M2C_UNK);
void func_020d855c(s32 arg0) {
    void *temp_r4;

    temp_r4 = (*(void **) ((s8 *) (arg0) + (0x214)));
    if ((*(s32 *) ((s8 *) (temp_r4) + (0x2B8))) == 0) {
        return;
    }
    func_02069b68(0);
    *(u16 *) 0x0400100A = (*(u16 *) 0x0400100A & 0x43) | 0x504;
    *(u16 *) 0x0400100A = (*(u16 *) 0x0400100A & ~3) | 1;
    *(s32 *) 0x04001000 |= 0x1200;
    *(s32 *) 0x04001000 &= ~0xE000;
    *(s16 *) 0x04001050                     = 0;
    (*(s32 *) ((s8 *) (temp_r4) + (0x2B8))) = 0;
}
