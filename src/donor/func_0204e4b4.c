/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204eb80 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0204eb80.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_02038094(u8 *p);
extern void func_0203e2b8(u8 *p, s32 v);
u32 func_0204e4b4(u8 *param_1) {
    s32 iVar1;

    iVar1 = func_02038094(param_1);
    switch (iVar1) {
        case 0:
            func_0203e2b8(param_1, 620);
            return 1;
        case 1:
            func_0203e2b8(param_1, 0x26d);
            return 1;
        case 2:
            func_0203e2b8(param_1, 0x26e);
            return 1;
        case 3:
            func_0203e2b8(param_1, 0x26f);
            return 1;
        default:
            return 0;
    }
}
