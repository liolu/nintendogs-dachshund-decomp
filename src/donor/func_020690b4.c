/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02004860 from projets/code-lyoko/src/donor/func_02004860.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef long long s64;
typedef int s32;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern s32 func_020690b4(const Vec *a, const Vec *b);
s32 func_020690b4(const Vec *a, const Vec *b) {
    s64 t;
    s32 d;

    d = a->x - b->x;
    t = (s64) d * d;
    d = a->y - b->y;
    t += (s64) d * d;
    d = a->z - b->z;
    t += (s64) d * d;
    t <<= 2;

    (*(vu16 *) 0x040002B0) = 1;
    (*(u64 *) 0x040002B8)  = t;

    while ((*(vu16 *) 0x040002B0) & 0x8000) {
    }
    return ((s32) (*(vu32 *) 0x040002B4) + 1) >> 1;
}
