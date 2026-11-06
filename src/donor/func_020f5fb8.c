/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f5fc0 from projets/nintendogs-chihuahua-friends/src/donor/func_020f5fc0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u32 vu32;
extern u32 data_02155104[];
extern u32 data_021550f8[];
void func_020f5fb8(s32 param_1, u32 param_2) {
    u32 cnt;
    u32 bit;
    u32 *pp;
    u32 *base;
    u32 zero;
    u32 one;

    cnt  = 0;
    bit  = 1;
    base = (u32 *) data_02155104[param_1];
    pp   = (u32 *) ((u8 *) base + 0x94);
    if ((param_2 ^ data_021550f8[param_1]) == 0) {
        return;
    }
    zero = cnt;
    one  = bit;
    do {
        if (bit & (param_2 ^ ((vu32 *) data_021550f8)[param_1])) {
            if (param_2 & bit) {
                if (pp[1] == 1) {
                    pp[0] = one;
                }
            } else {
                pp[0] = zero;
            }
        }
        cnt = cnt + 1;
        bit = bit << 1;
        pp  = pp + 6;
    } while (cnt < 20);
    data_021550f8[param_1] = param_2;
}
