/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e9444 from projets/nintendogs-chihuahua-friends/src/donor/func_020e9444.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_0212ff54[];
extern int data_02153734;
extern void func_021077f0(u32 p);
extern void func_021077e0(u32 p);
extern u32 func_020e16fc(void);
extern s32 func_01ffda04(int a);
extern s32 func_020280ec(s32 p);
extern u8 func_0210fd98(u32 p);
u32 func_020e9444(u32 param_1) {
    u32 uVar3;
    int iVar4;
    u32 uVar5;
    s64 v;
    u8 bVar2;
    u8 *q;

    if (*(s16 *) (param_1 + 0x90) == 1) {
        goto LAB_one;
    }
    if (*(s16 *) (param_1 + 0x90) != 2) {
        return param_1;
    }
    func_021077e0(param_1);
    q                   = *(u8 **) (param_1 + 0x18c);
    *(u16 *) (q + 0x20) = *(u16 *) (q + 0x20) | 1;
    bVar2               = func_0210fd98(param_1);
    return (u32) bVar2;
LAB_one:
    uVar5 = 0x1000;
    func_021077f0(param_1);
    q                         = *(u8 **) (param_1 + 0x18c);
    *(u16 *) (q + 0x20)       = *(u16 *) (q + 0x20) & ~1;
    uVar3                     = func_020e16fc();
    *(u32 *) (param_1 + 0xbc) = uVar3;
    *(u32 *) (param_1 + 0xc0) = data_0212ff54[*(s16 *) (param_1 + 0x94) - 0x72] + 0xfffffe66;
    iVar4                     = func_01ffda04(*(s16 *) (data_02153734 + 2));
    if (iVar4 != 0) {
        uVar5 = func_020280ec(iVar4);
    }
    v                         = (s64) (s32) uVar5 * (s64) 0x6800 + 0x800;
    *(u32 *) (param_1 + 0xc4) = -(s32) (u32) (v >> 12);
    return -(s32) (u32) (v >> 12);
}
