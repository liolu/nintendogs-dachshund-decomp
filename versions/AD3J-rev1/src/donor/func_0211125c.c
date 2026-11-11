/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c770c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c770c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 w[3];
} T12;
extern void func_02069668(u8 *a, s32 *b, u8 *c);
extern void func_020ec218(u8 *a, s32 b, s32 c);
void func_0211125c(u8 *param_1, s32 *param_2, s32 param_3, s32 param_4, s32 param_5) {
    s32 local_20[3];
    s32 iVar3;
    s32 iVar2;
    *(T12 *) local_20 = *(T12 *) param_2;
    func_02069668(param_1 + 0xbc, local_20, param_1 + 0xbc);
    if (*(s32 *) (param_1 + 0xb4) >= 0) {
        return;
    }
    *(s32 *) (param_1 + 0xb4) = -((s32) (((s64) (*(s32 *) (param_1 + 0xb4)) * (param_3) + 0x800) >> 12));
    iVar2                     = *(s32 *) (param_1 + 0xb0);
    iVar3                     = (iVar2 > 0) ? iVar2 : -iVar2;
    if (iVar3 < 41) {
        *(s32 *) (param_1 + 0xb0) = 0;
    } else {
        *(s32 *) (param_1 + 0xb0) = ((s32) (((s64) (iVar2) * (param_4) + 0x800) >> 12));
    }
    iVar2 = *(s32 *) (param_1 + 0xb8);
    iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
    if (iVar3 < 41) {
        *(s32 *) (param_1 + 0xb8) = 0;
    } else {
        *(s32 *) (param_1 + 0xb8) = ((s32) (((s64) (iVar2) * (param_4) + 0x800) >> 12));
    }
    if (param_5 < 0) {
        return;
    }
    iVar3 = *(s32 *) (param_1 + 0xb4);
    iVar3 = (iVar3 > 0) ? iVar3 : -iVar3;
    func_020ec218(param_1 + 400, 0, iVar3);
}
