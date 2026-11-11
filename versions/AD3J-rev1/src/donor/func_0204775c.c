/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02047e80 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02047e80.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 func_020280ec(u8 *p);
extern s32 func_02024de8(u8 *p, s32 a, s32 b);
extern void func_02024ce8(u8 *p, s32 a, s32 b, s32 c);
extern void func_020481c4(u8 *p, s32 a);
void func_0204775c(u8 *param_1) {
    u32 uVar1;
    s32 iVar2;

    uVar1 = func_020280ec(param_1);
    iVar2 = func_02024de8(param_1, 0x16, -(s32) (u32) (((s64) (s32) uVar1 * 93 + 0x800) >> 12));
    if (iVar2 == 0) {
        uVar1 = func_020280ec(param_1);
        func_02024ce8(param_1, 0x17, 0x2c, -(s32) (u32) (((s64) (s32) uVar1 * 186 + 0x800) >> 12));
    }
    func_020481c4(param_1, 8);
}
