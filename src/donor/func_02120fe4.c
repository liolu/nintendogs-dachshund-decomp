/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d7b48 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d7b48.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02157b6c;
extern s32 func_0211e8ec(u32 p);
extern void func_02070a24(u32 a, s32 b, u32 c);
extern void func_0207099c(u32 a, s32 b);
void func_02120fe4(u32 param_1, u16 *param_2, s32 param_3) {
    s32 iVar1;

    iVar1 = func_0211e8ec(param_1);
    if (iVar1 == 2) {
        if (param_2 != 0) {
            ((u32 *) &data_02157b6c)[param_1] = 1;
            func_02070a24((u32) param_2, param_3, param_1);
            return;
        }
        ((u32 *) &data_02157b6c)[param_1] = 0;
        return;
    }
    if (iVar1 == 3) {
        if (param_2 != 0) {
            *(u32 *) &data_02157b6c = 1;
            func_0207099c((u32) param_2, param_3);
            return;
        }
        *(u32 *) &data_02157b6c = 0;
        return;
    }
}
