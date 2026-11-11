/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02117e4c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02117e4c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 _s32_div_f(u32 a, u32 b);
extern void func_020bde94(u8 *p, u32 a, u32 b);
void func_020be13c(u8 *param_1) {
    u32 uVar4;
    s16 s26;
    s32 uVar6;
    u32 uVar3;
    int iVar2;
    int s24;
    s32 uVar5;

    iVar2 = *(s32 *) (param_1 + 0x14);
    if (0 != iVar2 && iVar2 != 1 && iVar2 != 4) {
        return;
    }
    *(s32 *) (0x14 + param_1) = 2;
    *(u16 *) (28 + param_1)   = 0;
    *(u16 *) (param_1 + 30)   = *(u16 *) (16 + param_1);
    if (*(s32 *) (0x14 + param_1) != 0) {
        uVar3 = *(u16 *) (param_1 + 28);
        s24   = *(s16 *) (24 + param_1);
        uVar4 = *(u16 *) (14 + param_1);
        s26   = *(s16 *) (26 + param_1);
        uVar5 = _s32_div_f(*(s16 *) (param_1 + 10) * (uVar4 - uVar3) + (u32) s24 * uVar3, uVar4);
        uVar6 = _s32_div_f(*(s16 *) (param_1 + 12) * (uVar4 - uVar3) + s26 * uVar3, uVar4);
        func_020bde94(param_1, (s16) (uVar5 - s24), (s16) (uVar6 - s26));
    }
}
