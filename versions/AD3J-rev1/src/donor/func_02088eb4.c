/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02088eb4 from projets/nintendogs-chihuahua-friends/src/donor/func_02088eb4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
void func_02088eb4(s32 *param_1, u8 *param_2) {
    u32 mode = ((u32) (*(u16 *) ((u8 *) param_1 + 6) << 30)) >> 30;
    if (mode == 0) {
        goto m0;
    }
    if (mode == 1) {
        goto m1;
    }
    return;
m0: {
    s32 iv3;
    s32 v;
    s32 len;
    v   = param_1[0];
    iv3 = *(s32 *) (param_2 + 0xc);
    if (iv3 < v) {
        len = *(s32 *) (param_2 + 0x18);
        if (iv3 + len > v) {
            *(u16 *) (param_2 + 46) = *(u16 *) (param_2 + 44);
            return;
        }
    }
    if (iv3 < v) {
        return;
    }
    len = *(s32 *) (param_2 + 0x18);
    if (iv3 + len < v) {
        *(u16 *) (param_2 + 46) = *(u16 *) (param_2 + 44);
    }
    return;
}
m1: {
    s32 iv3;
    s32 v;
    s32 len;
    v   = param_1[0];
    iv3 = *(s32 *) (param_2 + 0xc);
    if (iv3 >= v) {
        goto b8;
    }
    len = *(s32 *) (param_2 + 0x18);
    if (iv3 + len <= v) {
        goto b8;
    }
    do {
        *(s32 *) ((param_2) + 0x18) = (v) - (iv3);
        *(s32 *) ((param_2) + 0x24) =
            -(s32) (((s64) * (s32 *) ((param_2) + 0x24) * (s16) * (u16 *) ((u8 *) (param_1) + 4) + 0x800) >> 12);
    } while (0);
    return;
b8:
    if (iv3 < v) {
        return;
    }
    len = *(s32 *) (param_2 + 0x18);
    if (iv3 + len >= v) {
        return;
    }
    do {
        *(s32 *) ((param_2) + 0x18) = (v) - (iv3);
        *(s32 *) ((param_2) + 0x24) =
            -(s32) (((s64) * (s32 *) ((param_2) + 0x24) * (s16) * (u16 *) ((u8 *) (param_1) + 4) + 0x800) >> 12);
    } while (0);
    return;
}
}
