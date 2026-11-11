/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca7c8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ca7c8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 w[3];
} T12;
extern u32 data_0214907c;
extern s32 data_02148f24;
extern s32 data_02148f20;
extern void func_020069bc(s32 *a, s32 *b);
extern void func_01ff832c(u32 a, s32 *b, s32 *c, s32 *d);
extern u32 func_021081c0(void);
extern s32 func_01ffda04(s32 a);
extern s32 func_020280f8(s32 a);
extern s32 func_02069098(s32 a, s32 b);
extern s16 func_02069878(s32 a, u32 b);
void func_02114318(s32 *param_1, s32 *param_2, u32 param_3, s32 param_4) {
    s32 local_30[3];
    s32 local_24[3];
    s32 iVar3;
    u32 iVar4;
    s16 sVar2;
    *(T12 *) param_1 = *(T12 *) param_2;
    local_30[0]      = -param_1[0];
    local_30[1]      = 0;
    local_30[2]      = -param_1[2];
    iVar3            = data_0214907c;
    func_020069bc(local_30, local_30);
    local_24[0] = param_1[0];
    local_24[1] = 0;
    local_24[2] = param_1[2];
    func_01ff832c(iVar3, local_30, local_24, param_1 + 3);
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar4      = func_021081c0();
    iVar3      = func_01ffda04(param_4);
    iVar3      = func_020280f8(iVar3);
    iVar3      = (iVar3 * 2) / 2 * 2;
    param_1[1] = data_02148f24 + ((s32) (((s64) (data_02148f20) * (iVar3) + 0x800) >> 12));
    iVar3      = func_02069098(iVar3, param_3);
    sVar2      = func_02069878(iVar3, iVar4);
    param_1[9] = (s32) ((((s64) sVar2 * 23592960) + 0x80000) >> 20);
}
