/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e608c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e608c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_021070d8(u32 a);
extern void func_020d3c74(u8 *a, void *b);
extern void func_020c5198(u8 *a, u32 b);
extern void func_02107c24(u8 *a, u8 *b);
extern void func_0207893c(void *a, u32 b, u32 c);
extern void func_020c51a4(u8 *a, u32 b);
extern void func_02106b38(u8 *a);
void func_020d3da8(u8 *param_1) {
    s32 iVar5;
    s32 iVar1;
    s32 iVar3;
    s32 iVar4;
    u8 *piVar;
    s32 iVar2;
    u8 *pEnd;
    iVar1 = func_021070d8(69);
    iVar5 = 0;
    if (iVar1 > 0) {
        pEnd  = param_1 + iVar1 * 12;
        iVar2 = (s32) param_1;
        do {
            iVar4                   = *(s32 *) (iVar2 + 0x1b0);
            *(u16 *) (iVar4 + 0x9c) = 0;
            func_020d3c74((u8 *) iVar4, *(void **) (param_1 + 0x28));
            if (iVar5 == 0) {
                func_020c5198((u8 *) iVar4, 10);
                *(u32 *) (iVar4 + 0x18c) = 0;
                *(u16 *) (iVar4 + 0xa6)  = 0;
            } else {
                piVar = *(u8 **) (pEnd + iVar5 * 12 + 0x1a4);
                func_02107c24((u8 *) iVar4, piVar);
                func_0207893c(*(void **) (*(u8 **) (piVar + 0x1c) + 8), 0, 8);
                func_020c51a4(piVar, 8);
            }
            func_02106b38((u8 *) iVar4);
            iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
            iVar2 = iVar2 + 12;
        } while (iVar5 < iVar1);
    }
}
