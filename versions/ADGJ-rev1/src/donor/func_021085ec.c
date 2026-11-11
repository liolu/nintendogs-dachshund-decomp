/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021085ec from projets/nintendogs-chihuahua-friends/src/donor/func_021085ec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_01ffda04(s32 a);
extern void func_02027140(s32 a, s32 *b, s32 c);
extern void func_02069634(u8 *a, u8 *b, u8 *c);
extern void func_01ff832c(s32 a, s32 *b, u8 *c, u8 *d);
void func_021085ec(u8 *param_1, u32 param_2, u32 param_3, s32 param_4) {
    s32 iVar3;
    s32 aStack_50[12];
    s32 aStack_20[3];
    s32 t0;
    s32 t1;
    s32 t2;

    iVar3 = func_01ffda04(*(s16 *) (param_1 + 0x98));
    if (iVar3 == 0) {
        return;
    }
    func_02027140(iVar3, aStack_50, 17);
    t0           = aStack_50[0];
    t1           = aStack_50[1];
    t2           = aStack_50[2];
    aStack_20[0] = t0;
    aStack_20[1] = t1;
    aStack_20[2] = t2;
    if (*(s32 *) (param_1 + 0x164) != 0) {
        goto nz;
    }
    aStack_20[1]              = 0;
    *(s32 *) (param_1 + 0xb0) = ((s32) (((s64) (aStack_50[0]) * (s64) (410) + 0x800) >> 12));
    *(s32 *) (param_1 + 0xb4) = ((s32) (((s64) (*(volatile s32 *) &aStack_20[1]) * (s64) (410) + 0x800) >> 12));
    *(s32 *) (param_1 + 0xb8) = ((s32) (((s64) (aStack_20[2]) * (s64) (410) + 0x800) >> 12));
    return;
nz:
    func_02069634(param_1 + 0xbc, param_1 + 0x170, param_1 + 0xb0);
    *(u32 *) (param_1 + 0xb0) = *(u32 *) (param_1 + 0xb0) << param_2;
    *(s32 *) (param_1 + 0xb4) = param_4 + (*(s32 *) (param_1 + 0xb4) << param_3);
    *(u32 *) (param_1 + 0xb8) = *(u32 *) (param_1 + 0xb8) << param_2;
    aStack_20[1]              = 0;
    func_01ff832c(0x333, aStack_20, param_1 + 0xb0, param_1 + 0xb0);
}
