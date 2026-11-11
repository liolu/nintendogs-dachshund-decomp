/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02096da4 from projets/nintendogs-shiba-friends/src/donor/func_02096da4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02156080;
extern u8 func_02095610(u8 *);
extern u32 func_020a2cbc(u8 *);
extern void func_0209565c(u8 *, s32);
extern u32 func_02095590(u8 *, u32);
extern void func_02093398(u8 *);
extern u32 func_02096eb0(u8 *);
extern u8 func_02095524(u8 *);
extern void func_02095784(u8 *);
extern s32 func_021074d0(s32);
extern void func_02106990(s32);
u32 func_02096da4(u8 *param_1) {
    s16 sVar1;
    u8 bVar2;
    s32 iVar3;
    u32 uVar4;
    u8 b5;

    sVar1 = *(s16 *) (param_1 + 0x2e);
    if (sVar1 == 0) {
        goto s0;
    }
    if (sVar1 == 1) {
        goto s1;
    }
    if (sVar1 == 4) {
        goto s4;
    }
    return (u32) param_1;
s0:
    b5 = func_02095610(param_1);
    return (u32) b5;
s1:
    bVar2 = 0;
    uVar4 = func_020a2cbc(param_1);
    if (uVar4 != 0) {
        bVar2 = 1;
        goto T;
    }
    b5    = bVar2;
    uVar4 = 0xfffffffd;
    if (*(s32 *) (param_1 + 0x134) == (s32) uVar4) {
        b5 = 1;
        func_0209565c(param_1, 10);
        uVar4 = func_02095590(param_1, bVar2);
    }
    if (b5 != 0) {
        bVar2 = 1;
    }
T:
    if (bVar2 != 0) {
        return uVar4;
    }
    func_02093398(param_1);
    return func_02096eb0(param_1);
s4:
    bVar2 = func_02095524(param_1);
    if (bVar2 == 0) {
        return (u32) bVar2;
    }
    func_02095784(param_1);
    *(u32 *) (data_02156080 + 0x24) = 1;
    iVar3                           = func_021074d0(*(s16 *) (param_1 + 0x7c));
    if (iVar3 == 0) {
        return (u32) iVar3;
    }
    *(s16 *) (param_1 + 0x7c) = -1;
    func_02106990(0);
    *(u16 *) (param_1 + 0x76) = 0;
    *(u16 *) (param_1 + 0x78) = 0;
    return 0;
}
