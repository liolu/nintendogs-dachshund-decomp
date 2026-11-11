/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020963f4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020963f4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern void *data_02154c48;
extern void *func_02003844(int *p, int n);
extern void func_020cbb00(void *p);
void func_020cbac0(int *param_1) {
    u32 *p;

    p                         = (u32 *) func_02003844(param_1, 0x15d4);
    *p                        = 0;
    *(u16 *) (p + 1)          = 0;
    *(u16 *) ((char *) p + 6) = 0;
    *(u16 *) (p + 2)          = 0;
    func_020cbb00(p);
    data_02154c48 = p;
}
