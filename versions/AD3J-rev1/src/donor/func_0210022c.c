/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02100234 from projets/nintendogs-chihuahua-friends/src/donor/func_02100234.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
extern u64 _s32_div_f(u32 a, u32 b);
u32 func_0210022c(u8 *param_1, s32 param_2) {
    u64 r = _s32_div_f(*(u32 *) (param_1 + 0x50) + param_2 + 1, *(u32 *) (param_1 + 0x3c));
    return (u32) (r >> 32);
}
