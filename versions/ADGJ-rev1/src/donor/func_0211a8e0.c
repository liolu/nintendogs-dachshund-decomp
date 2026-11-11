/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211a8e0 from projets/nintendogs-chihuahua-friends/src/donor/func_0211a8e0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[11];
} T44;
u32 func_0211a8e0(s32 *param_1, u32 *param_2, s32 param_3) {
    T44 *dst = (T44 *) (param_1 + 8);
    if (param_1[0] - 1 < param_3) {
        dst        = (T44 *) ((u8 *) dst + param_1[0] * 44);
        *dst       = *(T44 *) param_2;
        param_1[0] = param_1[0] + 1;
        return 1;
    }
    return 0;
}
