/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210a8d0 from projets/nintendogs-chihuahua-friends/src/donor/func_0210a8d0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_02148c00;
extern s32 data_02148bec;
extern s32 data_02148be8;
extern s32 func_02044644(s32 a);
extern s32 func_01ffda04(s32 a);
extern s32 func_0211c258(s32 a, s32 b, s32 c);
extern void func_02111948(u8 *a, s32 b, s32 c);
extern void func_0211c8b4(s32 a, s32 b, s32 *c);
extern s32 func_02069430(s32 *a);
extern void func_020ec220(u8 *a, s32 b, s32 c);
extern s32 func_0211c1bc(s32 a, s32 b, s32 c);
extern s32 func_020343a4(s32 a);
extern u32 func_020340c4(s32 a);
extern void func_0210fd28(u8 *a, s32 b);
extern void func_0210fbac(u8 *a, s32 b, s32 c);
extern void func_0210fb04(u8 *a, s32 b, s32 c);
void func_0210a8d0(u8 *param_1) {
    s32 *piVar8;
    s32 iVar7;
    s32 bVar3;
    s32 iVar4;
    s32 one = 1;
    s32 iVar5;
    s32 aiStack_30[3];

    piVar8 = *(s32 **) (param_1 + 0x214);
    func_02044644(*(s16 *) (param_1 + 0x9c));
    bVar3 = 0;
    iVar7 = 0;
    do {
        iVar4 = func_01ffda04(iVar7);
        if (iVar4 != 0 && iVar7 != *(s16 *) (param_1 + 0x98)) {
            iVar5 = func_0211c258((s32) piVar8, iVar7, data_02148c00);
            if (iVar5 != 0) {
                bVar3 = one;
                if (*(s16 *) (param_1 + 0x90) == 1) {
                    iVar5 = *(s32 *) (param_1 + 0xb4);
                    iVar5 = (iVar5 > 0) ? iVar5 : -iVar5;
                    if (iVar5 > data_02148bec) {
                        func_02111948(param_1, iVar4, one);
                    }
                }
            }
        }
        iVar7 = (s16) (iVar7 + 1);
    } while (iVar7 < 3);
    if (bVar3 != 0) {
        s32 mode = *(s16 *) (param_1 + 0x90);
        s32 pp   = *(s32 *) (param_1 + 0x214);
        if (mode == 1) {
            func_0211c8b4(pp, 2, aiStack_30);
            iVar7 = func_02069430(aiStack_30);
            func_020ec220(param_1 + 400, 2, iVar7);
        }
    }
    iVar7 = 0;
Lloop:
    iVar4 = func_01ffda04(iVar7);
    if (iVar4 == 0) {
        goto Linc;
    }
    if (iVar7 == *(s16 *) (param_1 + 0x98)) {
        goto Linc;
    }
    if (func_0211c1bc((s32) piVar8, iVar7, data_02148be8) == 0) {
        goto Linc;
    }
    if (func_020343a4(iVar4) == 0) {
        goto Linc;
    }
    if (func_020340c4(iVar4) == 0) {
        goto Linc;
    }
    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
        case 2:
            goto Lret;
        case 3:
            func_0210fbac(param_1, 0x2ccc, iVar7);
            return;
        case 1:
            func_0210fd28(param_1, iVar7);
            return;
        case 4:
        case 5:
            func_0210fb04(param_1, 0x2ccc, iVar7);
            return;
        default:
            goto Lret;
    }
Linc:
    iVar7 = (s16) (iVar7 + 1);
    if (iVar7 < 3) {
        goto Lloop;
    }
Lret:
    return;
}
