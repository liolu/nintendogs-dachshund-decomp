/* compiler: 1.2/sp2p3  */
/* func_020f1cc8 from projets/nintendogs-dachshund/src/auto/func_020f1cc8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *data_02153894;
void func_020bed68(s32 arg0) {
    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    if ((s32) * (M2C_UNK *) arg0 >= 0x10) {
        (*(s32 *) ((s8 *) (data_02153894) + (0x198))) = 1;
    }
}
