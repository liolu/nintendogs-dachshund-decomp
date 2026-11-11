/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0c28 from projets/nintendogs-chihuahua-friends/src/donor/func_020f0c28.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
extern u32 data_02154f24;
extern u32 data_02154cb8;
extern void func_0207472c(u32 *p, u32 a, u32 b);
extern void func_02072214(u32 *p, u32 a, u32 b);
u32 func_020f0c28(u32 param_1, u32 param_2) {
    u8 *base;
    u8 *b2;
    s32 iVar2;
    s32 uVar5;
    s32 off;
    u16 uVar1;
    u16 v;
    u32 *piVar4;

    base  = (u8 *) &data_02154f24;
    iVar2 = 0;
    do {
        if (*(u32 *) (base + 0x28 + iVar2 * 4) != 0) {
            if (param_1 == ((u16 *) base)[iVar2] && param_2 == ((u16 *) (base + 8))[iVar2]) {
                return 0xffffffff;
            }
        }
        iVar2 = (s16) (iVar2 + 1);
    } while (iVar2 < 4);
    b2    = (u8 *) &data_02154f24;
    v     = *(u16 *) (b2 + 0x18);
    uVar5 = 0;
    do {
        uVar1 = (u16) (1 << uVar5);
        if ((v & uVar1) == 0) {
            *(vu16 *) (b2 + 0x18) = *(vu16 *) (b2 + 0x18) | uVar1;
            goto found;
        }
        uVar5 = (s16) (uVar5 + 1);
    } while (uVar5 < 4);
    uVar5 = 0xffffffff;
found:
    if (uVar5 != 0xffffffff) {
        piVar4 = (u32 *) (base + 0x28 + uVar5 * 4);
        func_0207472c(piVar4, param_1, param_2);
        *(u16 *) (base + uVar5 * 2)        = param_1;
        *(u16 *) (base + uVar5 * 2 + 8)    = param_2;
        *(u16 *) (base + uVar5 * 2 + 0x10) = 0x7f;
        if (*(u32 *) ((u8 *) &data_02154cb8 + 0x1c) != 0) {
            func_02072214(piVar4, 0, 0);
        }
    }
    return uVar5;
}
