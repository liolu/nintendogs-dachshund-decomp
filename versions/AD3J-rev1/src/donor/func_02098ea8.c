/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b10f4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b10f4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153700[];
extern u8 data_0214b150[];
extern s32 func_01ffda04(u8 *p);
extern s32 func_02028144(s32 a);
extern s32 func_020ca5d8(s32 a);
extern s32 func_020ca2dc(s32 a, u32 *b, s32 *c);
extern s32 func_020ca564(s32 a, u32 *b, s32 *c);
extern s32 func_02027f40(s32 a, u32 b);
u32 func_02098ea8(u8 *param_1) {
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    u32 uVar5;
    u8 *Q;
    u8 *X;
    iVar2 = func_01ffda04(param_1);
    iVar3 = func_02028144(iVar2);
    uVar5 = 0xffffffff;
    Q     = *(u8 **) (*(u8 **) data_02153700 + 4);
    if (*(s16 *) Q != 7) {
        iVar4 = 0;
    } else {
        iVar4 = (s32) * (s16 *) (*(u8 **) (Q + 0x1c) + 4);
    }
    switch (iVar4) {
        case 0:
            break;
        case 1:
            goto C1;
        case 2:
            goto C2;
        case 3:
            goto C3;
        case 4:
        case 5:
            goto C45;
        case 6:
            goto C6;
        case 7:
            goto C7;
    }
    goto END;
C6:
    if (func_020ca5d8(iVar3) == 0) {
        uVar5 = 0;
        goto END;
    }
    X = *(u8 **) data_0214b150;
    if (func_020ca564(iVar3, (u32 *) (X + 0x1c), (s32 *) (X + 0x2c)) == 0) {
        uVar5 = 1;
    }
    goto END;
C7:
    if (func_020ca5d8(iVar3) == 0) {
        uVar5 = 0;
    }
    goto END;
C1:
    if (func_020ca5d8(iVar3) == 0) {
        uVar5 = 0;
        goto END;
    }
    X = *(u8 **) data_0214b150;
    if (func_020ca2dc(iVar3, (u32 *) (X + 0x1c), (s32 *) (X + 0x2c)) != 0) {
        uVar5 = 2;
        goto END;
    }
    if (func_02027f40(iVar2, 3) == 10000) {
        uVar5 = 4;
        goto END;
    }
    if (func_02027f40(iVar2, 4) == 10000) {
        uVar5 = 5;
        goto END;
    }
    if (func_02027f40(iVar2, 7) == 0) {
        uVar5 = 6;
    }
    goto END;
C3:
    if (func_020ca5d8(iVar3) == 0) {
        uVar5 = 0;
        goto END;
    }
    X = *(u8 **) data_0214b150;
    if (func_020ca2dc(iVar3, (u32 *) (X + 0x1c), (s32 *) (X + 0x2c)) != 0) {
        uVar5 = 2;
        goto END;
    }
    if (func_02027f40(iVar2, 3) == 10000) {
        uVar5 = 4;
        goto END;
    }
    if (func_02027f40(iVar2, 4) == 10000) {
        uVar5 = 5;
        goto END;
    }
    if (func_02027f40(iVar2, 7) == 0) {
        uVar5 = 6;
    }
    goto END;
C2:
    if (func_020ca5d8(iVar3) == 0) {
        uVar5 = 0;
        goto END;
    }
    X = *(u8 **) data_0214b150;
    if (func_020ca2dc(iVar3, (u32 *) (X + 0x1c), (s32 *) (X + 0x2c)) != 0) {
        uVar5 = 2;
        goto END;
    }
    if (*(s16 *) (iVar3 + 0x6a) <= 0) {
        uVar5 = 3;
        goto END;
    }
    if (func_02027f40(iVar2, 3) == 10000) {
        uVar5 = 4;
        goto END;
    }
    if (func_02027f40(iVar2, 4) == 10000) {
        uVar5 = 5;
        goto END;
    }
    if (func_02027f40(iVar2, 7) == 0) {
        uVar5 = 6;
    }
    goto END;
C45:
    if (func_020ca5d8(iVar3) == 0) {
        uVar5 = 0;
    }
END:
    return uVar5;
}
