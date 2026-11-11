/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02094aa4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02094aa4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154c48;
extern void func_0206dfd4(u32 a, u32 b, u32 c);
void func_020ca128(u32 param_1, s16 param_2, u32 param_3) {
    u8 *row;
    u16 m = (u16) param_3;
    row   = (u8 *) data_02154c48 + 0x155c + param_2 * 24;
    func_0206dfd4((u32) (*(s32 *) (row + 4) * m + *(s32 *) (row + 0x10) + 4), param_1, 0x13c);
}
