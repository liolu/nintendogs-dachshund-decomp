/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02104034 from projets/nintendogs-chihuahua-friends/src/donor/func_02104034.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_02153740;
u32 func_02104034(u32 param_1, s32 param_2) {
    u8 *r2 = data_02153740 + 196;
    s32 r0;
    u32 res;
    res = 0;
    if (param_1 == 0x00030002) {
        if (param_2 == 0) {
            r0  = *(s32 *) (r2 + 0xc);
            res = (u32) (r2 + 236) + (r0 << 4);
        } else {
            r0  = *(s32 *) (r2 + 0x10);
            res = (u32) (r2 + 284) + (r0 << 4);
        }
    }
    return res;
}
