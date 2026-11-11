/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02009b24 from projets/nintendogs-shiba-friends/src/donor/func_02009b24.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
s32 func_02009b24(s32 *param_1, s32 *param_2) {
    s32 dx = param_1[0] - param_2[0];
    s32 dz = param_1[2] - param_2[2];
    s64 t1 = (s64) dx * dx + 0x800;
    s64 t2 = (s64) dz * dz + 0x800;
    return (s32) ((u32) (t1 >> 12) + (u32) (t2 >> 12));
}
