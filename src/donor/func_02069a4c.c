/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02068654 from projets/nintendogs-dachshund/src/donor/func_02068654.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef short s16;
extern s32 func_0206907c(s32 denom);
extern const s16 data_02128be0[129];
u16 func_02069a4c(s32 x) {
    if (x >= 0) {
        if (x > 0x1000) {
            x = func_0206907c(x);
            return (u16) (0x4000 - data_02128be0[x >> 5]);
        } else if (x < 0x1000) {
            return (u16) data_02128be0[x >> 5];
        } else {
            return 0x2000;
        }
    } else {
        if (x < -0x1000) {
            x = func_0206907c(-x);
            return (u16) (data_02128be0[x >> 5] - 0x4000);
        } else if (x > -0x1000) {
            x = -x;
            return (u16) -data_02128be0[x >> 5];
        } else {
            return 0xe000;
        }
    }
}
