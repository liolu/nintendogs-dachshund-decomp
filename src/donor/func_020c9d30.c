/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c9d30 from projets/nintendogs-chihuahua-friends/src/donor/func_020c9d30.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02154c48;
// clang-format off
s32 func_020c9d30(s32 param_1, s32 param_2)
{
    s32 res = 0;
    s16 cnt;
    s32 off;
    u32 gi = (u32)data_02154c48;
    u8 *q;
    u8 *base;
    asm { mov cnt, res }
    asm { mov off, res }
    gi = gi + 4096;
    q = *(u8 **)(gi + 0x41c);
    base = q + 584;
    do {
        u8 *e;
        s16 k;
        s32 a;
        s32 b;
        k = *(s16 *)(base + off);
        e = base + off;
        b = *(s8 *)(e + 2);
        a = *(s8 *)(e + 3);
        if (a > 0 && b == param_1 && k == param_2) {
            res = a;
            goto out;
        }
        cnt = (s16)(cnt + 1);
        off = off + 4;
    } while (cnt < 200);
out:
    return res;
}
// clang-format on
