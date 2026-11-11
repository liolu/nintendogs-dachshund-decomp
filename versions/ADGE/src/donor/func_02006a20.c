/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* VEC_Normalize from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fx/auto/VEC_Normalize.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed long s32;
typedef long long s64;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s64 vs64;
typedef s32 fx32;
typedef struct VecFx32 {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
fx32 func_02006a20(const VecFx32 *source, VecFx32 *destination) {
    s64 squaredMagnitude = (s64) source->x * source->x;
    fx32 magnitude;

    squaredMagnitude += (s64) source->y * source->y;
    squaredMagnitude += (s64) source->z * source->z;

    (*(vu16 *) 0x04000280) = 2;
    (*(vu64 *) 0x04000290) = 0x0100000000000000ULL;
    (*(vs64 *) 0x04000298) = squaredMagnitude;
    (*(vu16 *) 0x040002b0) = 1;
    (*(u64 *) 0x040002b8)  = (u64) (squaredMagnitude * 4);

    while ((*(vu16 *) 0x040002b0) & 0x8000) {
    }
    magnitude = (fx32) (*(vu32 *) 0x040002b4);
    while ((*(vu16 *) 0x04000280) & 0x8000) {
    }

    squaredMagnitude = (*(vs64 *) 0x040002a0);
    squaredMagnitude *= magnitude;
    destination->x = (fx32) ((squaredMagnitude * source->x + (1LL << 44)) >> 45);
    destination->y = (fx32) ((squaredMagnitude * source->y + (1LL << 44)) >> 45);
    destination->z = (fx32) ((squaredMagnitude * source->z + (1LL << 44)) >> 45);

    return (magnitude + 1) >> 1;
}
