/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211310c from projets/nintendogs-shiba-friends/src/donor/func_0211310c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u8 data_02148ea8[];
extern u8 data_02148eac[];
extern u8 data_02148eb0[];
extern u8 data_02148eb4[];
extern u8 data_021560b4[];
extern u8 data_02148ea4[];
extern u8 data_02148e9c[];
extern u8 data_02148ea0[];
extern u8 data_02148e94[];
extern u8 data_02148e98[];
extern s32 func_01ffda04(s32 a);
extern s32 func_020280f8(s32 a);
extern void func_02027630(s32 a, s32 *b);
extern s32 func_02069098(s32 a, s32 b);
extern s16 func_02069a4c(s32 a);
void func_02113114(u32 *param_1, s32 param_2) {
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s32 iVar7;
    s32 p1;
    s32 p2;
    s16 sVar3;

    iVar4      = func_01ffda04(param_2);
    iVar6      = *(s32 *) data_02148ea8;
    iVar5      = func_020280f8(iVar4);
    p2         = *(s32 *) data_02148eac + ((s32) ((((s64) (iVar5) * (s64) (iVar6)) + 0x800) >> 12));
    iVar7      = *(s32 *) data_02148eb0;
    iVar5      = func_020280f8(iVar4);
    p1         = *(s32 *) data_02148eb4 + ((s32) ((((s64) (iVar5) * (s64) (iVar7)) + 0x800) >> 12));
    param_1[0] = *(u32 *) data_021560b4;
    param_1[1] = p1;
    param_1[2] = p2;
    func_02027630(iVar4, (s32 *) &param_1[3]);
    param_1[3] = ((s32) ((((s64) ((s32) param_1[3]) * (s64) (*(s32 *) data_02148ea4)) + 0x800) >> 12));
    iVar6      = *(s32 *) data_02148e9c;
    iVar5      = func_020280f8(iVar4);
    param_1[4] = *(u32 *) data_02148ea0 + ((s32) ((((s64) (iVar5) * (s64) (iVar6)) + 0x800) >> 12));
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0x1000;
    param_1[8] = 0;
    iVar7      = *(s32 *) data_02148ea8;
    iVar5      = func_020280f8(iVar4);
    iVar6      = *(s32 *) data_02148e94;
    iVar4      = func_020280f8(iVar4);
    iVar4      = func_02069098(*(s32 *) data_02148e98 + ((s32) ((((s64) (iVar4) * (s64) (iVar6)) + 0x800) >> 12)),
                               *(s32 *) data_02148eac + ((s32) ((((s64) (iVar5) * (s64) (iVar7)) + 0x800) >> 12)));
    sVar3      = func_02069a4c(iVar4);
    param_1[9] = (u32) ((((s64) sVar3 * 0x1680000) + 0x80000) >> 20);
}
