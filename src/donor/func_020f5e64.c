/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f5e64 from projets/nintendogs-chihuahua-friends/src/donor/func_020f5e64.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef int BOOL;
extern u8 *data_02155104[];
BOOL func_020f5e64(u32 param_1, s32 param_2) {
    BOOL r = 0;
    u8 *o;
    u8 *e;
    if (param_1 > 2) {
        param_1 = 0;
    }
    o = data_02155104[param_1];
    e = o + 148 + param_2 * 24;
    if (*(s32 *) (o + 0x8c) != -5) {
        r = *(s32 *) (e + 0x10) > 27648;
    }
    return r;
}
