/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov007_0215d7f8 from https://github.com/chasmlol/nintendogs-decomp src/overlays/ov007/func_ov007_0215d7f8.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_0211fbb0(u8 *p);
extern u8 *data_021560e8;
void func_0211e630(u8 *param_1) {
    s32 iVar1 = func_0211fbb0(param_1);
    if (iVar1 != 0) {
        *(u32 *) (data_021560e8 + 0x28) = 0;
    }
}
