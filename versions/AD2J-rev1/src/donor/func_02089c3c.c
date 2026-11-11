/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02089c3c from projets/nintendogs-shiba-friends/src/donor/func_02089c3c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
u32 func_02089c3c(u32 param_1, s32 param_2, s32 param_3, u8 *param_4, u16 param_5, u16 param_6) {
    s32 iVar2;
    u32 uVar1;
    if (param_2 <= param_3) {
        do {
            iVar2 = param_2 + ((param_3 - param_2) >> 1);
            uVar1 = *(u16 *) (param_4 + iVar2 * 2);
            if (uVar1 > param_1) {
                param_3 = iVar2 - 1;
            } else {
                if (uVar1 < param_1) {
                    param_2 = iVar2 + 1;
                } else {
                    return (u32) param_5 + iVar2;
                }
            }
        } while (param_2 <= param_3);
    }
    return (u32) param_6;
}
