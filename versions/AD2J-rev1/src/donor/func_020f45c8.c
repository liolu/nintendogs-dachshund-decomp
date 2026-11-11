/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f45c0 from projets/nintendogs-shiba-friends/src/donor/func_020f45c0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u32 func_02069098(u32 a, s32 b);
s32 func_020f45c8(s16 *param_1, u32 param_2, s32 param_3, s32 param_4) {
    u32 i;
    s32 m;
    s32 uVar7;
    s16 x;
    s32 t;
    s32 w;
    s32 zero;

    i     = 0;
    m     = i;
    uVar7 = 0x1000;
    if (param_4 != 0x7fff || param_4 == 0) {
        if (i < param_2) {
            s32 neg = -param_3;
            zero    = 0;
            do {
                if (param_1[i] < param_3 && param_1[i] > neg) {
                    param_1[i] = zero;
                }
                t = param_1[i];
                i = i + 1;
                if (t < 0) {
                    t = -t;
                }
                x = (s16) t;
                if (m < x) {
                    m = x;
                }
            } while (i < param_2);
        }
    } else {
        m = param_4;
    }
    if (m < 0x7ff0) {
        uVar7 = func_02069098(0x7ff0, m);
        if (uVar7 > 0x1000) {
            i = 0;
            if (i < param_2) {
                do {
                    x = param_1[i];
                    w = x;
                    w <<= 12;
                    param_1[i] = (s16) (((s32) (((s64) (w) * (uVar7) + 0x800) >> 12)) >> 12);
                    i          = i + 1;
                } while (i < param_2);
            }
        }
    }
    return uVar7;
}
