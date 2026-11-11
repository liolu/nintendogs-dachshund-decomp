/* compiler: 1.2/sp2p3  */
/* func_020f7be8 from projets/nintendogs-dachshund/src/auto/func_020f7be8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020848ec(M2C_UNK, M2C_UNK);
extern void func_021077d8(M2C_UNK);
extern s32 *data_02154c9c;
void func_020d3c00(s32 arg0) {
    s32 temp_r1;
    s32 var_r0;
    s32 var_r2;
    void *temp_r4;

    if ((*(s16 *) ((s8 *) (arg0) + (0x88))) == 0) {
        func_021077d8(arg0);
        return;
    }
    temp_r4 = (*(void **) ((s8 *) (arg0) + (0x214)));
    temp_r1 = (*(s32 *) ((s8 *) (temp_r4) + (0x1C)));
    if (temp_r1 == 0) {
        return;
    }
    if (data_02154c9c != ((void *) 0)) {
        var_r2 = *data_02154c9c;
    } else {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        return;
    }
    if (data_02154c9c != ((void *) 0)) {
        var_r0 = *data_02154c9c;
    } else {
        var_r0 = 0;
    }
    func_020848ec(var_r0, temp_r1);
    (*(s32 *) ((s8 *) (temp_r4) + (0x1C))) = 0;
}
