/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* FX_AtanIdx from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_atan.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef int s32;
typedef short s16;
extern s32 func_02067c84(s32 denom);
extern const s16 data_02128f68[129];
u16 func_02068654(s32 x) {
    if (x >= 0) {
        if (x > 0x1000) {
            x = func_02067c84(x);
            return (u16) (0x4000 - data_02128f68[x >> 5]);
        } else if (x < 0x1000) {
            return (u16) data_02128f68[x >> 5];
        } else {
            return 0x2000;
        }
    } else {
        if (x < -0x1000) {
            x = func_02067c84(-x);
            return (u16) (data_02128f68[x >> 5] - 0x4000);
        } else if (x > -0x1000) {
            x = -x;
            return (u16) -data_02128f68[x >> 5];
        } else {
            return 0xe000;
        }
    }
}
