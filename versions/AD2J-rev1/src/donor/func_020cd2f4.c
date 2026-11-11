/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02097ab0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02097ab0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_021440e8;
extern u32 data_021440e0;
extern u32 data_021440f0;
extern u8 data_02144140[];
extern u8 data_02154c68[];
extern u32 func_02003844(int *a, int b);
extern void func_020c234c(int *a, u32 *b, u32 *c);
extern void func_0205e950(u8 *a, int b, u8 *c, u32 d, u32 e);
extern u32 func_0207e718(u8 *a);
extern void func_02089cc0(int *a, int *b);
void func_020cd2f4(int *param_1, u32 param_2, u32 param_3) {
    int *piVar1;
    int *piVar2;
    u8 buf[64];

    piVar1 = (int *) func_02003844(param_1, 0x20);
    func_020c234c(param_1, (u32 *) data_021440e8, (u32 *) data_021440e0);
    func_0205e950(buf, 0x40, data_02144140, data_021440e8, data_021440f0);
    piVar2 = (int *) func_0207e718(buf);
    func_02089cc0(piVar1, piVar2);
    *(int **) data_02154c68 = piVar1;
}
