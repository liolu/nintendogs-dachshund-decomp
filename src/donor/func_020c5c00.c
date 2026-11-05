/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c5bfc from projets/nintendogs-shiba-friends/src/donor/func_020c5bfc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
u32 func_020c5c00(u32 param_1) {
    if (param_1 >= 97 && param_1 <= 122) {
        return (u16) (param_1 - 32);
    }
    if (param_1 < 224) {
        return param_1;
    }
    if (param_1 > 253) {
        return param_1;
    }
    if (param_1 != 247) {
        param_1 = (u16) (param_1 - 32);
    }
    return param_1;
}
