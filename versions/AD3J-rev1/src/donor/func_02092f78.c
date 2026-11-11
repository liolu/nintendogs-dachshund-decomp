/* compiler: 1.2/sp2p3  */
/* func_021146e8 from projets/nintendogs-dachshund/src/auto/func_021146e8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020961d4(M2C_UNK);
extern void *data_02153720;
void func_02092f78(s32 arg0) {
    switch (arg0) {
        case 3:
            (*(s16 *) ((s8 *) (data_02153720) + (0x7C))) = 0x6D;
            break;
        case 1:
            (*(s16 *) ((s8 *) (data_02153720) + (0x7C))) = 0x6B;
            break;
        case 2:
            (*(s16 *) ((s8 *) (data_02153720) + (0x7C))) = 0x6C;
            break;
    }
    if ((*(s16 *) ((s8 *) (data_02153720) + (0x7C))) == -1) {
        return;
    }
    func_020961d4((s32) data_02153720);
}
