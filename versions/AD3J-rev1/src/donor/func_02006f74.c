/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006fe8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006fe8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
extern u8 *data_0214b150;
void func_02006f74(u8 *param_1, s32 param_2) {
    s32 i = 0;
    u8 *g;
    if (param_2 <= 0) {
        return;
    }
    g = data_0214b150;
    do {
        u32 q                               = (u32) param_1 + ((u32) i << 3);
        u16 v0                              = *(vu16 *) (g + 60);
        u16 v1                              = *(vu16 *) (g + 62);
        *(u16 *) (param_1 + ((u32) i << 3)) = v0;
        *(u16 *) (q + 2)                    = v1;
        v0                                  = *(vu16 *) (g + 64);
        v1                                  = *(vu16 *) (g + 66);
        i                                   = i + 1;
        *(u16 *) (q + 4)                    = v0;
        *(u16 *) (q + 6)                    = v1;
    } while (i < param_2);
}
