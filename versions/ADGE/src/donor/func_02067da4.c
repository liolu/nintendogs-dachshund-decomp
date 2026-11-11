/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063204 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fx/fx_vec.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef long long s64;
typedef int s32;
typedef short s16;
typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef struct {
    s16 x, y, z;
} UnkVecFx16;
extern void func_02067da4(const UnkVecFx16 *src, UnkVecFx16 *dst);
void func_02067da4(const UnkVecFx16 *src, UnkVecFx16 *dst) {
    s64 t = src->x * src->x;
    s32 sqrt;
    s64 div;

    t += src->y * src->y;
    t += src->z * src->z;

    (*(vu16 *) 0x04000280) = 2;
    (*(vu64 *) 0x04000290) = 1LL << 56;
    (*(vu64 *) 0x04000298) = t;

    (*(vu16 *) 0x040002B0) = 1;
    (*(u64 *) 0x040002B8)  = t << 2;

    while ((*(vu16 *) 0x040002B0) & 0x8000) {
    }
    sqrt = (s32) (*(vu32 *) 0x040002B4);

    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }
    div = (s64) (*(u64 *) 0x040002A0);

    div *= sqrt;

    dst->x = (s16) ((div * src->x + (1LL << 44)) >> 45);
    dst->y = (s16) ((div * src->y + (1LL << 44)) >> 45);
    dst->z = (s16) ((div * src->z + (1LL << 44)) >> 45);
}
