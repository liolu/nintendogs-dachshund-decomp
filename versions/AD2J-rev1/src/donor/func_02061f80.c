/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006acc from projets/children-of-mana/src/auto/func_02006acc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
extern double func_0205ab00(double x, double y);
double func_02061f80(double x, int *eptr) {
    int hi = ((int *) (&x))[1];
    int lo = ((int *) (&x))[0];
    int ix;
    *eptr = 0;
    ix    = hi & 0x7fffffff;
    if ((ix >= 0x7ff00000) || ((ix | lo) == 0)) {
        return x;
    }
    if (ix < 0x100000) {
        x     = func_0205ab00(x, 0x1.0p54);
        hi    = ((int *) (&x))[1];
        *eptr = -54;
        ix    = hi & 0x7fffffff;
    }
    *eptr += (ix >> 20) - 0x3fe;
    hi                = (hi & 0x800fffff) | 0x3fe00000;
    ((int *) (&x))[1] = hi;
    return x;
}
