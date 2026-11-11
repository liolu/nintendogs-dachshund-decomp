/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020073f4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020073f4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
extern u8 *func_02003844(s32 *p, s32 n);
extern void func_0206dfbc(u16 a, u8 *b, s32 c);
extern void func_02089ca0(u32 *a, u8 *b, u32 c, u32 d, s16 e, s32 f);
u32 *func_02007380(s32 *param_1, u16 param_2, u16 param_3, s16 param_4) {
    u32 uVar1;
    u32 uVar2;
    s32 iVar5;
    s32 prod;
    u8 *iVar3;
    u32 *puVar4;
    vu16 zero;

    uVar1 = (u16) (param_2 << 3);
    uVar2 = (u16) (param_3 << 3);
    iVar5 = 0;
    if (param_4 == 0) {
        goto A;
    }
    if (param_4 != 1) {
        goto C;
    }
    prod  = (s32) (uVar1 * uVar2);
    iVar5 = (s32) ((u32) (prod >> 1) << 1);
    goto C;
A:
    prod  = (s32) (uVar1 * uVar2);
    iVar5 = ((prod >> 2)) << 1;
C:
    iVar3 = func_02003844(param_1, iVar5);
    zero  = 0;
    func_0206dfbc(zero, iVar3, iVar5);
    puVar4 = (u32 *) func_02003844(param_1, 0x14);
    func_02089ca0(puVar4, iVar3, uVar1, uVar2, param_4, 0);
    puVar4[4] = iVar5;
    return puVar4;
}
