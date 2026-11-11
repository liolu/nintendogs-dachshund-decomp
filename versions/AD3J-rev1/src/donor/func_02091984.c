/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a9954 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a9954.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
extern u32 func_02003844(int *a, int b);
extern u32 func_0200348c(int a, int b);
extern void func_0206dfbc(int a, void *b, u32 c);
void *func_02091984(int *param_1, u32 param_2) {
    u32 *puVar1;
    u32 uVar2;
    vu16 local_a;
    vu16 local_b;

    puVar1                      = (u32 *) func_02003844(param_1, 0x1ac);
    *puVar1                     = param_2;
    *(u16 *) (puVar1 + 1)       = 0;
    *(u16 *) ((int) puVar1 + 6) = 0;
    puVar1[2]                   = 0;
    puVar1[3]                   = 0;
    puVar1[4]                   = 0;
    puVar1[5]                   = 0;
    puVar1[6]                   = 0;
    puVar1[7]                   = 0;
    puVar1[8]                   = 0;
    puVar1[9]                   = 0;
    puVar1[10]                  = 0;
    uVar2                       = func_0200348c((int) param_1, 0x40000);
    puVar1[0xb]                 = uVar2;
    local_a                     = 0;
    func_0206dfbc(local_a, (void *) (puVar1 + 0xc), 0x13c);
    local_b = 0;
    func_0206dfbc(local_b, (void *) (puVar1 + 0x5b), 0x40);
    return puVar1;
}
