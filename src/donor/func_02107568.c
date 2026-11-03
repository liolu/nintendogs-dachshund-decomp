/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bd5e8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bd5e8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s16 data_021333e8[][4];
extern s32 func_020280f8(u32 p);
s32 func_02107568(u32 p0, u8 *p1) {
    s32 acc = 0;
    s32 v   = func_020280f8(p0);
    s32 i   = 0;
    u32 one = 1;
    s32 fld = *(s16 *) (p1 + 0x94);
    do {
        if (v > data_021333e8[fld][i]) {
            acc = acc + (one << i);
        }
        i = i + 1;
    } while (i < 4);
    return acc;
}
