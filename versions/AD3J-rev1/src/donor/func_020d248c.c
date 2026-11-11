/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e4770 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e4770.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern void func_02111774(u8 *p, u32 *q, u32 r);
extern void func_020ec218(u32 *p, u32 n, u32 v);
void func_020d248c(u8 *param_1, u32 *param_2) {
    s64 lVar1;
    u8 *iVar5;
    s32 iVar4;
    s32 iVar3;
    s32 iVar2;
    s32 sum;
    u32 w;
    iVar5 = *(u8 **) (param_1 + 0x214);
    func_02111774(param_1, param_2, 0);
    if (0x802 < *(s32 *) (param_1 + 0xb0)) {
        *(s32 *) (param_1 + 0xb0) = 0x802;
    }
    if (0x802 < *(s32 *) (param_1 + 0xb4)) {
        *(s32 *) (param_1 + 0xb4) = 0x802;
    }
    if (0x802 < *(s32 *) (param_1 + 0xb8)) {
        *(s32 *) (param_1 + 0xb8) = 0x802;
    }
    if (*(s32 *) (param_1 + 0xb0) < -0x802) {
        *(s32 *) (param_1 + 0xb0) = -0x802;
    }
    if (*(s32 *) (param_1 + 0xb4) < -0x802) {
        *(s32 *) (param_1 + 0xb4) = -0x802;
    }
    if (*(s32 *) (param_1 + 0xb8) < -0x802) {
        *(s32 *) (param_1 + 0xb8) = -0x802;
    }
    *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) + 41;
    iVar2                     = *(s32 *) (param_1 + 0xb4);
    iVar3                     = *(s32 *) (param_1 + 0xb0);
    if (iVar2 <= 0) {
        iVar2 = -iVar2;
    }
    if (iVar3 <= 0) {
        iVar3 = -iVar3;
    }
    iVar4 = *(s32 *) (param_1 + 0xb8);
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    sum   = iVar4 + (iVar3 + iVar2);
    lVar1 = (s64) sum * (s64) * (s32 *) (param_1 + 0x24) + 0x800;
    w     = (u32) (lVar1 >> 12);
    if (*(s32 *) (iVar5 + 0x14) == 0) {
        func_020ec218((u32 *) (param_1 + 400), 2, w);
    }
}
