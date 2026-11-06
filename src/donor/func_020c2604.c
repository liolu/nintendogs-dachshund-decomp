/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c2608 from projets/nintendogs-chihuahua-friends/src/donor/func_020c2608.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 func_02078ba4(u32 *p);
extern void func_020756d4(u32 a);
extern void func_020755d8(u32 a);
extern void func_020756c0(u32 a, u32 b, u32 c);
extern void func_020755d0(u32 a, u32 b);
extern void func_020755e4(u32 a, u32 b);
extern void func_02075564(u32 a, u32 b);
extern u32 func_02078be4(u32 a);
extern void func_020751c8(u32 a, u32 b);
void func_020c2604(u8 *param_1) {
    u32 *piVar3;
    u32 iVar1;
    int iVar2;
    if ((*(u16 *) (2 + param_1) & 1) == 0) {
        return;
    }
    *(u16 *) (param_1 + 2) = *(u16 *) (2 + (u32) param_1) & ~1;
    piVar3                 = *(u32 **) (0xa0 + param_1);
    iVar1                  = func_02078ba4(piVar3);
    if (iVar1 != 0) {
        func_020756d4((u32) iVar1);
        func_020755d8(iVar1);
        func_020756c0(iVar1, 0, *(u32 *) (0xb0 + param_1));
        func_020755d0((s32) iVar1, *(u32 *) (param_1 + 0xb8));
        func_020755e4((int) iVar1, 1);
        func_02075564(iVar1, 1);
    }
    iVar2 = func_02078be4((u32) piVar3);
    if (iVar1 != 0) {
        func_020751c8(iVar2, iVar1);
        return;
    }
}
