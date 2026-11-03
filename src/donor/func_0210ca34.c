/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c2c24 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c2c24.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148c70;
extern void func_02069668(void *a, void *b, void *c);
void func_0210ca34(u8 *param_1, s32 *param_2) {
    s64 lVar1;
    s32 iVar3;
    s32 *piVar2;
    s32 b0;

    iVar3 = *(s32 *) (param_1 + 0x214);
    func_02069668(param_1 + 0xbc, param_2, param_1 + 0xbc);
    piVar2                    = &data_02148c70;
    b0                        = *(s32 *) (param_1 + 0xb0);
    lVar1                     = (s64) b0 * (s64) data_02148c70 + 0x800;
    *(s32 *) (param_1 + 0xb0) = b0 - (s32) (lVar1 >> 12);
    lVar1                     = (s64) * (s32 *) (param_1 + 0xb8) * (s64) *piVar2 + 0x800;
    *(s32 *) (param_1 + 0xb8) = *(s32 *) (param_1 + 0xb8) - (s32) (lVar1 >> 12);
    *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) + *(s32 *) (iVar3 + 0xc) / 2;
}
