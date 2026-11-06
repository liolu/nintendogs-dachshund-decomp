/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c02d8 from projets/nintendogs-chihuahua-friends/src/donor/func_020c02d8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u8 vu8;
extern u8 *data_02153708;
extern s32 *data_02154c3c;
extern u32 data_02141148;
extern u32 data_02141140;
extern u8 data_021538c4[];
extern u8 *data_0215370c;
extern u8 data_0212d914[];
extern s32 func_01ffda04(s32 a);
extern s32 func_020280c8(s32 a);
extern s32 func_02028144(s32 a);
extern s32 func_020c89bc(s32 a);
extern s32 func_020c6534(s32 a, s32 b, s32 c);
extern s32 func_020c5634(s32 a);
extern s32 func_020c0588(void);
extern void func_020a3928(s32 a, s32 b);
s32 func_020c02d8(u32 param_1, s32 param_2) {
    u16 *puVar7;
    s32 iVar6;
    s32 iVar2;
    s32 iVar4;
    s32 iVar5;
    s32 iVar7;
    s16 *psVar3;
    u16 w;

    iVar4  = (s32) data_02153708;
    iVar5  = 0;
    puVar7 = (u16 *) (iVar4 + 0x20);
    iVar6  = -1;
    iVar2  = 0;
    do {
        w = *puVar7;
        if ((w & 1) != 0) {
            if ((w & 2) != 0) {
                iVar6 = iVar2;
                break;
            }
        }
        iVar2  = (s16) (iVar2 + 1);
        puVar7 = puVar7 + 10;
    } while (iVar2 < 3);
    if (param_1 > 0x3000e) {
        goto HI;
    }
    if (param_1 >= 0x3000e) {
        goto EQ;
    }
    switch (param_1) {
        case 0x30000:
            goto C0;
        case 0x30001:
            goto END;
        case 0x30002:
            goto C2;
        case 0x30003:
            goto C3;
        case 0x30004:
            goto END;
        case 0x30005:
            goto C5;
        default:
            goto END;
    }
HI:
    if (param_1 > 0x3000f) {
        goto HI2;
    }
    if (param_1 != 0x3000f) {
        goto END;
    }
    goto C3000f;
HI2:
    if (param_1 != 0x30013) {
        goto END;
    }
    goto C30013;
C2:
    iVar2 = 0;
    if (param_2 == 0) {
        goto C2a;
    }
    if (param_2 != 1) {
        goto C2c;
    }
    goto C2b;
C2a:
    iVar2 = func_01ffda04((s32) * (s16 *) (iVar4 + 0xe));
    goto C2c;
C2b:
    iVar2 = func_01ffda04(iVar6);
C2c:
    iVar5 = func_02028144(iVar2) + 0x78;
    goto END;
C5:
    iVar5 = 0;
    iVar2 = *(s32 *) ((u8 *) data_02154c3c + 4);
    iVar7 = func_020280c8(func_01ffda04((s32) * (s16 *) (iVar4 + 0xe)));
    if (iVar7 == 0) {
        goto C5a;
    }
    if (iVar7 != 1) {
        goto END;
    }
    goto C5b;
C5a:
    iVar5 = func_020c6534(iVar2, 0x546, param_2);
    goto END;
C5b:
    iVar5 = func_020c6534(iVar2, 0x547, param_2);
    goto END;
C3:
    iVar2 = 0;
    if (param_2 == 0) {
        goto C3a;
    }
    if (param_2 != 1) {
        goto C3c;
    }
    goto C3b;
C3a:
    iVar2 = func_01ffda04((s32) * (s16 *) (iVar4 + 0xe));
    goto C3c;
C3b:
    iVar2 = func_01ffda04(iVar6);
C3c:
    puVar7 = (u16 *) func_02028144(iVar2);
    iVar5  = func_020c5634((s32) *puVar7);
    goto END;
EQ:
    iVar2 = *(s32 *) ((u8 *) data_02154c3c + 4);
    iVar4 = (s32) data_02141148;
    iVar5 = 0;
    if (iVar4 == 0) {
        goto E0;
    }
    if (iVar4 == 1) {
        goto E1;
    }
    if (iVar4 != 2) {
        goto END;
    }
    goto E2;
E0:
    iVar5 = func_020c6534(iVar2, 0x579, 0);
    goto END;
E1:
    iVar5 = func_020c6534(iVar2, 0x57a, 0);
    goto END;
E2:
    iVar5 = func_020c6534(iVar2, 0x578, 0);
    goto END;
C3000f:
    iVar5 = func_020c0588();
    goto END;
C30013:
    func_020a3928((s32) data_02141140, (s32) data_021538c4);
    iVar5 = (s32) (vu8 *) data_021538c4;
    goto END;
C0:
    if (param_2 == 1) {
        iVar2  = *(s32 *) ((u8 *) data_02154c3c + 0x38);
        psVar3 = (s16 *) func_020c89bc((s32) * (s16 *) (data_0215370c + 4));
        iVar5  = func_020c6534(iVar2, *(s32 *) (data_0212d914 + *psVar3 * 12 + 8), 1);
    }
END:
    return iVar5;
}
