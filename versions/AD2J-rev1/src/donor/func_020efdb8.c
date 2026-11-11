/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a103c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a103c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02154f24;
extern u32 data_02154f4c;
extern u32 data_02154cb8;
extern u32 data_02130735;
extern u32 data_02130734;
extern u32 data_02147108;
extern u32 func_020f0d40(u32 a, u32 b, u32 c, u32 d);
extern u32 func_020ea564(s32 *p);
extern u32 _s32_div_f(u32 a, u32 b);
extern void func_02072320(u32 *p, u32 v);
extern void func_0207226c(u32 *p, u32 v);
extern s32 func_020ea52c(s32 *p);
extern void func_02072114(u32 *p, u32 a, s32 b);
u32 func_020efdb8(u32 param_1, u32 param_2, s32 *param_3) {
    u8 *pb;
    u32 uVar3;
    u32 *piVar9;
    u32 uVar8;
    u32 uVar4;
    u32 uVar6;
    u32 uVar2;
    s32 iVar5;
    s32 iVar7;
    u32 uVar1;

    pb    = (u8 *) &data_02154f24;
    uVar3 = func_020f0d40(param_1, param_2, 0x7f, 0);
    if (uVar3 == 0xffffffff) {
        goto out;
    }
    piVar9 = (u32 *) (&data_02154f4c) + uVar3;
    if (*piVar9 == 0) {
        goto out;
    }
    iVar7 = (u32) * (u16 *) ((u8 *) &data_02154cb8 + 24) * 6;
    uVar8 = *((u8 *) &data_02130735 + iVar7);
    uVar4 = func_020ea564(param_3);
    uVar6 = *((u8 *) &data_02130734 + iVar7);
    if (uVar4 <= uVar6) {
        uVar2 = 0x7f;
        goto call;
    }
    if (uVar4 >= uVar8) {
        goto zexit;
    }
    uVar2 = _s32_div_f((uVar8 - uVar4) * 0x7f, uVar8 - uVar6);
    goto call;
zexit:
    func_02072320(piVar9, 0);
    uVar1              = ~(u16) (1 << uVar3);
    *(u16 *) (pb + 24) = *(u16 *) (pb + 24) & uVar1;
    *(u16 *) (pb + 28) = *(u16 *) (pb + 28) & uVar1;
    return 0xffffffff;
call:
    func_0207226c(piVar9, uVar2);
    iVar5 = func_020ea52c(param_3);
    func_02072114(piVar9, *(u16 *) &data_02147108, iVar5);
out:
    return uVar3;
}
