/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f5eb8 from projets/nintendogs-shiba-friends/src/donor/func_020f5eb8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_021473c4;
extern u8 data_0215512c[];
u32 func_020f5ec0(u32 param_1) {
    u32 r = 0xffffffff;
    u32 *p;
    u32 bit;
    p = (u32 *) (data_0215512c + param_1 * 136);
    if (data_021473c4 == 0) {
        return r;
    }
    bit = 1u << param_1;
    if ((data_021473c4 & bit) == 0) {
        goto xorout;
    }
    if (p[0x20] != 0) {
        r = p[0];
    } else {
        r = p[0x21];
    }
    p[0x20] = 0;
    p[0x21] = 0xffffffff;
xorout:
    data_021473c4 = data_021473c4 ^ bit;
    return r;
}
