/* compiler: 1.2/sp2p3  */
/* func_02110cc0 from projets/nintendogs-dachshund/src/auto/func_02110cc0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_020c9538();
extern s32 func_0208f708(M2C_UNK);
extern s32 func_0208f768(M2C_UNK);
extern s32 func_0208f7c8(M2C_UNK);
s32 func_0208f640(u32 arg0, M2C_UNK arg1) {
    s32 var_r2;

    var_r2 = 0xFFFF;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r2 = func_020c9538();
            break;
        case 1:
            var_r2 = func_0208f7c8(arg1);
            break;
        case 2:
            var_r2 = func_0208f768(arg1);
            break;
        case 3:
            var_r2 = func_0208f708(arg1);
            break;
        case 4:
            var_r2 = 0x18;
            break;
        case 5:
            var_r2 = 0x19;
            break;
        case 6:
            var_r2 = 0x1A;
            break;
        case 7:
            var_r2 = 0x1C;
            break;
        case 8:
            var_r2 = 0x1D;
            break;
        case 9:
            var_r2 = 0x1B;
            break;
        case 10:
            var_r2 = 0x1E;
            break;
    }
    return var_r2;
}
