/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fbe20 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020fbe20.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_0212ff4c;
extern void func_02107c9c(int a, int b);
extern void func_020e943c(void);
extern void func_020e93d8(void);
extern void func_020e9534(void);
extern u32 func_02003844(int *a, int b);
void func_020e9658(int param_1, int *param_2) {
    u32 *puVar1;
    u32 uVar2;

    func_02107c9c(param_1, 0x72);
    *(u32 *) (param_1 + 500)   = (u32) func_020e943c;
    *(u32 *) (param_1 + 0x1f8) = (u32) func_020e93d8;
    *(u32 *) (param_1 + 0x1f0) = (u32) func_020e9534;
    uVar2                      = func_02003844(param_2, 4);
    *(u32 *) (param_1 + 0x214) = uVar2;
    if (*(u32 **) (param_1 + 0x214) != ((void *) 0)) {
        **(u32 **) (param_1 + 0x214) = 0;
    }
    puVar1                     = (u32 *) &data_0212ff4c;
    *(u32 *) (param_1 + 0xac)  = 1200;
    uVar2                      = data_0212ff4c;
    *(u32 *) (param_1 + 0xf8)  = uVar2;
    *(u32 *) (param_1 + 0x120) = uVar2;
    *(u32 *) (param_1 + 0x128) = uVar2;
    *(u32 *) (param_1 + 300)   = 1;
}
