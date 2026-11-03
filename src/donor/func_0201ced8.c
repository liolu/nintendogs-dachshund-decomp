/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201cc10 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0201cc10.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 func_020280ec(u8 *p);
extern void func_02024ce8(u8 *p, s32 a, s32 b, u32 v);
extern void func_0201d214(u8 *p);
extern void func_020357c0(u8 *p, s32 x);
extern s32 func_020351a0(u8 *p);
extern void func_0202f8a4(u8 *p);
void func_0201ced8(u8 *param_1) {
    u32 uVar1;
    s64 S;
    s64 U;
    s32 iVar2;

    uVar1 = func_020280ec(param_1);
    S     = (s64) (s32) uVar1 * (s64) 0x102;
    U     = S + 0x800;
    func_02024ce8(param_1, 30, 49, (u32) ((S + 0x800) >> 12));
    func_0201d214(param_1);
    func_020357c0(param_1, 1);
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_0202f8a4(param_1);
        return;
    }
}
