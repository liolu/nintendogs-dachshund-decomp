/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006c50 from projets/nintendogs-shiba-friends/src/donor/func_02006c50.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void *func_02003844(int *a, u32 b);
extern void func_0206dff0(u32 a, void *b, u32 c);
u16 *func_02006c50(int *param_1, int param_2) {
    u16 *puVar1;
    u32 uVar2;
    vu32 uVar3;

    puVar1 = (u16 *) func_02003844(param_1, 8);
    if (puVar1 != ((void *) 0)) {
        *puVar1               = (u16) param_2;
        puVar1[1]             = 0;
        uVar2                 = (u32) func_02003844(param_1, param_2 << 3);
        *(u32 *) (puVar1 + 2) = uVar2;
        puVar1[1]             = 0;
        uVar3                 = 0xc0;
        func_0206dff0(uVar3, *(void **) (puVar1 + 2), (u32) *puVar1 << 3);
    }
    return puVar1;
}
