/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d740c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d740c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u8 pad0[0x40];
    u32 arr[16];
    u8 pad1[0x8a];
    u16 h10a;
} Obj;
extern u32 data_02157b60;
extern u32 func_020713c8(u32 a);
extern s32 func_02071304(u32 a, u32 b, s32 *c, s32 *d);
u8 func_021208ac(u8 param_1) {
    s32 s0;
    s32 s1;
    u32 u;
    s32 i;
    s32 j;

    u = func_020713c8((*(Obj **) &data_02157b60)->h10a);
    if (func_02071304(0x438, u, &s0, &s1) != 0) {
        param_1 = param_1 + 1;
    }
    param_1 = param_1 + 1;
    i       = 0;
    do {
        if ((*(Obj **) &data_02157b60)->arr[i] != 0) {
            j = 0;
            do {
                func_020713c8((*(Obj **) &data_02157b60)->h10a);
                j = j + 1;
            } while (j < 10);
            param_1 = param_1 + 1;
        }
        i = i + 1;
    } while (i < 16);
    return param_1;
}
