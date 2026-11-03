/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a1858 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a1858.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern int data_02154ef0;
extern u16 data_02154ee8;
extern void func_0207472c(int *p, int a, u32 b);
extern void func_0207226c(int *p, int v);
u32 func_020f05cc(u32 param_1) {
    if (data_02154ef0 == 0) {
        func_0207472c(&data_02154ef0, 0x13, param_1);
        func_0207226c(&data_02154ef0, (int) data_02154ee8 * 127 / 100);
        return 1;
    }
    return 0;
}
