/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c4500 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c4500.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148c50;
extern s32 data_02148c4c;
extern s32 data_02148c48;
extern s32 func_02069098(s32 a, s32 b);
u32 func_0210e310(s32 param_1) {
    s32 iVar2;
    s32 iVar3;
    s32 d;

    iVar3 = data_02148c50;
    if (param_1 > iVar3) {
        return 0x1000;
    }
    iVar2 = data_02148c4c;
    if (param_1 > iVar2) {
        iVar3 = func_02069098(0x1000 - data_02148c48, iVar3 - iVar2);
        d     = param_1 - data_02148c4c;
        return data_02148c48 + ((s32) ((((s64) (d) * (s64) (iVar3)) + 0x800) >> 12));
    }
    if (param_1 > -iVar2) {
        iVar3 = func_02069098(data_02148c48, iVar2);
        return ((s32) ((((s64) (param_1) * (s64) (iVar3)) + 0x800) >> 12));
    }
    if (param_1 > -iVar3) {
        iVar3 = func_02069098(0x1000 - data_02148c48, iVar3 - iVar2);
        d     = param_1 + data_02148c4c;
        return ((s32) ((((s64) (d) * (s64) (iVar3)) + 0x800) >> 12)) - data_02148c48;
    }
    return 0xfffff000;
}
