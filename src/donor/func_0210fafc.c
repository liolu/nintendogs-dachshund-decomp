/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c5d28 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c5d28.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern s32 func_021077a4(u8 *p, u32 a, s16 b, s32 c);
extern s32 func_01ffda04(s32 a);
extern void func_02027044(s32 a, u32 b);
extern void func_020274b8(s32 a, u32 b);
extern void func_02027474(s32 a, s8 b);
u32 func_0210fafc(u8 *param_1, u32 param_2, s32 param_3) {
    s32 iVar2;
    s32 iVar3;

    if (func_021077a4(param_1, 7, *(s16 *) (param_1 + 0x98), param_3)) {
        iVar2 = func_01ffda04(*(s16 *) (param_1 + 0x98));
        iVar3 = func_01ffda04(param_3);
        func_02027044(iVar2, 0x26);
        func_02027044(iVar3, 0x26);
        func_020274b8(iVar2, param_2);
        func_020274b8(iVar3, param_2);
        func_02027474(iVar2, (s8) param_3);
        func_02027474(iVar3, (s8) * (s16 *) (param_1 + 0x98));
        return 1;
    }
    return 0;
}
