/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02004b2c from projets/code-lyoko/src/auto/func_02004b2c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long long s64;
typedef int s32;
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;
extern s32 func_020695f0(const Vec *a, const Vec *b);
s32 func_020695f0(const Vec *a, const Vec *b) {
    return (s32) (((s64) a->x * b->x + (s64) a->y * b->y + (s64) a->z * b->z + (1 << 11)) >> 12);
}
