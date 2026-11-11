/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208f43c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208f43c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_02154c34;
extern u8 data_02143130[];
extern s32 func_0207d680(s32 *a, s32 b);
extern u8 *func_02003844(s32 *p, s32 n);
extern void func_02006518(u8 *p);
extern s32 func_02078be4(s32 a);
extern void func_0207d7e8(s32 *a, s32 b);
u8 *func_020c4da0(s32 *param_1, s32 param_2) {
    u8 *puVar1;
    u8 *puVar3;
    s32 *piVar4;
    s32 iVar2;

    piVar4 = *(s32 **) data_02154c34;
    puVar3 = (u8 *) piVar4[0];
    puVar1 = ((void *) 0);
    while (puVar3 != ((void *) 0)) {
        if (*(s32 *) (puVar3 + 8) == param_2) {
            puVar1 = puVar3;
            break;
        }
        puVar3 = (u8 *) func_0207d680(piVar4, (s32) puVar3);
    }
    if (puVar1 == ((void *) 0)) {
        puVar1                 = func_02003844(param_1, 0x18);
        *(u32 *) puVar1        = (u32) data_02143130;
        *(u16 *) (puVar1 + 4)  = 0;
        *(u16 *) (puVar1 + 6)  = 0;
        *(u32 *) (puVar1 + 8)  = 0;
        *(u32 *) (puVar1 + 12) = 0;
        func_02006518(puVar1 + 16);
        *(s32 *) (puVar1 + 8)  = param_2;
        *(u32 *) (puVar1 + 12) = 0;
        if (param_2 != 0) {
            iVar2                  = func_02078be4(param_2);
            *(s32 *) (puVar1 + 12) = iVar2 + *(s32 *) (iVar2 + *(u16 *) (iVar2 + 14) + 12);
        }
        func_0207d7e8(piVar4, (s32) puVar1);
    }
    return puVar1;
}
