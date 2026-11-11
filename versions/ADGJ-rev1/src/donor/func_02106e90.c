/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02106e90 from projets/nintendogs-chihuahua-friends/src/donor/func_02106e90.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed int s32;
s32 func_02106e90(s32 param_1) {
    switch (param_1) {
        case 0:
        case 1:
        case 2:
        case 3:
            return 4;
        case 53:
        case 54:
        case 55:
            return 0;
        case 56:
        case 57:
            return 1;
        case 58:
        case 59:
            return 2;
        case 107:
        case 108:
        case 109:
            return 3;
        case 48:
            return 6;
        case 49:
            return 7;
        case 62:
        case 63:
            return 8;
        case 110:
            return 9;
        case 111:
            return 10;
        case 64:
        case 65:
        case 66:
            return 11;
        case 67:
        case 68:
            return 12;
        case 75:
        case 76:
        case 77:
            return 13;
        case 78:
            return 14;
        case 29:
        case 30:
        case 31:
        case 32:
            return 15;
        case 79:
            return 17;
        case 112:
        case 113:
            return 19;
        case 114:
        case 115:
        case 116:
            return 20;
        default:
            goto mid;
    }
mid:
    if (param_1 < 33) {
        goto m2;
    }
    if (param_1 <= 47) {
        return 5;
    }
m2:
    if (param_1 < 70) {
        goto m3;
    }
    if (param_1 <= 74) {
        return 16;
    }
m3:
    if (param_1 < 80) {
        goto m4;
    }
    if (param_1 <= 100) {
        return 18;
    }
m4:
    return -1;
}
