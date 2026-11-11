/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211ad8c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211ad8c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153894;
extern void func_020b8ce8(u32 a, u32 b, s16 c, u32 d);
void func_020c0fdc(s32 *param_1) {
    s32 iVar1;
    param_1[1] = param_1[1] + 1;
    if (param_1[1] > 10) {
        *(u32 *) (data_02153894 + 0x198) = 1;
        return;
    }
    iVar1 = (10 - param_1[1]) * -256;
    func_020b8ce8(0, 1, (s16) (iVar1 / 10), 0);
}
