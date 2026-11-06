/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209eb68 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209eb68.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154dd8;
extern u32 data_02154ddc;
extern u32 data_02154cb8;
extern u8 data_02130734[];
extern u8 data_02130735[];
extern void func_020747c4(u32 a, s32 b);
extern void func_02072174(u32 a, u32 b, u32 c);
extern void func_02072214(u32 a, s32 b, s32 c);
extern u32 func_020ea564(s32 a);
extern u32 _s32_div_f(u32 a, u32 b);
extern void func_0207226c(u32 a, u32 b);
extern u32 func_020ea52c(s32 a);
extern void func_02072114(u32 a, u32 b, u32 c);
void func_020ed900(s32 param_1) {
    u8 *iVar5;
    u32 *piVar1;
    u32 uVar9;
    u32 uVar8;
    u8 *base;
    u32 *piVar2;
    s32 iVar7;
    u32 uVar6;
    u32 uVar4;
    u32 t28;
    s32 i;
    u32 bit;

    piVar1 = (u32 *) &data_02154ddc;
    iVar5  = (u8 *) &data_02154dd8;
    if (*(s32 *) (iVar5 + 0x2c) == 0) {
        return;
    }
    t28   = *(u16 *) (iVar5 + 0x28);
    iVar7 = (u32) * (u16 *) ((u8 *) &data_02154cb8 + 0x18) * 6;
    uVar9 = data_02130734[iVar7];
    uVar8 = data_02130735[iVar7];
    if (t28 == 0) {
        goto L100;
    }
    func_020747c4((u32) piVar1, *(s16 *) (iVar5 + 0x26));
    base = (u8 *) &data_02154dd8;
    func_02072174((u32) piVar1, 0xffff, 127);
    i = 0;
    do {
        bit = (u16) (1 << i) & 0xffff;
        if (bit != 0) {
            *(u32 *) (base + i * 4 + 0x5c) = 0x7f000;
        }
        i = (s16) (i + 1);
    } while (i < 16);
    *(u16 *) (iVar5 + 0x22) = 127;
    if (*(s32 *) ((u8 *) &data_02154cb8 + 0x1c) == 0) {
        goto Lelse;
    }
    *(u16 *) ((u8 *) &data_02154dd8 + 0x24) = 0;
    piVar2                                  = (u32 *) &data_02154ddc;
    if (*piVar2 != 0) {
        func_02072214((u32) piVar2, 0, 0);
    }
    goto Lf8;
Lelse:
    *(u16 *) (iVar5 + 0x24) = 100;
Lf8:
    *(u16 *) (iVar5 + 0x28) = 0;
L100:
    if (*piVar1 == 0) {
        goto Lz;
    }
    if (param_1 != 0) {
        uVar6 = func_020ea564(param_1);
    } else {
        uVar6 = 0;
    }
    if (uVar6 <= uVar9) {
        uVar4 = 127;
        goto L150;
    }
    if (uVar6 >= uVar8) {
        uVar4 = 0;
        goto L150;
    }
    uVar4 = _s32_div_f((uVar8 - uVar6) * 127, uVar8 - uVar9);
L150:
    func_0207226c((u32) piVar1, uVar4);
    if (param_1 == 0) {
        return;
    }
    iVar7 = func_020ea52c(param_1);
    func_02072114((u32) piVar1, 0xffff, iVar7);
    return;
Lz:
    *(s32 *) (iVar5 + 0x2c) = 0;
}
