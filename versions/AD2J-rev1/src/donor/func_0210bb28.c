/* compiler: 1.2/sp2p3  */
/* func_020ab7a8 from projets/nintendogs-dachshund/src/auto/func_020ab7a8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_021077e0(M2C_UNK);
extern void func_0210bb84(M2C_UNK);
void func_0210bb28(s32 arg0) {
    s16 temp_r1;
    void *temp_r2;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x90)));
    switch (temp_r1) {
        case 0:
            temp_r2                                = *(*(void ***) ((s8 *) (arg0) + (0x214)));
            (*(u16 *) ((s8 *) (temp_r2) + (0x20))) = (u16) ((*(u16 *) ((s8 *) (temp_r2) + (0x20))) | 1);
            func_021077e0(arg0);
            return;
        case 1:
            func_0210bb84(arg0);
            return;
    }
}
