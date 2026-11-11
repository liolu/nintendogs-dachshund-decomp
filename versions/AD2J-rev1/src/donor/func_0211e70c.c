/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov007_0215d8e0 from https://github.com/chasmlol/nintendogs-decomp src/overlays/ov007/func_ov007_0215d8e0.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_021560e8;
extern void func_0211d138(void);
extern u8 *func_0212015c(void);
extern s32 func_02066250(void *cb, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0211e70c(u32 param_1, u32 param_2) {
    u8 *iVar1;

    iVar1 = func_0212015c();
    if (param_2 > *(u16 *) (iVar1 + 0x4e)) {
        return;
    }
    if (*(u32 *) (*(u8 **) &data_021560e8 + 0x3c) != 0) {
        *(u32 *) (*(u8 **) &data_021560e8 + 0x3c) = 0;
        if (func_02066250(func_0211d138, 0, param_1, param_2, 0xffff, 5, 2) != 2) {
            *(u32 *) (*(u8 **) &data_021560e8 + 0x3c) = 1;
        }
    }
}
