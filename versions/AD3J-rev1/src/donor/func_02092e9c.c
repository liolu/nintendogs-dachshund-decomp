/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aafe0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020aafe0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern void func_0200b598(u32 a, u8 *b, u8 *c, u32 d, u32 *e);
void func_02092e9c(u8 *param_1, u32 param_2, u32 param_3) {
    u32 local[3];
    local[0] = 0;
    local[1] = 0x1000;
    local[2] = 0;
    func_0200b598(param_2, *(u8 **) (param_1 + 0x1c) + 48, param_1 + 156, param_3, local);
}
