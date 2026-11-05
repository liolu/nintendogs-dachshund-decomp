/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210adf8 from projets/nintendogs-shiba-friends/src/donor/func_0210adf8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_021331fc[];
extern u8 data_0213320c[];
extern u8 data_021331ec[];
extern u8 data_0213321c[];
extern u8 data_0213322c[];
extern void func_02107ca4(s32 a, s32 b);
extern s32 *func_02003844(s32 *a, s32 b);
extern void func_0211c98c(s32 *a, s32 *b, s32 c, s32 d);
extern u32 func_02078bf4(s32 a, u8 *b);
extern void func_020c51d4(s32 a, s16 b, void *c);
extern void func_0210acc0(void);
extern void func_02109e64(void);
extern void func_0210adfc(void);
extern void func_02109e08(void);
extern void func_0210b4d4(void);
extern void func_0210b178(void);
extern void func_0210b084(void);
extern void func_0210af90(void);
extern void func_0210b268(void);
void func_0210ae00(s32 *param_1, s32 *param_2) {
    s32 *piVar3;
    u32 uVar2;

    func_02107ca4((s32) param_1, 0x30);
    *(u32 *) ((u8 *) param_1 + 0x1f4)  = (u32) func_0210acc0;
    *(u32 *) ((u8 *) param_1 + 0x1f8)  = (u32) func_02109e64;
    *(u32 *) ((u8 *) param_1 + 0x1f0)  = (u32) func_0210adfc;
    *(u32 *) ((u8 *) param_1 + 0x1fc)  = (u32) func_02109e08;
    *(u32 *) ((u8 *) param_1 + 0x124)  = 0x333;
    *(u32 *) ((u8 *) param_1 + 0x128)  = 0x800;
    *(u32 *) ((u8 *) param_1 + 0x12c)  = 3;
    *(s32 **) ((u8 *) param_1 + 0x214) = func_02003844(param_2, 0xb0);
    piVar3                             = *(s32 **) ((u8 *) param_1 + 0x214);
    func_0211c98c(piVar3, param_2, 4, 0xb33);
    piVar3[7] = 0;
    uVar2     = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_021331fc);
    func_020c51d4((s32) param_1, (s16) uVar2, func_0210b4d4);
    uVar2 = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_0213320c);
    func_020c51d4((s32) param_1, (s16) uVar2, func_0210b178);
    uVar2 = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_021331ec);
    func_020c51d4((s32) param_1, (s16) uVar2, func_0210b084);
    uVar2 = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_0213321c);
    func_020c51d4((s32) param_1, (s16) uVar2, func_0210af90);
    uVar2 = func_02078bf4(*(s32 *) (*(s32 *) ((u8 *) param_1 + 0x1c) + 8) + 0x40, data_0213322c);
    func_020c51d4((s32) param_1, (s16) uVar2, func_0210b268);
}
