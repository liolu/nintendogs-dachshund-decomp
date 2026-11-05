/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211c36c from projets/nintendogs-shiba-friends/src/donor/func_0211c36c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern s32 func_02111b3c(s32 *a, u32 b, s32 c, s32 *d, s32 *e);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
u32 func_0211c374(s32 *param_1, u32 param_2, s32 param_3) {
    s32 *pl;
    s32 iVar3;
    s32 iVar2;
    s32 iVar1;
    s32 local_44;
    s32 local_40[7];

    local_44 = 0;
    iVar3    = 0;
    if (0 < param_1[0]) {
        iVar2 = 0;
        do {
            if (((s32 *) param_1[3])[iVar3] != 1) {
                s32 *q1;
                pl          = local_40 + 3;
                local_40[0] = 0;
                local_40[1] = 0;
                local_40[2] = 0;
                q1          = (s32 *) param_1[1];
                pl[0]       = 0;
                pl[1]       = 0;
                pl[2]       = 0;
                iVar1       = func_02111b3c((s32 *) ((u8 *) q1 + iVar2), param_2, param_3, local_40, pl);
                if (iVar1 != 0) {
                    s32 *dst = (s32 *) (param_1[1] + iVar2);
                    func_02069668(dst, local_40, dst);
                    local_44 = 1;
                }
            }
            iVar3 = iVar3 + 1;
            iVar2 = iVar2 + 0xc;
        } while (iVar3 < param_1[0]);
    }
    return local_44;
}
