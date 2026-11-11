/* compiler: 1.2/sp2p3  */
/* func_0201d3a4 from projets/nintendogs-chihuahua-friends/src/auto/func_0201d3a4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020254f0(M2C_UNK);
extern void func_02026bcc(M2C_UNK);
extern void *data_02153740;
void func_0201d3a4(s32 arg0) {
    s32 var_r2;

    (*(s16 *) ((s8 *) (arg0) + (0x150))) = 0;
    func_02026bcc(arg0);
    func_020254f0(arg0);
    var_r2 = -1;
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xB8))) == 0x1D) {
        var_r2 = (*(s32 *) ((s8 *) (data_02153740) + (0xE0)));
    }
    switch (var_r2) {
        case 2:
            (*(s32 *) ((s8 *) (arg0) + (0x488))) = 3;
            return;
        case 0:
            (*(s32 *) ((s8 *) (arg0) + (0x488))) = 1;
            return;
        case 1:
            (*(s32 *) ((s8 *) (arg0) + (0x488))) = 2;
            return;
    }
}
