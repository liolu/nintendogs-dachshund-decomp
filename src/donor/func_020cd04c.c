/* compiler: 1.2/sp2p3  */
/* func_020d28d8 from projets/nintendogs-dachshund/src/auto/func_020d28d8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern s32 data_02154c48;
s32 func_020cd04c(u32 arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    switch (arg0) {
        default:
            break;
        case 1:
            var_r2 = (arg1 * 0x18) + (data_02154c48 + 0x143C);
            break;
        case 2:
            var_r2 = (arg1 * 0x18) + (data_02154c48 + 0x1484);
            break;
        case 0:
            var_r2 = data_02154c48 + 0x140C;
            break;
        case 6:
            var_r2 = data_02154c48 + 0x1424;
            break;
        case 3:
            var_r2 = data_02154c48 + 0x14CC;
            break;
        case 4:
            var_r2 = (arg1 * 0x18) + (data_02154c48 + 0x14E4);
            break;
        case 5:
            var_r2 = (arg1 * 0x18) + (data_02154c48 + 0x155C);
            break;
    }
    return var_r2;
}
