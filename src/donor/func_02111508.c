/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c79b8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c79b8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 a, b, c;
} T3;
extern s64 data_021245c4;
extern void func_02069668(u8 *a, s32 *b, u8 *c);
extern s32 func_01ffda04(s32 a);
extern void func_02111a18(s32 a, u8 *p);
extern s32 func_020069bc(s32 *a, s32 *b);
extern void func_0210999c(u8 *a, s32 *b, s32 c, u8 *d);
extern void func_020ec218(u8 *a, u32 b, s32 c);
void func_02111508(u8 *param_1, s32 *param_2, s32 param_3) {
    s32 iVar5;
    s32 iVar2;
    s32 iVar4;
    s64 lVar1;
    s32 local_30[3];
    s32 aiStack_24[3];

    *(T3 *) local_30 = *(T3 *) param_2;
    if (local_30[0] > 0x333) {
        local_30[0] = 0x333;
    }
    if (local_30[1] > 0x333) {
        local_30[1] = 0x333;
    }
    if (local_30[2] > 0x333) {
        local_30[2] = 0x333;
    }
    if (-0x333 > local_30[0]) {
        local_30[0] = -0x333;
    }
    if (local_30[1] < -0x333) {
        local_30[1] = -0x333;
    }
    if (local_30[2] < -0x333) {
        local_30[2] = -0x333;
    }
    func_02069668(0xbc + param_1, local_30, param_1 + 0xbc);
    iVar5 = 0;
    do {
        if ((*(u32 *) (param_1 + 0x16c) & (1 << (iVar5 + 3))) != 0) {
            iVar2 = func_01ffda04(iVar5);
            if (iVar2 != 0) {
                func_02111a18(iVar2, param_1);
            }
        }
        iVar5 = (s16) (iVar5 + 1);
    } while (3 > iVar5);
    *(T3 *) local_30 = *(T3 *) param_2;
    lVar1 =
        (s64) local_30[0] * (s64) local_30[0] + (s64) local_30[1] * (s64) local_30[1] + (s64) local_30[2] * (s64) local_30[2];
    if (lVar1 >= data_021245c4) {
        iVar5 = func_020069bc(local_30, aiStack_24);
    } else {
        iVar5 = 0;
    }
    if (iVar5 != 0) {
        func_0210999c(param_1 + 0xb0, aiStack_24, param_3, param_1 + 0xb0);
    }
    if (0 < param_2[0]) {
        *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) + 0x52;
    } else {
        *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) - 0x52;
    }
    if (param_2[2] > 0) {
        *(s32 *) (0xb8 + param_1) = *(s32 *) (param_1 + 0xb8) + 0x52;
    } else {
        *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) - 0x52;
    }
    *(s32 *) (0xb0 + param_1) = *(s32 *) (param_1 + 0xb0) + (param_2[0] >> 3);
    *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) + (param_2[2] >> 3);
    if (*(s32 *) (param_1 + 0xb0) > 0x99a) {
        *(s32 *) (param_1 + 0xb0) = 0x99a;
    }
    if (*(s32 *) (param_1 + 0xb4) > 0x99a) {
        *(s32 *) (0xb4 + param_1) = 0x99a;
    }
    if (*(s32 *) (param_1 + 0xb8) > 0x99a) {
        *(s32 *) (param_1 + 0xb8) = 0x99a;
    }
    if (*(s32 *) (0xb0 + param_1) < -0x99a) {
        *(s32 *) (param_1 + 0xb0) = -0x99a;
    }
    if (*(s32 *) (param_1 + 0xb4) < -0x99a) {
        *(s32 *) (param_1 + 0xb4) = -0x99a;
    }
    if (*(s32 *) (0xb8 + param_1) < -0x99a) {
        *(s32 *) (0xb8 + param_1) = -0x99a;
    }
    if (*(s16 *) (param_1 + 0x90) == 1) {
        iVar2 = *(s32 *) (param_1 + 0xb4);
        iVar5 = *(s32 *) (0xb0 + param_1);
        if (0 >= iVar2) {
            iVar2 = -iVar2;
        }
        if (iVar5 <= 0) {
            iVar5 = -iVar5;
        }
        iVar4 = *(s32 *) (param_1 + 0xb8);
        if (0 >= iVar4) {
            iVar4 = -iVar4;
        }
        func_020ec218(param_1 + 400, 2, iVar4 + (iVar5 + iVar2));
    }
}
