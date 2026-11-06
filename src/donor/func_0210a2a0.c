/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210a2a0 from projets/nintendogs-chihuahua-friends/src/donor/func_0210a2a0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153720;
extern u32 data_02156080;
extern u32 func_02044644(s32 a);
extern s32 func_01ffda04(s32 a);
extern void func_0210843c(u8 *p, u32 *a, u32 b);
extern void func_02092ee8(u32 a, u32 *b, u32 *c);
extern void func_02108e48(u8 *p, s32 a, u32 *b);
extern void func_0210aabc(u8 *p, u32 *a, u32 *b);
extern void func_0210a700(u8 *p);
extern s32 func_02033db0(s32 a);
extern s32 func_02033d98(s32 a);
u32 func_0210a2a0(u8 *param_1) {
    u32 aiStack_38[3];
    u32 aiStack_2c[3];
    u32 aiStack_20[3];
    u8 *iVar4;
    s32 iVar1;
    s32 iVar2;
    s32 uVar3;
    iVar4 = *(u8 **) (param_1 + 0x214);
    iVar1 = func_02044644(*(s16 *) (param_1 + 156));
    iVar2 = func_01ffda04(*(s16 *) (param_1 + 152));
    func_0210843c(param_1, aiStack_20, 0x8000);
    func_02092ee8(iVar1, aiStack_38, aiStack_20);
    func_02108e48(param_1, iVar2, aiStack_2c);
    if (*(u32 *) (iVar4 + 0x1c) == 0) {
        func_0210aabc(param_1, aiStack_38, aiStack_2c);
    } else {
        func_0210aabc(param_1, aiStack_2c, aiStack_38);
    }
    func_0210a700(param_1);
    if ((*(u16 *) (*(u8 **) &data_02153720 + 0x84) & 1) == 0) {
        goto RET1;
    }
    if (*(u32 *) (*(u8 **) &data_02156080 + 0x24) == 0) {
        goto C8;
    }
RET1:
    return 1;
C8:
    uVar3 = func_02033db0(iVar2);
    if (uVar3 != 0) {
        goto ZERO;
    }
    uVar3 = func_02033d98(iVar2);
    if (uVar3 != 0) {
        goto ZERO;
    }
    return 2;
ZERO:
    return 0;
}
