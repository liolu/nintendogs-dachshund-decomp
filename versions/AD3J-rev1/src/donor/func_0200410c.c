/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200410c from projets/nintendogs-chihuahua-friends/src/donor/func_0200410c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
extern u32 data_0214a798;
extern u32 data_021338dc;
extern u64 func_02080f5c(void);
extern void func_0206bd14(void);
extern void func_02003f40(void);
extern u64 func_0205d9b0(u32 a, u32 b, u32 c, u32 d);
void func_0200410c(int param_1) {
    u64 uVar6;
    u64 now;
    u64 d;
    int iVar4;

    do {
        iVar4                   = *(int *) &data_0214a798;
        uVar6                   = func_02080f5c();
        *(u32 *) (iVar4 + 0xc4) = (u32) uVar6;
        *(u32 *) (iVar4 + 0xc8) = (u32) (uVar6 >> 32);
        if (*(u16 *) (iVar4 + 10) == 1) {
            func_0206bd14();
        }
        ((void (*)(void)) data_021338dc)();
        func_02003f40();
        ((void (*)(void))(*(int *) ((u8 *) &data_021338dc + 12)))();
        now                                       = func_02080f5c();
        *(int *) (*(int *) &data_0214a798 + 0x28) = *(int *) (*(int *) &data_0214a798 + 0x28) + 1;
        iVar4                                     = *(int *) &data_0214a798;
        d                                         = (now - *(volatile u64 *) ((u8 *) iVar4 + 0xcc)) * 64000;
        *(int *) (iVar4 + 0xd8)                   = (int) func_0205d9b0((u32) d, (u32) (d >> 32), 0x82ea, 0);
        iVar4                                     = *(int *) &data_0214a798;
        d                                         = (now - *(volatile u64 *) ((u8 *) iVar4 + 0xc4)) * 64000;
        *(int *) (iVar4 + 0xdc)                   = (int) func_0205d9b0((u32) d, (u32) (d >> 32), 0x82ea, 0);
        param_1                                   = param_1 - 1;
    } while (param_1 > 0);
}
