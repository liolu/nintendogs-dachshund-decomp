/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f14f0 from projets/nintendogs-shiba-friends/src/donor/func_020f14f0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154f64[];
extern u8 data_02154d88[];
extern s32 func_02027028(u32 p);
u32 func_020f14f8(u32 param_1) {
    u8 *g = data_02154f64;
    if (*(u32 *) (g + 0x94) != 0) {
        if (*(u32 *) (g + 0x98) != 0) {
            if (func_02027028(param_1) != 0) {
                if (*(s16 *) (data_02154d88 + 6) == 79) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
