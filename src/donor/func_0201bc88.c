/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201bc88 from projets/nintendogs-shiba-friends/src/donor/func_0201bc88.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern s32 func_02025034(u8 *p, s32 a, s32 b, s32 c);
extern s32 func_02024ce8(u8 *p, s32 a, s32 b, s32 c);
void func_0201bc88(u8 *param_1, s32 param_2) {
    s32 uVar1;
    s32 iVar2;

    uVar1 = func_020280ec(param_1);
    iVar2 = func_02025034(param_1, 11, 26, ((s32) ((((s64) (uVar1)) * ((s64) (149)) + 0x800) >> 12)));
    if (iVar2 == 0) {
        uVar1 = func_020280ec(param_1);
        func_02025034(param_1, 42, 60, ((s32) ((((s64) (uVar1)) * ((s64) (100)) + 0x800) >> 12)));
    }
    uVar1 = func_020280ec(param_1);
    iVar2 = func_02024ce8(param_1, 6, 28, param_2 * ((s32) ((((s64) (uVar1)) * ((s64) (93)) + 0x800) >> 12)));
    if (iVar2 == 0) {
        uVar1 = func_020280ec(param_1);
        func_02024ce8(param_1, 43, 66, param_2 * ((s32) ((((s64) (uVar1)) * ((s64) (-421)) + 0x800) >> 12)));
        return;
    }
    return;
}
