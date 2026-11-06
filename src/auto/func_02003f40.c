/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02003fb4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02003fb4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
typedef volatile u32 vu32;
extern u8 data_021338dc[];
extern u8 data_0214a878[];
extern u8 data_0214a79c[];
extern u8 data_0214a798[];
extern u8 data_0214b158[];
extern u64 func_02080f5c(void);
extern void func_020807c8(void);
extern u64 func_0205d9b0(u32 lo, u32 hi, u32 a, u32 b);
extern void func_0207f1c8(u32 a, u32 b);
extern void func_02069b3c(u32 a, s32 b);
void func_02003f40(void) {
    s16 sVar1;
    s16 sVar2;
    u8 *p;
    u8 *iVar5;
    u64 t;
    u64 lv;
    u16 uVar8;

    sVar1 = *(s16 *) (data_0214a878 + 0x18);
    sVar2 = *(s16 *) (data_0214a79c + 0x18);
    ((void (*)(void))(*(u32 *) (data_021338dc + 4)))();
    if (*(u32 *) (data_0214a878 + 0x10) != 0) {
        ((void (*)(void *))(*(u32 *) (data_0214a878 + 0x10)))(data_0214a878);
    }
    if (*(u32 *) (data_0214a79c + 0x10) != 0) {
        ((void (*)(void *))(*(u32 *) (data_0214a79c + 0x10)))(data_0214a79c);
    }
    func_020807c8();
    p = *(u8 **) data_0214a798;
    if (*(u16 *) (p + 10) == 1) {
        iVar5                = *(u8 **) (p + 0x74);
        *(vu32 *) 0x04000540 = ((u32) iVar5[3] << 1) | (u32) iVar5[2];
    }
    p                   = *(u8 **) data_0214a798;
    t                   = func_02080f5c();
    lv                  = (t - *(u64 *) (p + 0xc4)) * 64000;
    *(u32 *) (p + 0xd4) = (u32) func_0205d9b0((u32) lv, (u32) (lv >> 32), 0x82ea, 0);
    uVar8               = 0;
    if (uVar8 < *(u16 *) (*(u8 **) data_0214a798)) {
        do {
            func_0207f1c8(1, 1);
            uVar8 = (u16) (uVar8 + 1);
        } while (uVar8 < *(u16 *) (*(u8 **) data_0214a798));
    }
    if (*(u32 *) (data_0214b158 + 0xc) != 0) {
        ((void (*)(void *))(*(u32 *) (data_0214b158 + 0xc)))(data_0214b158);
    }
    t                   = func_02080f5c();
    p                   = *(u8 **) data_0214a798;
    *(u64 *) (p + 0xcc) = t;
    if (sVar1 != *(s16 *) (data_0214a878 + 0x18)) {
        func_02069b3c(0x0400006c, *(s16 *) (data_0214a878 + 0x18));
    }
    if (sVar2 != *(s16 *) (data_0214a79c + 0x18)) {
        func_02069b3c(0x0400106c, *(s16 *) (data_0214a79c + 0x18));
    }
    ((void (*)(void))(*(u32 *) (data_021338dc + 8)))();
}
