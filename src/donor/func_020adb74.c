/* compiler: 1.2/sp2p3  */
/* func_020e0398 from projets/nintendogs-dachshund/src/auto/func_020e0398.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020c6530(s32, s32, s32);
extern void *data_02154c3c;
void func_020adb74(s32 arg0) {
    s32 var_r1;
    s32 var_r2;

    var_r1 = 0x3E7;
    var_r2 = 0x3E7;
    switch (arg0) {
        case 0x20:
            var_r1 = 0x59B;
            var_r2 = 0;
            break;
        case 0x40:
            var_r1 = 0x59C;
            var_r2 = 0;
            break;
        case 0x1:
            var_r1 = 0x596;
            var_r2 = 0;
            break;
        case 0x2:
            var_r1 = 0x597;
            var_r2 = 0;
            break;
        case 0x4:
            var_r1 = 0x598;
            var_r2 = 0;
            break;
        case 0x8:
            var_r1 = 0x599;
            var_r2 = 0;
            break;
        case 0x10:
            var_r1 = 0x59A;
            var_r2 = 0;
            break;
    }
    func_020c6530((*(s32 *) ((s8 *) (data_02154c3c) + (4))), var_r1, var_r2);
}
