/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201cc94 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0201cc94.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u32 p);
extern void func_02024ce8(u32 p, u32 a, u32 b, u32 c);
extern void func_0201d214(u32 p);
extern void func_020357c0(u32 p, u32 a);
extern s32 func_020351a0(u32 p);
extern void func_0202f8a4(u32 p);
void func_0201ccb8(u32 param_1) {
    s32 uVar1;
    s32 iVar2;

    uVar1 = func_020280ec(param_1);
    func_02024ce8(param_1, 30, 49, -((u32) ((((s64) (uVar1) * (258)) + 0x800) >> 12)));
    func_0201d214(param_1);
    func_020357c0(param_1, 1);
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_0202f8a4(param_1);
    }
}
