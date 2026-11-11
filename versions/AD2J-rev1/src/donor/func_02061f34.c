/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02035850 from projets/battle-of-giants-dinosaurs/src/auto/func_02035850.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern double func_02061f34(double x, double y);
double func_02061f34(double x, double y)

{
    (((int *) &x)[1]) = ((((int *) &x)[1]) & 0x7FFFFFFF) | ((((int *) &y)[1]) & 0x80000000);
    return x;
}
