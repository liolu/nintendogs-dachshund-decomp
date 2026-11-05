/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200c3ec from projets/nintendogs-shiba-friends/src/donor/func_0200c3ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0214b47c;
s32 func_0200c3ec(s32 param_1, s32 param_2) {
    s32 idx;
    u8 *m;
    s32 tbl;
    if (param_2 < 0) {
        goto ret0;
    }
    m   = *(u8 **) &data_0214b47c;
    idx = (s32) ((u32) param_1 << 2);
    tbl = *(s32 *) (m + 0x20);
    if (param_2 < *(s16 *) ((u8 *) tbl + param_1 * 4 + 2)) {
        goto body;
    }
ret0:
    return 0;
body:
    return *(s32 *) (m + 0x14) + (((param_2 + *(s16 *) ((u8 *) tbl + idx)) * 0x10000) >> 10);
}
