/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209493c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209493c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u8 *data_02154c48;
extern void func_0206dfd4(u32 a, u32 b, u32 c);
void func_020c9fc0(u32 param_1, s16 param_2, u32 param_3) {
    u8 *iVar1 = data_02154c48 + 0x155c + param_2 * 24;
    u32 v     = *(u32 *) (iVar1 + 4) * (u16) param_3 + *(u32 *) (iVar1 + 0x10);
    func_0206dfd4(v + 0x140, param_1, 64);
}
