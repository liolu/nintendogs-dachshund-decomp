/* compiler: 1.2/sp2p3  */
/* func_02081310 from projets/nintendogs-dachshund/src/auto/func_02081310.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_020853dc(M2C_UNK);
void func_02084a88(s32 arg0, s32 arg1) {
    void *var_r5;

    *(u16 *) 0x04000060                 = (*(u16 *) 0x04000060 & ~0x3000) | 8;
    (*(s32 *) ((s8 *) (arg0) + (0x38))) = arg1;
    var_r5                              = (*(void **) ((s8 *) (arg0) + (4)));
    if (var_r5 == ((void *) 0)) {
        return;
    }
    do {
        (*(void **) ((s8 *) (arg0) + (0x34))) = var_r5;
        if (((u32) ((*(s32 *) ((s8 *) (var_r5) + (0x1C))) << 0x1C) >> 0x1F) == 0) {
            func_020853dc(arg0);
        }
        var_r5 = (*(void **) ((s8 *) (var_r5) + (0)));
    } while (var_r5 != ((void *) 0));
}
