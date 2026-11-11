/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02117d8c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02117d8c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
extern u64 _s32_div_f(u32 a, u32 b);
extern void func_020bde94(u8 *p, s32 a, s32 b);
void func_020be07c(u8 *param_1) {
    s32 uVar5lo;
    s32 uVar6lo;
    u32 uVar3;
    u32 uVar4;
    s16 sVar1;
    s16 iVar2;
    u64 uVar5;
    u64 uVar6;

    if (*(s32 *) (param_1 + 0x14) != 2 && *(s32 *) (param_1 + 0x14) != 3) {
        return;
    }
    *(s32 *) (param_1 + 0x14) = 4;
    *(u16 *) (param_1 + 0x1c) = *(u16 *) (param_1 + 0xe);
    *(u16 *) (param_1 + 0x1e) = *(u16 *) (param_1 + 0x10);
    if (*(s32 *) (param_1 + 0x14) != 0) {
        uVar3   = *(u16 *) (param_1 + 0x1c);
        iVar2   = *(s16 *) (param_1 + 0x18);
        uVar4   = *(u16 *) (param_1 + 0xe);
        sVar1   = *(s16 *) (param_1 + 0x1a);
        uVar5   = _s32_div_f((s32) * (s16 *) (param_1 + 10) * (uVar4 - uVar3) + (s32) iVar2 * uVar3, uVar4);
        uVar6   = _s32_div_f((s32) * (s16 *) (param_1 + 12) * (uVar4 - uVar3) + sVar1 * uVar3, uVar4);
        uVar5lo = (s32) (u32) uVar5;
        uVar6lo = (s32) (u32) uVar6;
        func_020bde94(param_1, (s16) (uVar5lo - iVar2), (s16) (uVar6lo - sVar1));
    }
}
