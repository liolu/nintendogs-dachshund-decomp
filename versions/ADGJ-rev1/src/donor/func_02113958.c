/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02113958 from projets/nintendogs-chihuahua-friends/src/donor/func_02113958.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 a, b, c;
} T3;
typedef struct {
    s32 v;
} W1;
extern u8 *data_02148f10;
extern s32 data_02148f0c;
extern s32 data_02148e8c;
extern s32 data_02148f04;
extern s32 func_020069bc(s32 *a, s32 *b);
extern s32 func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_021081c8(void);
extern s32 func_01ffda04(s32 a);
extern s32 func_020280f8(s32 a);
extern s32 func_02069098(u32 a, u32 b);
extern s16 func_02069878(s32 a, s32 b);
void func_02113958(s32 *param_1, s32 *param_2, u32 param_3, s32 param_4) {
    s64 lVar1;
    s16 sVar2;
    u32 uVar3;
    s32 iVar4;
    s32 iVar5;
    s32 base;
    W1 pp;
    s32 local_30[3];
    s32 local_24[4];

    *(T3 *) param_1 = *(T3 *) param_2;
    local_30[0]     = -param_1[0];
    local_30[1]     = 0;
    local_30[2]     = -param_1[2];
    iVar4           = (s32) data_02148f10;
    func_020069bc(local_30, local_30);
    local_24[0] = param_1[0];
    local_24[1] = 0;
    local_24[2] = param_1[2];
    func_01ff832c(iVar4, local_30, local_24, param_1 + 3);
    param_1[6]             = 0;
    param_1[7]             = 0x1000;
    param_1[8]             = 0;
    iVar4                  = func_021081c8();
    iVar5                  = func_01ffda04(param_4);
    iVar5                  = func_020280f8(iVar5);
    pp.v                   = param_3;
    base                   = data_02148f0c;
    iVar5                  = (iVar5 * 2) / 2;
    lVar1                  = (s64) iVar5 * (s64) data_02148e8c + 0x800;
    uVar3                  = (u32) ((u64) lVar1 >> 12);
    lVar1                  = (s64) data_02148f04 * (s64) (s32) uVar3 + 0x800;
    param_1[1]             = base + (s32) ((u64) lVar1 >> 12);
    iVar5                  = func_02069098(uVar3, pp.v);
    sVar2                  = func_02069878(iVar5, iVar4);
    lVar1                  = (s64) (s32) sVar2 * 0x1680000;
    *(u32 *) (param_1 + 9) = (u32) ((lVar1 + 0x80000) >> 20);
}
