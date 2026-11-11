/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c77e0 from projets/nintendogs-shiba-friends/src/donor/func_020c77e0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[4];
} T16;
extern s32 func_020c7cd8(u32 *a, u32 *b);
extern s64 func_020c78dc(u8 *p, u32 *p2, s32 *p3);
u32 func_020c77e4(u8 *param_1, u32 *param_2, s32 *param_3) {
    u32 loc[4];
    u32 cpy[4];
    u32 X;
    u32 Y;
    u32 m;
    u32 m2;
    u32 a;
    u32 b;
    u32 c;
    u32 rv;
    u32 hour;
    u32 min;
    u32 sec;
    s64 res;
    s64 v;
    s32 t;
    a            = param_1[0x13];
    loc[0]       = a;
    b            = param_1[0x12];
    loc[1]       = b;
    c            = param_1[0x11];
    loc[2]       = c;
    m            = a * 384;
    X            = (c - 1) + (m + ((b - 1) << 5));
    hour         = param_1[0x10];
    min          = param_1[0xf];
    sec          = param_1[0xe];
    *(T16 *) cpy = *(T16 *) loc;
    m2           = cpy[0] * 384;
    Y            = (cpy[2] - 1) + (m2 + ((cpy[1] - 1) << 5));
    rv           = 0;
    if ((s32) Y < (s32) X) {
        v = 0;
    } else {
        t = func_020c7cd8(loc, cpy);
        v = (s32) ((u32) (t + 1) * 86400 - (sec + (min * 60 + hour * 3600)));
    }
    res = func_020c78dc(param_1, param_2, param_3);
    if (v < res) {
        rv = 1;
    }
    return rv;
}
