/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cff68 from projets/nintendogs-chihuahua-friends/src/donor/func_020cff68.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_0208120c(void);
extern void func_02081220(u32 v);
extern s32 func_0212108c(void);
extern s32 func_021210d0(void);
extern s32 func_021211d8(void);
extern s16 func_0211e860(void);
extern s32 func_021212c4(void);
extern void func_02121464(int v);
extern void func_02121448(u32 a, u32 b);
extern s32 func_021213ac(void);
extern s32 func_02121184(void);
extern s32 func_021210bc(void);
extern s32 func_02121160(void);
extern s32 func_021210e4(void);
extern s16 func_0211e84c(void);
extern void func_02121330(void);
void func_020cff68(s16 *param_1) {
    u32 uVar8;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 bVar6;
    s32 bVar7;
    s32 bVar1;

    uVar8 = func_0208120c();
    iVar3 = func_0212108c();
    iVar4 = func_021210d0();
    iVar5 = func_021211d8();
    if (iVar5 != 5) {
        goto zb;
    }
    switch (func_0211e860()) {
        case 0x14:
            bVar6 = 1;
            break;
        default:
        zb:
            bVar6 = 0;
            break;
    }
    func_02081220(uVar8);
    switch (param_1[3]) {
        case 0:
            break;
        case 1:
            bVar7 = func_021212c4();
            if (bVar7) {
                func_02121464(0);
                func_02121448(*(u32 *) (param_1 + 6), *(u32 *) (param_1 + 8));
                param_1[3] = 2;
            }
            break;
        case 2:
            iVar3 = func_021213ac();
            if (iVar3 != 0) {
                param_1[3] = 3;
            }
            break;
        case 3:
            bVar7 = 0;
            bVar1 = func_02121184();
            if (bVar1) {
                iVar3 = func_021210bc();
                bVar7 = (iVar3 != 0);
            } else {
                bVar1 = func_02121160();
                if (bVar1) {
                    bVar7 = 1;
                }
            }
            if (bVar7 && func_021210e4()) {
                param_1[3] = 4;
            }
            break;
        case 4:
            iVar5 = func_0211e84c();
            if (iVar5 != 0) {
                if (iVar4 != 0) {
                    param_1[3] = 5;
                }
            } else {
                if (iVar3 != 0) {
                    param_1[3] = 5;
                }
            }
            break;
        case 5:
            param_1[0] = 2;
            param_1[2] = 1;
            func_02121330();
            break;
    }
    if (param_1[3] == 5) {
        return;
    }
    if (param_1[4] != 0) {
        param_1[0] = 4;
        return;
    }
    if (!bVar6) {
        return;
    }
    func_02121330();
    param_1[3] = 2;
}
