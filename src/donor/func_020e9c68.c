/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209ae94 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209ae94.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154cb8;
extern u8 data_02154cc0[];
extern u32 func_020735e0(u8 *a);
u32 func_020e9c68(s32 param_1) {
    s32 idx                   = param_1;
    s32 base                  = (s32) data_02154cc0;
    u32 r                     = func_020735e0(data_02154cb8);
    *(s16 *) (base + idx * 2) = (s16) r;
    *(s16 *) (base + 10)      = (s16) idx;
    return 1;
}
