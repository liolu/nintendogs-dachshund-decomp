/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020cf77c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020cf77c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u8 data_021490a0[];
extern u8 data_021245cc[];
extern s32 func_021128c0(void);
extern void func_02069634(u32 *a, u32 *b, u32 *c);
extern void func_020069bc(u32 *a, u32 *b);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
void func_02118c18(u32 *param_1, u32 *param_2) {
    s64 lVar1;
    s32 iVar2;
    u32 loc[3];
    iVar2 = func_021128c0();
    if (iVar2 != 0) {
        *(s32 *) data_021490a0 = -1;
    }
    iVar2 = *(s32 *) data_021490a0;
    if (iVar2 == -1) {
        *(s32 *) data_021490a0 = 10;
    } else if (iVar2 == 0) {
        *(s32 *) data_021490a0 = -2;
    } else {
        *(s32 *) data_021490a0 = iVar2 - 1;
    }
    if (*(s32 *) data_021490a0 <= 0) {
        return;
    }
    func_02069634(param_1 + 3, param_1, loc);
    lVar1 = (s64) (s32) loc[0] * (s64) (s32) loc[0] + (s64) (s32) loc[1] * (s64) (s32) loc[1] +
            (s64) (s32) loc[2] * (s64) (s32) loc[2];
    if (lVar1 >= (s64) * (s64 *) data_021245cc) {
        func_020069bc(loc, loc);
    }
    iVar2 = *(s32 *) data_021490a0;
    if (iVar2 > 5) {
        iVar2 = (10 - iVar2) * -0x800;
    } else {
        iVar2 = iVar2 * -0x800;
    }
    func_01ff832c(iVar2, loc, param_1, param_2);
}
