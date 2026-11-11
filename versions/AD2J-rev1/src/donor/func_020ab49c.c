/* compiler: 1.2/sp2p3  */
/* func_020ddca8 from projets/nintendogs-dachshund/src/auto/func_020ddca8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020efb80(M2C_UNK);
void func_020ab49c(s32 arg0) {
    s32 var_r1;

    var_r1 = -1;
    switch (arg0) {
        case 3:
            var_r1 = 4;
            break;
        case 1:
            var_r1 = 2;
            break;
        case 2:
            var_r1 = 3;
            break;
    }
    if (var_r1 < 0) {
        return;
    }
    func_020efb80(var_r1);
}
