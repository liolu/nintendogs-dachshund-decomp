/* compiler: 1.2/sp2p3  */
/* func_020dc2e4 from projets/nintendogs-dachshund/src/auto/func_020dc2e4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020a9a90(M2C_UNK);
void func_020a9b78(s32 arg0) {
    s32 temp_r2;
    s32 var_r1;

    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x14))) = var_r1;
    temp_r2                             = (*(s32 *) ((s8 *) (arg0) + (0x14)));
    if (temp_r2 != (*(s32 *) ((s8 *) (arg0) + (0x18)))) {
        (*(s32 *) ((s8 *) (arg0) + (0x18))) = temp_r2;
        (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 1;
    } else {
        (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 0;
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0))) == 0) {
        return;
    }
    func_020a9a90(arg0);
}
