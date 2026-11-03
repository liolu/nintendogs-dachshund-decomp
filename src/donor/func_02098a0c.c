/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b0c58 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b0c58.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
u32 func_02098a0c(u8 *param_1) {
    u32 r = 0;
    s16 k = *(s16 *) (*(u8 **) (param_1 + 0x1c) + 4);
    switch (k) {
        case 0:
            return r;
        case 1:
            return 3;
        case 2:
            return 4;
        case 3:
            return 2;
        case 4:
            return 6;
        case 5:
            r = 5;
            break;
        case 6:
            return r;
        case 7:
            return 1;
        default:
            break;
    }
    return r;
}
