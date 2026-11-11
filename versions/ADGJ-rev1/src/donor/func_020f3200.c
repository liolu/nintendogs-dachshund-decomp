/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f3200 from projets/nintendogs-chihuahua-friends/src/donor/func_020f3200.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed char s8;
typedef signed int s32;
#pragma opt_propagation off
#pragma opt_strength_reduction off
#pragma opt_loop_invariants off
#pragma opt_lifetimes off
s32 func_020f3200(u8 *p0, u16 *p1) {
    u32 uv;
    s32 l80;
    s32 l7c;
    s32 l78;
    s32 l74;
    s32 l70;
    s32 l6c;
    s32 l68;
    s32 l64;
    s32 l60;
    s32 l5c;
    s32 l58;
    s32 l54;
    s32 l50;
    s32 bv1;
    s32 l48;
    s32 l44;
    s32 half;
    s32 thr;
    s32 i3;
    s32 zero;
    s32 neg1;
    s32 one;
    s32 score;
    u8 u4;
    u32 u12;
    s32 hi;
    s32 lo;
    s32 i11;
    s32 i10;
    s32 u9;
    s32 uu8;
    s32 u6;
    s32 u14;
    s32 u2;
    s32 u7;
    s32 d;

    uv  = *p1;
    l78 = 0;
    l74 = 0;
    l70 = 2;
    l6c = 5;
    if (uv < 4000) {
        l70 = l70 + (5000 - (s32) uv) / 1000;
    }
    if (uv >= 8000) {
        l6c = l6c + (s32) uv / 8000;
    }
    l7c = -l70;
    while (l7c <= l70) {
        zero = 0;
        one  = 1;
        neg1 = -1;
        l68  = zero;
        l64  = zero;
        i10  = l7c < 0 ? zero : l7c;
        i11  = l7c >= 0 ? zero : -l7c;
        l60  = zero;
        l5c  = zero;
        l58  = zero;
        l54  = zero;
        l50  = neg1;
        bv1  = zero;
        l44  = zero;
        i3   = 0x1e - (l7c < 0 ? -l7c : l7c);
        l80  = zero;
        if (i3 > 0) {
            half = i3 / 2 - 1;
            thr  = i3 / 4;
            do {
                uu8 = zero;
                u6  = zero;
                u14 = zero;
                u2  = zero;
                u7  = zero;
                u9  = zero;
                do {
                    if ((s32) u9 % 2 == 0) {
                        u12 = (u8) ((p0 + i10 * 4 + (s32) u9 / 2)[0xc4] & 0xf);
                    } else {
                        u12 = (u8) ((p0 + i10 * 4 + (s32) u9 / 2)[0xc4] >> 4);
                    }
                    if ((s32) u9 % 2 != 0) {
                        u4 = (u8) (((u8 *) p1 + i11 * 4 + (s32) u9 / 2)[0xc4] >> 4);
                    } else {
                        u4 = (u8) (((u8 *) p1 + i11 * 4 + (s32) u9 / 2)[0xc4] & 0xf);
                    }
                    u12 = (u8) (u12 & 0xf);
                    if (u2 < (s32) u12) {
                        u2 = (s8) u12;
                    }
                    u4 = (u8) (u4 & 0xf);
                    if (u7 < u4) {
                        u7 = (s8) u4;
                    }
                    if (u12 >= u4) {
                        hi = u12;
                        lo = u4;
                    } else {
                        lo = u12;
                        hi = u4;
                    }
                    u14 = u14 + (hi - lo);
                    if (hi - lo <= l6c + (hi >> 3)) {
                        uu8 = uu8 + 1;
                    } else {
                        if (u9 >= 1 && u9 <= 3) {
                            u6 = u6 + 1;
                        }
                    }
                    u9 = u9 + 1;
                } while (u9 < 8);
                d = u2 - u7;
                if (d < 0) {
                    d = -d;
                }
                if (u6 > (d >> 2)) {
                    u6 = u6 - (d >> 2);
                } else {
                    u6 = zero;
                }
                l64 = l64 + uu8;
                if (uu8 == 8 && u14 > 20) {
                    uu8 = uu8 - 1;
                }
                if (uu8 >= 7 && u6 < 2) {
                    if (l54 < l80 - l50) {
                        l54 = l80 - l50;
                    }
                    l68 = l68 + 1;
                    l50 = l80;
                    if (uu8 == 7) {
                        l44 = l44 + 1;
                    }
                }
                if (u6 == 0 || (u6 == 1 && l5c < 3)) {
                    l60 = l60 + 1;
                    if (l58 < l5c) {
                        l58 = l5c;
                    }
                    l5c = zero;
                } else {
                    l5c = l5c + u6;
                }
                i10 = i10 + 1;
                i11 = i11 + 1;
                if (l80 == half) {
                    if (l68 < thr) {
                        bv1 = one;
                    }
                    l48 = l68;
                }
                l80 = l80 + 1;
            } while (l80 < i3);
        }
        if (l54 < l80 - l50) {
            l54 = l80 - l50;
        }
        if (l68 - l48 < i3 / 4) {
            bv1 = one;
        }
        l68 = l68 - l58;
        if (l68 < 0) {
            l68 = zero;
        }
        if (l58 < 8 && bv1 == 0) {
            score = (l60 * (l68 * l64) * 0x1000) / 27000 - ((l44 + l54) << 8);
            l74   = l74 + 1;
        } else {
            score = zero;
        }
        if (l78 < score && !bv1) {
            l78 = score;
        }
        if (l7c >= 0 && l74 + (l70 - l7c) < l70) {
            break;
        }
        l7c = l7c + 1;
    }
    if (l74 < l70) {
        l78 = 0;
    }
    return l78;
}
