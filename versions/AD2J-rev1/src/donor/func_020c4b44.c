/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c4b40 from projets/nintendogs-shiba-friends/src/donor/func_020c4b40.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *func_02003844(void *heap, u32 size);
extern void func_020759ac(u8 *p, u32 v);
u8 *func_020c4b44(void *param_1, u8 *param_2) {
    s32 cnt;
    s32 i;
    u32 iVar2;
    u32 uVar4;
    u8 *puVar5;
    u8 *puVar3;
    u8 *piVar1;

    piVar1          = func_02003844(param_1, 100);
    *(u32 *) piVar1 = (u32) param_2;
    uVar4           = 0;
    if (param_2 != 0) {
        uVar4 = *(u32 *) (param_2 + 0xc);
    }
    func_020759ac(piVar1 + 4, uVar4);
    *(u16 *) (piVar1 + 0x58) = 0;
    iVar2                    = 0;
    if (param_2 != 0) {
        iVar2 = *(u32 *) (param_2 + 0xc);
    }
    cnt    = *((u8 *) iVar2 + 0x17);
    puVar3 = 0;
    if (cnt <= 0) {
        goto store;
    }
    puVar3 = func_02003844(param_1, cnt * 12);
    i      = 0;
    if (cnt > 0) {
        puVar5 = puVar3;
        do {
            *(u32 *) puVar5       = 0;
            *(u32 *) (puVar5 + 4) = 0;
            i                     = (s16) (i + 1);
            *(u32 *) (puVar5 + 8) = 0;
            puVar5                = puVar5 + 12;
        } while (i < cnt);
    }
store:
    *(u32 *) (piVar1 + 0x5c) = (u32) puVar3;
    *(u32 *) (piVar1 + 0x60) = 0;
    return piVar1;
}
