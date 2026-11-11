/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209fb38 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209fb38.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_02154dd8[];
extern s32 data_02154db8[];
extern s32 data_02154cb8[];
extern s32 data_02154dc4[];
extern u32 func_0207201c(s32 *p);
extern void func_02072320(s32 *p, s32 v);
extern void func_020e9b9c(s32 v);
extern void func_020740fc(s32 a, s32 b);
extern void func_020e9c68(s32 v);
extern void func_020747c4(s32 *p, s32 v);
extern void func_02072214(s32 *p, s32 a, s32 b);
extern void func_02072174(s32 *p, s32 a, s32 b);
extern void func_020721b4(s32 *p, s32 a, s32 b);
s32 func_020ee8d0(u32 param_1, s32 param_2, s32 param_3) {
    s32 *piVar2;
    s32 *puVar5;
    s32 *piVar3;
    s32 *piVar4;
    u32 uVar6;
    u32 uVar7;
    s32 iVar8;
    s32 iVar9;
    u16 uVar1;
    s32 iL;

    piVar2 = data_02154dd8;
    puVar5 = data_02154db8;
    if (param_1 == 5 && data_02154cb8[0x10] != 0) {
        return 0;
    }
    if (*piVar2 != 0) {
        uVar7 = func_0207201c(piVar2);
        if (param_1 == uVar7) {
            if (param_1 == 0x36) {
                func_02072320(piVar2, 0);
            } else if (param_1 == 0x29) {
                func_02072320(piVar2, 0);
            } else {
                return 0;
            }
        } else {
            func_02072320(piVar2, 0);
        }
    }
    func_020e9b9c(2);
    func_020740fc(param_1, data_02154cb8[0]);
    func_020e9c68(3);
    *(s16 *) (piVar2 + 3) = (s16) param_2;
    func_020747c4(piVar2, param_1);
    if (data_02154cb8[7] != 0) {
        piVar3                         = data_02154dd8;
        iVar9                          = 0;
        iVar8                          = *piVar3;
        *(s16 *) ((u8 *) piVar3 + 0xe) = 0;
        if (iVar8 != 0) {
            if (piVar3[7] != 0) {
                u16 uVar0             = *(u16 *) ((u8 *) piVar3 + 0x1a);
                uVar1                 = *(u16 *) (piVar3 + 6);
                *(s16 *) (piVar3 + 6) = 0;
                piVar3[7]             = 0;
                iVar9                 = (s32) uVar0 - (s32) uVar1;
            }
            func_02072214(piVar3, 0, iVar9);
        }
    } else {
        func_02072214(piVar2, param_2, param_3);
        if (param_3 > 10) {
            piVar2[7]                       = 1;
            *(s16 *) (piVar2 + 6)           = 0;
            *(s16 *) ((u8 *) piVar2 + 0x1a) = (s16) param_3;
        }
        if (piVar2[0x43] != 0) {
            piVar3                         = data_02154dd8;
            *(s16 *) ((u8 *) piVar3 + 0xe) = 60;
            *(s16 *) (piVar3 + 4)          = 60;
        } else {
            piVar3                         = data_02154dd8;
            *(s16 *) ((u8 *) piVar3 + 0xe) = 100;
            *(s16 *) (piVar3 + 4)          = 100;
        }
    }
    piVar4 = data_02154dd8;
    func_02072174(piVar2, 0xffff, 0x7f);
    iL = 0;
    do {
        if (((u16) (1 << iL) & 0xffffU) != 0) {
            *(u32 *) ((u8 *) piVar4 + iL * 4 + 0x5c) = 0x7f000;
        }
        iL = (s16) (iL + 1);
    } while (iL < 0x10);
    if (param_1 == 0x1b) {
        piVar4 = data_02154dd8;
        func_02072174(piVar2, 8, 0);
        iL = 0;
        do {
            if (((u16) (1 << iL) & 8U) != 0) {
                *(u32 *) ((u8 *) piVar4 + iL * 4 + 0x5c) = 0;
            }
            iL = (s16) (iL + 1);
        } while (iL < 0x10);
        piVar4 = data_02154dd8;
        func_02072174(piVar2, 0x20, 0);
        iL = 0;
        do {
            if (((u16) (1 << iL) & 0x20U) != 0) {
                *(u32 *) ((u8 *) piVar4 + iL * 4 + 0x5c) = 0;
            }
            iL = (s16) (iL + 1);
        } while (iL < 0x10);
        func_020721b4(piVar2, 0x10, 1);
        puVar5[0] = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
    } else {
        puVar5[2] = -1;
        if (param_1 == 0x1c) {
            piVar4 = data_02154dd8;
            func_02072174(piVar2, 0x400, 0);
            iL = 0;
            do {
                if (((u16) (1 << iL) & 0x400U) != 0) {
                    *(u32 *) ((u8 *) piVar4 + iL * 4 + 0x5c) = 0;
                }
                iL = (s16) (iL + 1);
            } while (iL < 0x10);
            piVar2[0x40] = 1;
            piVar2[0x41] = 0;
        }
    }
    data_02154dc4[0x10 / 4] = 1;
    return 1;
}
