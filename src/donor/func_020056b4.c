/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02005728 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02005728.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
void func_020056b4(u16 *param_1, s32 param_2) {
    s32 k1;
    s32 k2;
    u32 x;

    x           = (u32) param_2;
    param_1[0]  = 0;
    param_1[1]  = 0;
    param_1[2]  = 0;
    param_1[3]  = 0;
    param_1[4]  = 0;
    param_1[5]  = 0;
    param_1[6]  = 0;
    param_1[8]  = 1;
    param_1[10] = 0;
    param_1[11] = 0;
    param_1[9]  = 0;
    param_1[12] = 0;
    param_1[13] = 0;
    param_1[14] = 0;

    k1 = 6;
    switch (x) {
        case 0:
        case 1:
        case 3:
            k1 = 1;
            break;
        case 2:
        case 4:
            k1 = 2;
            break;
        case 5:
            k1 = 3;
            break;
        case 6:
            break;
    }
    *(s32 *) (param_1 + 16) = k1;
    switch (k1) {
        case 1:
            param_1[18] = 2;
            param_1[20] = 0;
            param_1[21] = 0;
            param_1[19] = 0;
            param_1[22] = 0;
            param_1[23] = 0;
            break;
        case 2:
            param_1[18] = 2;
            param_1[20] = 0;
            param_1[19] = 0;
            param_1[21] = 0;
            param_1[22] = 0;
            param_1[23] = 0;
            break;
        case 3:
            param_1[18] = 2;
            param_1[19] = 0;
            param_1[20] = 0;
            param_1[21] = 0;
            param_1[22] = 0;
            break;
    }

    k2 = 6;
    switch (x) {
        case 0:
            k2 = 1;
            break;
        case 1:
        case 2:
            k2 = 2;
            break;
        case 3:
        case 4:
        case 5:
            k2 = 3;
            break;
        case 6:
            break;
    }
    *(s32 *) (param_1 + 24) = k2;
    switch (k2) {
        case 1:
            param_1[26] = 2;
            param_1[28] = 0;
            param_1[29] = 0;
            param_1[27] = 0;
            param_1[30] = 0;
            param_1[31] = 0;
            break;
        case 2:
            param_1[26] = 2;
            param_1[28] = 0;
            param_1[27] = 0;
            param_1[29] = 0;
            param_1[30] = 0;
            param_1[31] = 0;
            break;
        case 3:
            param_1[26] = 2;
            param_1[27] = 0;
            param_1[28] = 0;
            param_1[29] = 0;
            param_1[30] = 0;
            break;
    }
    *(s32 *) (param_1 + 32) = 0;
    *(s32 *) (param_1 + 34) = 0;
}
