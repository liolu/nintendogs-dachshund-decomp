/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dbe74 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020dbe74.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u16 pad[2];
    u16 a[48];
    u16 b[48];
} Pat;
extern s32 func_02069098(s32 a, s32 b);
s32 func_020f3f20(Pat *p1, Pat *p2, s32 *outOff) {
    s32 best;
    s32 off;
    s32 cnt;
    s32 total;
    s32 last;
    s32 ib;
    s32 maxBad;
    s32 ia, k;
    s32 a, b;
    s32 run, bad, sc;
    s32 prevA, prevB;
    s32 d, thr, dA, mx;
    s16 r;
    s32 res;

    best = 0;
    for (off = -12; off < 12; off += 2) {
        maxBad = 0;
        ia     = 0;
        ib     = 0;
        cnt    = 0;
        sc     = 0;
        run    = 0;
        bad    = 0;
        last   = 0;
        prevB  = 0;
        prevA  = 0;
        if (off < 0) {
            ia -= off;
        }
        if (off > 0) {
            ib += off;
        }
        for (k = 0; k < 48 - ((off) < 0 ? -(off) : (off)); k++) {
            if (off + k < 48) {
                a   = p1->a[ia++];
                b   = p2->a[ib++];
                dA  = a - prevA;
                d   = ((a - b) < 0 ? -(a - b) : (a - b));
                mx  = (a > b) ? a : b;
                thr = mx / 4 + 2000;
                if (d < thr || (d < thr + dA && ((dA - (b - prevB)) < 0 ? -(dA - (b - prevB)) : (dA - (b - prevB))) < 3200)) {
                    cnt++;
                    if (ia != 0 && last == ia - 1) {
                        sc += 2;
                        run++;
                    }
                    if (bad > 10) {
                        sc -= bad * 2;
                    }
                    if (maxBad < bad) {
                        maxBad = bad;
                    }
                    last = ia;
                    bad  = 0;
                } else {
                    if (a > b) {
                        r = a / b;
                    } else {
                        r = b / a;
                    }
                    if (r >= 5) {
                        bad++;
                        if (r > 10) {
                            r = (r >= 30) ? 30 : r;
                            sc -= r - 10;
                        }
                    }
                    if (run > 4) {
                        sc += run;
                    }
                    run = 0;
                }
                prevA = a;
                prevB = b;
            }
        }
        if (run > 4) {
            sc += run;
        }
        if (bad > 10) {
            sc -= bad * 2;
        }
        total = cnt + sc;

        maxBad = 0;
        ia     = 0;
        ib     = 0;
        run    = 0;
        bad    = 0;
        cnt    = 0;
        sc     = 0;
        last   = 0;
        prevB  = 0;
        prevA  = 0;
        if (off < 0) {
            ia -= off;
        }
        if (off > 0) {
            ib += off;
        }
        for (k = 0; k < 48 - ((off) < 0 ? -(off) : (off)); k++) {
            if (off + k < 48) {
                a   = p1->b[ia++];
                b   = p2->b[ib++];
                dA  = a - prevA;
                d   = ((a - b) < 0 ? -(a - b) : (a - b));
                mx  = (a > b) ? a : b;
                thr = mx / 4 + 2000;
                if (d < thr || (d < thr + dA && ((dA - (b - prevB)) < 0 ? -(dA - (b - prevB)) : (dA - (b - prevB))) < 3200)) {
                    cnt++;
                    if (ia != 0 && last == ia - 1) {
                        sc += 2;
                        run++;
                    }
                    if (bad > 10) {
                        sc -= bad * 2;
                    }
                    if (maxBad < bad) {
                        maxBad = bad;
                    }
                    last = ia;
                    bad  = 0;
                } else {
                    if (a > b) {
                        r = a / b;
                    } else {
                        r = b / a;
                    }
                    if (r >= 5) {
                        bad++;
                        if (r > 10) {
                            r = (r >= 30) ? 30 : r;
                            sc -= r - 10;
                        }
                    }
                    if (run > 4) {
                        sc += run;
                    }
                    run = 0;
                }
                prevA = a;
                prevB = b;
            }
        }
        if (run > 4) {
            sc += run;
        }
        if (bad > 10) {
            sc -= bad * 2;
        }

        res = func_02069098(total + (cnt + sc), (48 - ((off) < 0 ? -(off) : (off))) * 2);
        if (res > best) {
            best    = res;
            *outOff = off;
        }
    }
    return best;
}
