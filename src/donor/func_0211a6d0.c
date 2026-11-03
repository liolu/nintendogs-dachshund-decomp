/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d1244 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d1244.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[11];
} Ent;
u32 func_0211a6d0(s32 *param_1, s32 param_2) {
    s32 iVar1;
    Ent *piVar2;
    u8 *base;
    base  = (u8 *) param_1 + 32;
    iVar1 = param_1[0];
    if (iVar1 <= 1) {
        return 0;
    }
    if (param_2 < 0 && iVar1 - 1 < param_2) {
        return 0;
    }
    if (param_2 <= iVar1 - 2) {
        piVar2 = (Ent *) (base + param_2 * 44);
        do {
            *piVar2 = *(Ent *) ((u8 *) piVar2 + 44);
            param_2 = param_2 + 1;
            piVar2  = (Ent *) ((u8 *) piVar2 + 44);
        } while (param_2 <= param_1[0] - 2);
    }
    param_1[0] = param_1[0] - 1;
    return 1;
}
