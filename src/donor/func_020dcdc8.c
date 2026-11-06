/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dcdc8 from projets/nintendogs-chihuahua-friends/src/donor/func_020dcdc8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02144ab4;
extern u32 data_02144ac8;
extern u32 data_0212dc00;
extern u32 data_0212dc10;
extern void func_020dcc70(void);
extern void func_020dc66c(void);
extern void func_020dcccc(void);
extern void func_020dc658(void);
extern s32 func_02003844(u8 *p, s32 a);
extern void func_0205e950(u8 *p, s32 a, u32 b, s32 c);
extern s32 func_0207e718(u8 *p);
extern s32 func_02078f8c(s32 a, s32 b);
extern void func_020c53b4(u8 *p, u8 *q, s32 a);
extern s32 func_02078bf4(s32 a, u32 b);
extern void func_020c51ec(u8 *p, s32 a, s32 b);
extern void func_020c3ff8(u8 *p, s32 a);
void func_020dcdc8(u8 *param_1, u8 *param_2) {
    u8 acStack_50[64];
    u32 *p4;
    s32 uVar5;
    s32 iVar3;

    *(u32 *) (param_1 + 500)   = (u32) func_020dcc70;
    *(u32 *) (param_1 + 0x1f8) = (u32) func_020dc66c;
    *(u32 *) (param_1 + 0x1f0) = (u32) func_020dcccc;
    *(u32 *) (param_1 + 0x204) = (u32) func_020dc658;
    *(u32 *) (param_1 + 0x214) = func_02003844(param_2, 0x1c);
    p4                         = *(u32 **) (param_1 + 0x214);
    if (p4 != 0) {
        uVar5 = *(s32 *) (param_1 + 0x1ec);
        func_0205e950(acStack_50, 0x40, (u32) &data_02144ab4, uVar5);
        iVar3 = func_0207e718(acStack_50);
        iVar3 = func_02078f8c(iVar3, 0);
        p4[5] = iVar3;
        func_0205e950(acStack_50, 0x40, (u32) &data_02144ac8, *(s32 *) (param_1 + 0x1ec));
        iVar3 = func_0207e718(acStack_50);
        iVar3 = func_02078f8c(iVar3, 0);
        p4[6] = iVar3;
        func_020c53b4(param_1, param_2, 3);
        uVar5 = func_02078bf4(*(s32 *) (*(u8 **) (param_1 + 0x1c) + 8) + 0x40, (u32) &data_0212dc00);
        func_020c51ec(param_1, 1, (s16) uVar5);
        uVar5 = func_02078bf4(*(s32 *) (*(u8 **) (param_1 + 0x1c) + 8) + 0x40, (u32) &data_0212dc10);
        func_020c51ec(param_1, 2, (s16) uVar5);
        func_020c3ff8(*(u8 **) (param_1 + 0x74) + 0x24, p4[5]);
        func_020c3ff8(*(u8 **) (param_1 + 0x74) + 0x48, p4[6]);
        p4[3]                    = (u32) ((u8 *) ((u32) * (u8 **) (param_1 + 0x74) + 0x24) + 0x14);
        p4[4]                    = (u32) ((u8 *) ((u32) * (u8 **) (param_1 + 0x74) + 0x48) + 0x14);
        *(u32 *) (p4[3] + 0xc)   = 0;
        *(u32 *) (p4[4] + 0xc)   = 0;
        *(u32 *) (p4[3] + 8)     = 0;
        *(u32 *) (p4[4] + 8)     = 0;
        p4[0]                    = 0;
        p4[1]                    = 0;
        *(u16 *) ((u8 *) p4 + 8) = 0;
    }
    *(u32 *) (param_1 + 0xac) = 0;
}
