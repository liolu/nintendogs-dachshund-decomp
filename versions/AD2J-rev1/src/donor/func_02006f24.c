/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006f24 from projets/nintendogs-shiba-friends/src/donor/func_02006f24.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s16 v;
    s16 pad;
} Entry;
extern Entry data_02124ae0[];
s32 func_02006f24(s32 param_1) {
    if (param_1 <= 0) {
        return 0;
    }
    if (param_1 < 0x1000) {
        s32 idx = (s32) ((u32) (param_1 << 18) >> 16) >> 4;
        return data_02124ae0[idx].v;
    }
    return 0x1000;
}
