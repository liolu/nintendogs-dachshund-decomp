/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c7c24 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c7c24.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 a, b, c;
} T3;
extern void func_02069668(u8 *a, s32 *b, u8 *c);
extern s32 func_01ffda04(s32 a);
extern void func_02111a18(s32 a, u8 *p);
extern void func_020ec218(u8 *a, u32 b, s32 c);
void func_02111774(u8 *param_1, s32 *param_2, u32 param_3) {
    s32 local_28[3];
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;
    s16 idx;

    *(T3 *) local_28 = *(T3 *) param_2;
    if (local_28[0] > 0x333) {
        local_28[0] = 0x333;
    }
    if (local_28[1] > 0x333) {
        local_28[1] = 0x333;
    }
    if (local_28[2] > 0x333) {
        local_28[2] = 0x333;
    }
    if (local_28[0] < -0x333) {
        local_28[0] = -0x333;
    }
    if (local_28[1] < -0x333) {
        local_28[1] = -0x333;
    }
    if (local_28[2] < -0x333) {
        local_28[2] = -0x333;
    }
    func_02069668(param_1 + 0xbc, local_28, param_1 + 0xbc);
    idx = 0;
    do {
        if ((*(u32 *) (param_1 + 0x16c) & ((u32) 1 << (idx + 3))) != 0 && (iVar1 = func_01ffda04(idx)) != 0) {
            func_02111a18(iVar1, param_1);
        }
        idx = (s16) (idx + 1);
    } while (idx < 3);
    if (*(u16 *) (param_1 + 0xa2) == 0) {
        *(s32 *) (param_1 + 0xb0) = *(s32 *) (param_1 + 0xb0) + (param_2[0] << param_3);
        *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) + (param_2[2] << param_3);
    }
    if (*(s32 *) (param_1 + 0xb0) > 0x99a) {
        *(s32 *) (param_1 + 0xb0) = 0x99a;
    }
    if (*(s32 *) (param_1 + 0xb4) > 0x99a) {
        *(s32 *) (param_1 + 0xb4) = 0x99a;
    }
    if (*(s32 *) (param_1 + 0xb8) > 0x99a) {
        *(s32 *) (param_1 + 0xb8) = 0x99a;
    }
    if (*(s32 *) (param_1 + 0xb0) < -0x99a) {
        *(s32 *) (param_1 + 0xb0) = -0x99a;
    }
    if (*(s32 *) (param_1 + 0xb4) < -0x99a) {
        *(s32 *) (param_1 + 0xb4) = -0x99a;
    }
    if (*(s32 *) (param_1 + 0xb8) < -0x99a) {
        *(s32 *) (param_1 + 0xb8) = -0x99a;
    }
    if (*(s16 *) (param_1 + 0x90) == 1) {
        iVar3 = *(s32 *) (param_1 + 0xb4);
        iVar1 = *(s32 *) (param_1 + 0xb0);
        if (iVar3 <= 0) {
            iVar3 = -iVar3;
        }
        if (iVar1 <= 0) {
            iVar1 = -iVar1;
        }
        iVar2 = *(s32 *) (param_1 + 0xb8);
        if (iVar2 <= 0) {
            iVar2 = -iVar2;
        }
        func_020ec218(param_1 + 400, 2, iVar1 + iVar3 + iVar2);
    }
}
