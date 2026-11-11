/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201ca70 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0201ca70.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u32 a);
extern int func_02024ce8(u32 a, u32 b, u32 c, s32 d);
extern void func_0201d214(u32 a);
extern void func_020357c0(u32 a, int b);
extern int func_020351a0(u32 a);
extern void func_0202f8a4(u32 a);
void func_0201ca94(u32 param_1) {
    s32 uVar1;
    int iVar2;

    uVar1 = func_020280ec(param_1);
    iVar2 = func_02024ce8(param_1, 0xb, 0x24, -((s32) ((((s64) (s32) (uVar1)) * (163) + 0x800) >> 12)));
    if (iVar2 == 0) {
        uVar1 = func_020280ec(param_1);
        func_02024ce8(param_1, 0x2e, 0x50, -((s32) ((((s64) (s32) (uVar1)) * (94) + 0x800) >> 12)));
    }
    func_0201d214(param_1);
    func_020357c0(param_1, 1);
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_0202f8a4(param_1);
    }
}
