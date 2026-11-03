/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e7a48 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e7a48.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0212da9c[];
extern u8 data_0212daac[];
extern void func_020d56d0(void);
extern void func_020d4eb4(void);
extern void func_020d4e4c(void);
extern void func_020d4de4(void);
extern void func_02107c9c(u8 *p, s32 a);
extern u32 func_02003844(u32 *p, s32 a);
extern u32 func_02078bf4(u32 a, u32 b);
extern void func_020c51d0(u8 *p, s32 a, u32 b);
void func_020d5754(u8 *param_1, u32 *param_2, s32 param_3) {
    u32 uVar1;
    u32 uVar2;
    u32 uVar3;
    u32 *puVar4;

    func_02107c9c(param_1, (s16) param_3);
    uVar2                      = func_02003844(param_2, 0x18);
    *(u32 *) (param_1 + 0x214) = uVar2;
    uVar2                      = (u32) func_020d4eb4;
    *(u32 *) (param_1 + 0x1f4) = (u32) func_020d56d0;
    *(u32 *) (param_1 + 0x1f8) = uVar2;
    puVar4                     = *(u32 **) (param_1 + 0x214);
    *(u32 *) (param_1 + 0xb0)  = 0;
    *(u32 *) (param_1 + 0xb4)  = 0;
    *(u32 *) (param_1 + 0xb8)  = 0;
    *(u32 *) (param_1 + 0xbc)  = 0;
    *(u32 *) (param_1 + 0xc0)  = 0;
    *(u32 *) (param_1 + 0xc4)  = 0;
    puVar4[1]                  = 0;
    puVar4[2]                  = 0;
    *(u16 *) (puVar4 + 3)      = 0;
    *puVar4                    = 0;
    if (param_3 == 0x43) {
        *(u16 *) (param_1 + 0xa6) = 1;
    }
    if (param_3 == 0x44) {
        *(u16 *) (param_1 + 0xa6) = 0;
    }
    uVar3     = func_02078bf4(*(u32 *) (*(u8 **) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0212da9c);
    puVar4[4] = uVar3;
    uVar3     = func_02078bf4(*(u32 *) (*(u8 **) (param_1 + 0x1c) + 8) + 0x40, (u32) data_0212daac);
    puVar4[5] = uVar3;
    func_020c51d0(param_1, (s16) puVar4[4], (u32) func_020d4e4c);
    func_020c51d0(param_1, (s16) puVar4[5], (u32) func_020d4de4);
    uVar1                      = 0x668;
    uVar2                      = 0x14d2;
    *(u32 *) (param_1 + 0xf8)  = uVar2;
    *(u32 *) (param_1 + 0xfc)  = uVar1;
    uVar1                      = 0x39a;
    *(u32 *) (param_1 + 0x100) = 0xe6a;
    *(u32 *) (param_1 + 0x104) = uVar2;
    *(u32 *) (param_1 + 0xac)  = 2000;
    *(u32 *) (param_1 + 0x108) = uVar1;
    *(u32 *) (param_1 + 0x10c) = uVar1;
    uVar2                      = 0xe6a0;
    *(u32 *) (param_1 + 0x110) = uVar1;
    *(u32 *) (param_1 + 0x114) = uVar2;
    *(u32 *) (param_1 + 0x118) = uVar1;
    *(u32 *) (param_1 + 0x11c) = uVar1;
}
