/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02009e0c from projets/nintendogs-shiba-friends/src/donor/func_02009e0c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
BOOL func_02009e0c(s32 *param_1, s32 *param_2) {
    s64 w1 = (s64) param_1[2] * param_2[2] + 0x800;
    s64 w2 = (s64) param_1[0] * param_2[0] + 0x800;
    s64 w3 = (s64) param_1[1] * param_2[1] + 0x800;
    s32 t2 = (s32) (u32) (w2 >> 12);
    s32 t3 = (s32) (u32) (w3 >> 12);
    s32 s1 = (s32) (u32) (w1 >> 12);
    s32 s  = s1 + (t2 + t3);
    return s > 0;
}
