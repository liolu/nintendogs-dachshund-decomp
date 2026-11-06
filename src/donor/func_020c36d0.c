/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208dd28 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208dd28.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern vu32 data_02154c24[];
u32 func_020c36d0(u32 *param_1) {
    u32 uVar2 = 0;
    u32 bVar1 = 1;
    u32 a     = data_02154c24[0];
    u32 b     = data_02154c24[0];
    if (a == 0) {
        if (data_02154c24[1] == 0) {
            bVar1 = 0;
        }
    }
    if (bVar1 != 0) {
        if (b == param_1[0]) {
            if (data_02154c24[1] == param_1[1]) {
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}
