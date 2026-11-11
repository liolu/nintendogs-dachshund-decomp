/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209e038 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209e038.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef volatile s16 vs16;
extern s32 data_02154dd8;
extern s16 data_02154d88;
extern s32 data_02154de0;
extern void func_020ed318(s32 a);
extern void func_020ed5f0(s32 a, s32 b);
extern void func_020722a0(s32 *p, s32 v);
extern void func_02072320(s32 *p, s32 v);
extern void func_0207472c(s32 *p, s32 a, s32 b);
extern void func_02072214(s32 *p, s32 a, s32 b);
void func_020ece08(s32 param_1) {
    s32 *piVar1;

    piVar1 = (s32 *) &data_02154dd8;
    if (*(vs16 *) ((u8 *) piVar1 + 52) == 127) {
        *(s16 *) ((u8 *) piVar1 + 88) = *(vs16 *) ((u8 *) piVar1 + 52);
        return;
    }
    if (*piVar1 == 0) {
        goto blockA;
    }
    if (data_02154d88 == 100) {
        if (param_1 != 0) {
            *(s16 *) ((u8 *) piVar1 + 88) = *(s16 *) ((u8 *) piVar1 + 52);
            func_020ed318(0);
        }
    } else {
        func_020722a0(piVar1, param_1);
    }
    goto after;
blockA:
    if (param_1 == 0 && data_02154d88 == 100) {
        func_020ed5f0(100, *(s16 *) ((u8 *) piVar1 + 88));
    }
after:
    if (param_1 == 0) {
        goto zero;
    }
    func_02072320(piVar1 + 2, 0);
    return;
zero:
    func_02072320(piVar1 + 2, 0);
    piVar1 = (s32 *) &data_02154de0;
    func_0207472c(piVar1, 48, 6);
    func_02072214(piVar1, 127, 0);
    func_02072214(piVar1, 95, 300);
    return;
}
