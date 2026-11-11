/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208c564 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208c564.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *data_021538e0;
extern void func_0207e76c(u32 p, u32 a, u32 b, u32 c);
void func_020c21d8(u32 param_1, u32 param_2, u32 param_3, u32 param_4) {
    u32 p;
    p = *(u32 *) (data_021538e0 + 0xc);
    if (p != 0) {
        func_0207e76c(p, param_2, param_3, param_4);
    }
    *(u16 *) (data_021538e0 + 8)   = 0xffff;
    *(u32 *) (data_021538e0 + 0xc) = 0;
}
