/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov007_0215da48 from https://github.com/chasmlol/nintendogs-decomp src/overlays/ov007/func_ov007_0215da48.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021560e8;
extern s16 func_0212012c(void);
u32 func_0211e888(void) {
    u8 *p = (u8 *) data_021560e8;
    if (*(s32 *) (p + 0x28) == 2) {
        s16 s = func_0212012c();
        if (s != 0) {
            return 1;
        }
    } else if (*(s32 *) (p + 0x28) == 3) {
        return 1;
    }
    return 0;
}
