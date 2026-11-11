/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a7fbc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a7fbc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u16 *data_02153708;
extern void func_02090508(u16 *p, u32 v);
void func_0208ff00(u16 param_1, u16 param_2, u16 param_3, u16 param_4) {
    s16 sVar1;
    s32 iVar2;
    u16 *puVar3;
    u8 *q;

    puVar3 = data_02153708;
    func_02090508(puVar3, 0x8003);
    puVar3[2]                     = param_4;
    puVar3[7]                     = param_1;
    puVar3[3]                     = param_2;
    puVar3[4]                     = param_3;
    sVar1                         = (s16) puVar3[7];
    iVar2                         = (s32) sVar1;
    q                             = (u8 *) puVar3 + 32;
    *(u16 *) (q + iVar2 * 20)     = *(u16 *) (q + iVar2 * 20) | 1;
    *(u16 *) (q + iVar2 * 20 + 2) = sVar1;
}
