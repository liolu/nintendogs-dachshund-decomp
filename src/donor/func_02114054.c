/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca504 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ca504.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 data_02148f18;
extern s16 data_021560a8;
extern u32 data_021560b8;
extern u8 *data_02153704;
extern u32 data_02148f14;
extern u8 *func_01ffda04(s32 a);
extern void func_0211299c(u8 *p, s32 *q);
extern s32 func_020280f8(u8 *p);
extern void func_021170e8(s32 *a, s32 *b, s32 c, s32 d, u16 e);
extern s32 func_0206902c(s32 v);
void func_02114054(s32 *param_1, s32 param_2) {
    s64 lVar1;
    s64 lVar2;
    s32 iVar4;
    s32 iVar5;

    iVar4 = (s32) func_01ffda04(param_2);
    func_0211299c((u8 *) iVar4, param_1 + 3);
    iVar5 = data_02148f18;
    iVar4 = func_020280f8((u8 *) iVar4);
    lVar1 = (s64) iVar4 * (s64) iVar5 + 0x800;
    func_021170e8(param_1, param_1 + 3, (u32) (lVar1 >> 12), 0, (u16) data_021560a8);
    param_1[1] = data_021560b8;
    iVar5      = *(s32 *) (data_02153704 + 0xc);
    lVar2      = (s64) param_1[0] * (s64) param_1[0] + 0x800;
    lVar1      = (s64) param_1[2] * (s64) param_1[2] + 0x800;
    iVar4      = func_0206902c((u32) (lVar2 >> 12) + (u32) (lVar1 >> 12));
    if (iVar4 > iVar5) {
        if (param_1[1] < 0x8000) {
            param_1[1] = 0x8000;
        }
    } else if (param_1[1] < 0x1000) {
        param_1[1] = 0x1000;
    }
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    param_1[9] = data_02148f14;
}
