/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d863c from projets/nintendogs-chihuahua-friends/src/donor/func_020d863c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
extern void func_020d872c(u32 p);
extern BOOL func_020afd88(void);
extern void func_0210fdc0(u32 p);
extern u32 func_020894a0(s32 a);
extern s32 func_020894a8(s32 a);
extern void func_0207d0e0(s32 a, s32 b, s32 c, s32 d);
void func_020d8634(u32 param_1) {
    s32 iVar4;
    u32 uVar2;
    s32 iVar3;
    BOOL bVar1;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            bVar1 = func_020afd88();
            if (!bVar1) {
                return;
            }
            iVar4 = *(s32 *) (param_1 + 0x214);
            func_0210fdc0(param_1);
            uVar2 = func_020894a0(*(s32 *) (iVar4 + 0x14));
            iVar3 = func_020894a8(*(s32 *) (iVar4 + 0x14));
            func_0207d0e0(0x23, 0, iVar3, uVar2);
            func_0207d0e0(0x19, 0, *(s32 *) (iVar4 + 0x34) + 0xc, *(s32 *) (*(s32 *) (iVar4 + 0x34) + 8));
            func_0207d0e0(0x15, 0, *(s32 *) (*(s32 *) (iVar4 + 0x2c) + 0x14), *(s32 *) (*(s32 *) (iVar4 + 0x2c) + 0x10));
            func_0207d0e0(0x1e, 0, *(s32 *) (*(s32 *) (iVar4 + 0x28) + 0xc), 0x1c0);
            func_0207d0e0(0x1f, 0, *(s32 *) (*(s32 *) (iVar4 + 0x30) + 0xc), 0x1c0);
            *(s32 *) (iVar4 + 0x2b8) = 1;
            return;
        case 3:
            func_020d872c(param_1);
    }
    return;
}
