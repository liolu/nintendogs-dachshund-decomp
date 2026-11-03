/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02046f8c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02046f8c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 *data_0214b484;
extern s32 func_02046e24(u8 *p, u32 v);
extern void func_0204f56c(u8 *p);
void func_020468d8(u8 *param_1) {
    u32 v;

    if (func_02046e24(param_1, 1) != 0) {
        return;
    }
    v              = *data_0214b484 * 0x10dcd + 1;
    *data_0214b484 = v;
    if ((u16) ((((u32) (u16) v) * 50) >> 16) == 0) {
        func_0204f56c(param_1);
    }
}
