/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211c7e0 from projets/nintendogs-chihuahua-friends/src/donor/func_0211c7e0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[3];
} T12;
void func_0211c7e0(s32 *param_1) {
    s32 i = 0;
    u32 off;
    if (param_1[0] <= 0) {
        return;
    }
    off = 0;
    do {
        u8 *dst      = (u8 *) param_1[4] + off;
        u8 *src      = (u8 *) param_1[1] + off;
        *(T12 *) dst = *(T12 *) src;
        i            = i + 1;
        off          = off + 12;
    } while (i < param_1[0]);
}
