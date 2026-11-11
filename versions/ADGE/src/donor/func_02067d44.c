/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063330 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_vec.c (license: none), reused by
 * tools/donor_match.py */
typedef long long s64;
typedef int s32;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern void func_02067d44(s32 a, const Vec *v1, const Vec *v2, Vec *dst);
void func_02067d44(s32 a, const Vec *v1, const Vec *v2, Vec *dst) {
    dst->x = v2->x + (s32) (((s64) a * v1->x) >> 12);
    dst->y = v2->y + (s32) (((s64) a * v1->y) >> 12);
    dst->z = v2->z + (s32) (((s64) a * v1->z) >> 12);
}
