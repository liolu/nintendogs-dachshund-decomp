/* compiler: 2.0/sp1p5  */
/* func_02096e4c from projets/nintendogs-dachshund/src/auto/func_02096e4c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020f7a70(M2C_UNK);
extern s32 data_021550d8;
void func_020f75e0(s32 arg0) {
    s32 var_r3;

    data_021550d8 = 0;
    var_r3        = 3;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r3 = 0;
            break;
        case 1:
            var_r3 = 1;
            break;
        case 2:
            var_r3 = 2;
            break;
        case 3:
            data_021550d8 = 1;
            break;
    }
    func_020f7a70(var_r3);
}
