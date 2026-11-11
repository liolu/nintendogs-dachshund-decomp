/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020941bc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020941bc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154c48;
s32 *func_020c98e0(u8 *param_1) {
    s32 *res;
    s16 i;
    u8 *pp;
    s32 ok;
    u8 *lr;
    res = 0;
    i   = 0;
    lr  = *(u8 **) (data_02154c48 + 0x1434) + 4;
    pp  = param_1 + 1600;
    do {
        ok = 1;
        if (*(s32 *) lr == 0) {
            if (*(s32 *) (lr + 4) == 0) {
                ok = 0;
            }
        }
        if (ok != 0 && *(s32 *) lr == *(s32 *) pp) {
            if (*(s32 *) (lr + 4) == *(s32 *) (pp + 4)) {
                res = (s32 *) lr;
                break;
            }
        }
        i  = (s16) (i + 1);
        lr = lr + 164;
    } while (i < 50);
    return res;
}
