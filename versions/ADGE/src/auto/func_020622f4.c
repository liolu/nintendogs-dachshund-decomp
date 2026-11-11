/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* fabs from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/MSL/src/math/s_fabs.c (license: none), reused by
 * tools/donor_match.py */
extern double func_020622f4(double x);
double func_020622f4(double x)

{
    (((int *) &x)[1]) &= 0x7fffffff;
    return x;
}
