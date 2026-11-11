/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c0e78 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c0e78.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_021331f4[];
extern u8 data_02133204[];
extern u8 data_021331e4[];
extern u8 data_02133214[];
extern u8 data_02133224[];
extern void func_02107c9c(s32 a, s32 b);
extern s32 *func_02003844(s32 *a, s32 b);
extern void func_0211c984(s32 *a, s32 *b, s32 c, s32 d);
extern u32 func_02078bf4(s32 a, u8 *b);
extern void func_020c51d0(s32 a, s16 b, void *c);
extern void func_0210acb8(void);
extern void func_02109e5c(void);
extern void func_0210adf4(void);
extern void func_02109e00(void);
extern void func_0210b4cc(void);
extern void func_0210b170(void);
extern void func_0210b07c(void);
extern void func_0210af88(void);
extern void func_0210b260(void);
void func_0210adf8(s32 *param_1, s32 *param_2) {
    s32 *piVar3;
    u32 uVar2;

    func_02107c9c((s32) param_1, 0x30);
    *(u32 *) ((u8 *) param_1 + 0x1f4)  = (u32) func_0210acb8;
    *(u32 *) ((u8 *) param_1 + 0x1f8)  = (u32) func_02109e5c;
    *(u32 *) ((u8 *) param_1 + 0x1f0)  = (u32) func_0210adf4;
    *(u32 *) ((u8 *) param_1 + 0x1fc)  = (u32) func_02109e00;
    *(u32 *) ((u8 *) param_1 + 0x124)  = 0x333;
    *(u32 *) ((u8 *) param_1 + 0x128)  = 0x800;
    *(u32 *) ((u8 *) param_1 + 0x12c)  = 3;
    *(s32 **) ((u8 *) param_1 + 0x214) = func_02003844(param_2, 0xb0);
    piVar3                             = *(s32 **) ((u8 *) param_1 + 0x214);
    func_0211c984(piVar3, param_2, 4, 0xb33);
    piVar3[7] = 0;
    uVar2     = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_021331f4);
    func_020c51d0((s32) param_1, (s16) uVar2, func_0210b4cc);
    uVar2 = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_02133204);
    func_020c51d0((s32) param_1, (s16) uVar2, func_0210b170);
    uVar2 = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_021331e4);
    func_020c51d0((s32) param_1, (s16) uVar2, func_0210b07c);
    uVar2 = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_02133214);
    func_020c51d0((s32) param_1, (s16) uVar2, func_0210af88);
    uVar2 = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_02133224);
    func_020c51d0((s32) param_1, (s16) uVar2, func_0210b260);
}
