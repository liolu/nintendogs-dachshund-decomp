/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b8174 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b8174.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153708;
extern s32 func_01ffda04(s32 x);
extern s32 func_02028144(s32 x);
extern s32 func_020c98e0(s32 x);
u32 *func_0209fe40(s32 param_1) {
    u32 *ret = 0;
    s32 iVar1;
    u8 *p;
    if (param_1 == 0x30000) {
        p     = *(u8 **) &data_02153708;
        iVar1 = func_01ffda04((s32) * (s16 *) (p + 0x1c));
        iVar1 = func_02028144(iVar1);
        ret   = (u32 *) func_020c98e0(iVar1) + 3;
    }
    return ret;
}
