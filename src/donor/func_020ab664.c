#include "m2c.h"
/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Maybe_calc_094bf0 from https://github.com/RonyxDumb/mkds src/arm9/02094bf0_Maybe_calc_094bf0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int uint;
typedef long long longlong;
typedef unsigned long long ulonglong;
typedef unsigned int uint;
typedef long long longlong;
extern uint func_020ab664(int param_1, int param_2);
uint func_020ab664(int param_1, int param_2)
{
    longlong lVar1;

    lVar1 = (longlong) param_1 * (longlong) param_2 + 0x800;
    return (uint) lVar1 >> 0xc | (int) ((ulonglong) lVar1 >> 0x20) * 0x100000;
}
