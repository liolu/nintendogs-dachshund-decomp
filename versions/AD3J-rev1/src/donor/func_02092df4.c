/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aaf38 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020aaf38.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02153720;
typedef struct {
    u32 a;
    u32 b;
    u32 c;
} T3;
extern s32 func_0200b7f4(s32 a, u32 *b, T3 *c);
u32 func_02092df4(u8 *param_1, s32 param_2, s32 param_3) {
    u8 *iVar1;
    T3 loc;

    iVar1 = (u8 *) data_02153720;
    if ((*(u16 *) (iVar1 + 0x84) & 1) != 0) {
        loc   = *(T3 *) (iVar1 + 0x9c);
        iVar1 = (u8 *) func_0200b7f4(param_2, (u32 *) (*(u32 *) (param_1 + 0x1c) + 0x30), &loc);
        if ((s32) iVar1 < param_3) {
            return 1;
        }
    }
    return 0;
}
