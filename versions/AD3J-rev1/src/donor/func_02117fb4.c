/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cead0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020cead0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern void func_02117058(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_02117fb4(u8 *param_1, u8 *param_2) {
    func_02117058((u32) (param_2 + 0x30), (u32) (param_2 + 0x3c), (u32) (param_1 + 4), (u32) param_1, (u32) (param_1 + 2));
}
