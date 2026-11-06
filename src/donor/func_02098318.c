/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02098318 from projets/nintendogs-chihuahua-friends/src/donor/func_02098318.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern int *data_02153708;
extern int *data_02153700;
extern u16 data_021291c8[];
extern int *data_0214b150;
extern s32 func_01ffda04(int a);
extern u32 func_02028144(int a);
extern void func_020ca884(int a, int b, int c);
extern s32 func_02098618(int a, int b, int c);
extern void func_020c96fc(int a);
extern void func_02027ba4(int a, int b);
extern void func_020ca7b8(int a, int b, int c, int d);
extern void func_020c802c(int a, int b, int c, int d, int e, int f);
extern void func_020ca1d8(int a, int b, int c);
extern u8 func_0202814c(int a);
u8 func_02098318(int param_1, int param_2) {
    s32 iVar3;
    u32 puVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 sVar1;

    iVar3  = func_01ffda04(*(s16 *) ((u8 *) data_02153708 + 0xe));
    puVar4 = func_02028144(iVar3);
    iVar7  = *(s16 *) (param_2 + 4);
    iVar5  = *(s16 *) data_02153700;
    iVar6  = iVar5;
    switch (iVar5) {
        case 0:
            break;
        case 1:
            if (iVar7 >= 1 && iVar7 <= 3) {
                iVar6 = 2;
            }
            break;
        case 2:
            if (iVar7 < 1) {
                goto k2a;
            }
            if (iVar7 <= 3) {
                iVar6 = 3;
                break;
            }
        k2a:
            iVar6 = 1;
            break;
        case 3:
            if (iVar7 < 1) {
                goto k3a;
            }
            if (iVar7 <= 3) {
                iVar6 = 4;
                break;
            }
        k3a:
            iVar6 = 2;
            break;
        case 4:
            if (iVar7 < 1) {
                goto k4a;
            }
            if (iVar7 <= 3) {
                iVar6 = 5;
                break;
            }
        k4a:
            iVar6 = 3;
            break;
        case 5:
            if (iVar7 < 1 || iVar7 > 3) {
                iVar6 = 4;
            }
            break;
    }
    if (iVar6 != iVar5) {
        func_020ca884(puVar4, *(s16 *) ((u8 *) data_02153708 + 6), iVar6);
    }
    iVar6 = func_02098618(*(s16 *) ((u8 *) data_02153708 + 6), *(s16 *) data_02153700, iVar7);
    func_020c96fc(iVar6);
    iVar6 = (s16) (iVar7 - 1);
    if (iVar6 < 0 || iVar6 >= 3) {
        iVar6 = 3;
    }
    func_02027ba4(iVar3, data_021291c8[iVar6]);
    func_020ca7b8(puVar4, *(s16 *) ((u8 *) data_02153708 + 6), *(s16 *) data_02153700, iVar7);
    sVar1 = *(s16 *) ((u8 *) data_02153708 + 6);
    switch (sVar1) {
        case 0:
            goto c0;
        case 1:
            goto c1;
        case 2:
            goto c2;
    }
    goto after;
c0:
    func_020c802c(puVar4, sVar1, *(s16 *) data_02153700, iVar7, *(s16 *) (param_2 + 8), 0);
    goto after;
c1:
    func_020c802c(puVar4, sVar1, *(s16 *) data_02153700, iVar7, *(s16 *) (param_2 + 0xe), *(s16 *) (param_2 + 0xc));
    goto after;
c2:
    func_020c802c(puVar4, sVar1, *(s16 *) data_02153700, iVar7, *(s16 *) (param_2 + 0x10), 0);
after:
    func_020ca1d8(puVar4, (int) ((u8 *) data_0214b150 + 28), (int) ((u8 *) data_0214b150 + 44));
    return func_0202814c(iVar3);
}
