/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02003ab0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02003ab0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
typedef signed long long s64;
extern u8 *data_0214a798;
extern u32 data_021338dc[];
extern u8 data_0214a878[];
extern u8 data_0214a79c[];
extern u64 func_02080f5c(void);
extern void func_0206bd14(void);
extern void func_02003f40(void);
extern u32 func_0205d9b0(u32, u32, u32, u32);
void func_02003a3c(void (*param_1)(void), void (*param_2)(void)) {
    u8 *iVar4;
    u8 *iVar5;
    u64 t;
    u64 t2;
    s64 lv;

    do {
        iVar4                   = data_0214a798;
        t                       = func_02080f5c();
        *(u64 *) (iVar4 + 0xc4) = t;
        if (*(u16 *) (iVar4 + 10) == 1) {
            func_0206bd14();
        }
        ((void (*)(void)) data_021338dc[0])();
        param_1();
        func_02003f40();
        if (param_2 != ((void *) 0)) {
            param_2();
        }
        ((void (*)(void)) data_021338dc[3])();
        t2                              = func_02080f5c();
        *(s32 *) (data_0214a798 + 0x28) = *(s32 *) (data_0214a798 + 0x28) + 1;
        iVar5                           = data_0214a798;
        lv                              = (s64) (t2 - *(u64 *) (iVar5 + 0xcc)) * 64000;
        *(u32 *) (iVar5 + 0xd8)         = func_0205d9b0((u32) lv, (u32) (lv >> 32), 0x82ea, 0);
        iVar5                           = data_0214a798;
        lv                              = (s64) (t2 - *(u64 *) (iVar5 + 0xc4)) * 64000;
        *(u32 *) (iVar5 + 0xdc)         = func_0205d9b0((u32) lv, (u32) (lv >> 32), 0x82ea, 0);
    } while (*(u16 *) (data_0214a878 + 4) != 0 || *(u16 *) (data_0214a79c + 4) != 0);
}
