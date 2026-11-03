/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bd640 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bd640.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
u32 func_021075c0(u32 param_1, u8 *param_2) {
    u32 m = *(u8 *) (param_2 + 0x160);
    s32 v;
    if (m == 0) {
        goto ret0;
    }
    switch (m) {
        case 1:
        case 4:
            v = *(s32 *) (param_2 + 0xcc);
            break;
        case 2:
        case 5:
            v = *(s32 *) (param_2 + 0xd8);
            break;
        case 3:
            v = *(s32 *) (param_2 + 0xe4);
            break;
        default:
            v = (s32) param_2;
            break;
    }
    if (v > 0xccd) {
        goto ret1;
    }
    if (v >= -0xccd) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}
