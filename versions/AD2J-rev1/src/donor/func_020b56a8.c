/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210f2ec from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0210f2ec.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0213efb0;
extern u32 data_0213efbc;
extern u32 data_0213efcc;
extern void func_0205e950(u8 *dst, u32 n, u32 src, u32 v);
extern u32 func_020b5024(u32 a, u8 *b);
extern u32 *func_02006b04(u32 a);
extern void func_020b5508(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
u32 func_020b56a8(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7) {
    u8 acStack_e0[64];
    u8 acStack_a0[64];
    u8 acStack_60[68];
    u32 uVar5;
    u32 iVar1;
    u32 iVar2;
    u32 p2c = param_2;
    u32 p3c = param_3;
    u32 p4c = param_4;
    u32 iVar3;
    u32 *piVar4;

    uVar5 = 0;
    func_0205e950(acStack_e0, 64, (u32) &data_0213efb0, p4c);
    func_0205e950(acStack_a0, 64, (u32) &data_0213efbc, p4c);
    func_0205e950(acStack_60, 64, (u32) &data_0213efcc, p4c);
    iVar1 = func_020b5024(param_1, acStack_e0);
    iVar2 = func_020b5024(param_1, acStack_a0);
    iVar3 = func_020b5024(param_1, acStack_60);
    if (iVar1 != 0 && iVar2 != 0 && iVar3 != 0) {
        piVar4 = func_02006b04(iVar3);
        func_020b5508(p2c, p3c, param_5, iVar1, iVar2, (u32) piVar4, (u16) param_6, (u16) param_7);
        uVar5 = 1;
    }
    return uVar5;
}
