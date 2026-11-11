/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02002e70 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02002e70.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214a758;
extern u32 func_02002f94(void);
extern u32 func_02002f84(void);
extern u32 func_020035a8(u32 a);
extern void func_0208bed8(u32 a, u32 b);
extern void func_0208be84(u32 a, u32 b);
extern void func_020036b4(u32 a);
u32 func_02002dfc(u8 *param_1, u32 param_2) {
    u32 piVar5;
    u32 piVar4;
    u32 piVar3;
    u32 iVar1;
    u32 uVar2;
    s32 v4;

    *(u32 *) (param_1 + 0x18) = *(u32 *) &data_0214a758;
    iVar1                     = *(u32 *) (param_1 + 0x18);
    if (iVar1 == 0) {
        piVar5 = func_02002f94();
        piVar4 = func_02002f84();
        piVar3 = 0;
    } else {
        piVar5 = *(u32 *) (iVar1 + 0xc);
        piVar4 = *(u32 *) (iVar1 + 0x10);
        piVar3 = *(u32 *) (iVar1 + 0x14);
    }
    uVar2                    = func_020035a8(piVar5);
    *(u32 *) (param_1 + 0xc) = uVar2;
    if (piVar4 == 0) {
        *(u32 *) (param_1 + 0x10) = 0;
    } else {
        uVar2                     = func_020035a8(piVar4);
        *(u32 *) (param_1 + 0x10) = uVar2;
    }
    if (piVar3 == 0) {
        *(u32 *) (param_1 + 0x14) = 0;
    } else {
        uVar2                     = func_020035a8(piVar3);
        *(u32 *) (param_1 + 0x14) = uVar2;
    }
    *(u32 *) &data_0214a758 = (u32) param_1;
    v4                      = *(s32 *) (param_1 + 4);
    if (v4 != -1) {
        func_0208bed8(0, v4);
    }
    uVar2 = ((u32(*)(u32)) * (u32 *) (param_1 + 8))(param_2);
    v4    = *(s32 *) (param_1 + 4);
    if (v4 != -1) {
        func_0208be84(0, v4);
    }
    *(u32 *) &data_0214a758 = *(u32 *) (param_1 + 0x18);
    func_020036b4(*(u32 *) (param_1 + 0xc));
    *(u32 *) (param_1 + 0xc) = 0;
    if (*(u32 *) (param_1 + 0x10) != 0) {
        func_020036b4(*(u32 *) (param_1 + 0x10));
        *(u32 *) (param_1 + 0x10) = 0;
    }
    if (*(u32 *) (param_1 + 0x14) != 0) {
        func_020036b4(*(u32 *) (param_1 + 0x14));
        *(u32 *) (param_1 + 0x14) = 0;
    }
    return uVar2;
}
