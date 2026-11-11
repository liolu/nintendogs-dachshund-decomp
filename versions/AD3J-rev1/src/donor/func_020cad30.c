/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020956b0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020956b0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
u32 func_020cad30(u8 *param_1, u8 *param_2) {
    u32 r2 = 0;
    s32 iVar3;
    s32 iVar2;
    if ((*(u32 *) param_1 != 0 || *(u32 *) (param_1 + 4) != 0) && (*(u32 *) param_2 != 0 || *(u32 *) (param_2 + 4) != 0)) {
        iVar3 = (param_1[5] * 384 + (param_1[4] - 1) * 32) + (param_1[3] - 1);
        iVar2 = (param_2[5] * 384 + (param_2[4] - 1) * 32) + (param_2[3] - 1);
        if (iVar3 < iVar2) {
            r2 = 1;
        } else if (iVar3 == iVar2) {
            s32 x1 = param_1[1];
            s32 y1 = param_2[1];
            s32 m1 = x1 * 60;
            s32 n1 = y1 * 60;
            s32 a  = param_1[2] * 3600 + param_1[1] * 60 + param_1[0];
            s32 b  = param_2[2] * 3600 + param_2[1] * 60 + param_2[0];
            if (a < b) {
                r2 = 1;
            }
        }
    }
    return r2;
}
