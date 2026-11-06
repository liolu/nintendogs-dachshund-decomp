/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bdb98 from projets/nintendogs-chihuahua-friends/src/donor/func_020bdb98.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_020b8c1c(s32 a, u32 b, u32 c);
extern void func_020b8ce8(s32 a, u32 b, u32 c, u32 d);
u32 func_020bdb98(s32 *param_1) {
    u32 r;
    s32 st;

    r  = 0;
    st = param_1[7];
    if (st == 5) {
        goto done;
    }
    if (st == 1) {
        goto s1;
    }
    if (st == 2) {
        goto s2;
    }
    if (st == 3) {
        param_1[7] = 0;
    }
    goto done;
s1:
    *(s16 *) (param_1 + 8) = (s16) (*(s16 *) (param_1 + 8) - 1);
    if (*(s16 *) (param_1 + 8) >= 0) {
        goto done;
    }
    param_1[7]             = 2;
    *(s16 *) (param_1 + 8) = *(s16 *) ((u8 *) param_1 + 0x1a);
    if (*(u16 *) (param_1 + 1) != 0xffff) {
        if (param_1[2] != 0) {
            func_020b8c1c(param_1[0], *(u16 *) (param_1 + 1), *(u16 *) (param_1 + 3));
        }
        if (param_1[4] != 0) {
            func_020b8ce8(param_1[0], *(u16 *) (param_1 + 1), 0, 0);
        }
    }
    if (param_1[0xb] != 0) {
        ((void (*)(s32 *)) param_1[0xb])(param_1);
    }
    goto done;
s2:
    *(s16 *) (param_1 + 8) = (s16) (*(s16 *) (param_1 + 8) - 1);
    if (*(s16 *) (param_1 + 8) >= 0) {
        goto done;
    }
    param_1[7] = 3;
    r          = 1;
    if (param_1[0xc] != 0) {
        ((void (*)(s32 *)) param_1[0xc])(param_1);
    }
done:
    return r;
}
