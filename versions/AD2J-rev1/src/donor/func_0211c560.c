/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211c558 from projets/nintendogs-shiba-friends/src/donor/func_0211c558.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern void func_02069668(u8 *a, u8 *b, u8 *c);
static inline u32 FX(s32 a, s32 b) {
    s64 v = (s64) a * (s64) b + 0x800;
    return (u32) (v >> 12);
}
void func_0211c560(s32 *param_1, u32 param_2, s32 param_3) {
    s32 i;
    u32 off;
    u8 *a2;
    s32 p2;

    i = 0;
    if (param_1[0] <= 0) {
        return;
    }
    p2  = (s32) param_2;
    off = 0;
    do {
        if (((s32 *) (*(u8 **) ((u8 *) param_1 + 12)))[i] != 1) {
            a2                = *(u8 **) ((u8 *) param_1 + 8) + off;
            *(u32 *) (a2 + 0) = FX(*(s32 *) (a2 + 0), p2);
            *(u32 *) (a2 + 4) = FX(*(s32 *) (a2 + 4), p2);
            *(u32 *) (a2 + 8) = FX(*(s32 *) (a2 + 8), p2);
            a2                = *(u8 **) ((u8 *) param_1 + 8) + off;
            *(s32 *) (a2 + 4) = *(s32 *) (a2 + 4) - param_3;
            func_02069668(*(u8 **) ((u8 *) param_1 + 4) + off, *(u8 **) ((u8 *) param_1 + 8) + off,
                          *(u8 **) ((u8 *) param_1 + 4) + off);
        }
        i   = i + 1;
        off = off + 12;
    } while (i < param_1[0]);
}
