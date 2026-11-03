/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fa04 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208fa04.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 func_02078ba4(u32 p);
extern u32 func_020c3eb8(u32 a, u32 b, u32 c, u32 d);
void func_020c5368(u8 *param_1, u32 *param_2, u32 param_3) {
    u32 iVar1;
    u32 uVar2;
    u8 *p;
    *(u16 *) (param_1 + 0x70) = (u16) param_3;
    p                         = *(u8 **) (param_1 + 0x1c);
    iVar1                     = func_02078ba4(*(u32 *) (*(u8 **) p + 8));
    uVar2                     = func_020c3eb8((u32) param_2, param_3, (u32) (*(u8 **) (param_1 + 0x1c) + 4), iVar1);
    *(u32 *) (param_1 + 0x7c) = uVar2;
}
