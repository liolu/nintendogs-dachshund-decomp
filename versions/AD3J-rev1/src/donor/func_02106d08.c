/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020bcd88 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bcd88.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
u32 func_02106d08(s32 param_1) {
    switch (param_1) {
        case 0:
            goto brk;
        case 1:
            goto r2;
        case 2:
            goto brk;
        case 3:
            goto brk;
        case 4:
            goto brk;
        case 5:
            goto brk;
        case 6:
            goto brk;
        case 7:
            goto brk;
        case 8:
            goto brk;
        case 9:
            goto r3;
        case 10:
            goto r2;
        case 11:
            goto brk;
        case 12:
            goto brk;
        case 13:
            goto r3;
        case 14:
            goto r2;
        case 15:
            goto r2;
        case 16:
            goto r2;
        case 17:
            goto r2;
        case 18:
            goto r2;
        case 19:
            goto r3;
        case 20:
            goto brk;
        case 21:
            goto r4;
        case 22:
            goto r4;
        case 23:
            goto brk;
        case 24:
            goto r2;
        case 25:
            goto r4;
        case 26:
            goto r0;
        case 27:
            goto brk;
        case 28:
            goto r3;
        case 29:
            goto r4;
        case 30:
            goto r4;
        case 31:
            goto r4;
        case 32:
            goto r4;
        case 33:
            goto brk;
        case 34:
            goto brk;
        case 35:
            goto brk;
        case 36:
            goto brk;
        case 37:
            goto brk;
        case 38:
            goto brk;
        case 39:
            goto brk;
        case 40:
            goto brk;
        case 41:
            goto brk;
        case 42:
            goto brk;
        case 43:
            goto brk;
        case 44:
            goto brk;
        case 45:
            goto brk;
        case 46:
            goto r4;
        case 47:
            goto brk;
        case 48:
            goto brk;
        case 49:
            goto brk;
        case 50:
            goto r2;
        case 51:
            goto brk;
        case 52:
            goto brk;
        case 53:
            goto brk;
        case 54:
            goto brk;
        case 55:
            goto brk;
        case 56:
            goto brk;
        case 57:
            goto brk;
        case 58:
            goto r0;
        case 59:
            goto r0;
        case 60:
            goto brk;
        case 61:
            goto brk;
        case 62:
            goto brk;
        case 63:
            goto brk;
        case 64:
            goto r4;
        case 65:
            goto r4;
        case 66:
            goto r4;
        case 67:
            goto r3;
        case 68:
            goto r3;
        case 69:
            goto brk;
        case 70:
            goto brk;
        case 71:
            goto brk;
        case 72:
            goto brk;
        case 73:
            goto brk;
        case 74:
            goto brk;
        case 75:
            goto r3;
        case 76:
            goto brk;
        case 77:
            goto r2;
        default:
            goto brk;
    }
r0:
    return 0;
r2:
    return 2;
r3:
    return 3;
r4:
    return 4;
brk:
    if (param_1 >= 33) {
        if (param_1 <= 47) {
            return 2;
        }
    }
    return 1;
}
