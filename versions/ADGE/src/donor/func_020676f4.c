/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* MTX_TransApply43 from https://github.com/ntrtwl/NitroSDK libraries/fx/src/fx_mtx43.c (license: none), reused by
 * tools/donor_match.py */
typedef signed long s32;
typedef signed long long int s64;
typedef s32 fx32;
typedef s64 fx64;
typedef union {
    struct {
        fx32 _00, _01, _02;
        fx32 _10, _11, _12;
        fx32 _20, _21, _22;
        fx32 _30, _31, _32;
    };
    fx32 m[4][3];
    fx32 a[12];
} MtxFx43;
extern void func_0206ccc0(register const void *pSrc, register void *pDest);
extern void func_020676f4(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z);
void func_020676f4(const MtxFx43 *pSrc, MtxFx43 *pDst, fx32 x, fx32 y, fx32 z) {
    ((void) 0);
    ((void) 0);

    if (pSrc != pDst) {
        func_0206ccc0(pSrc, pDst);
    }

    {
        fx64 xx = x;
        fx64 yy = y;
        fx64 zz = z;

        pDst->_30 = pSrc->_30 + (fx32) ((xx * pSrc->_00 + yy * pSrc->_10 + zz * pSrc->_20) >> 12);
        pDst->_31 = pSrc->_31 + (fx32) ((xx * pSrc->_01 + yy * pSrc->_11 + zz * pSrc->_21) >> 12);
        pDst->_32 = pSrc->_32 + (fx32) ((xx * pSrc->_02 + yy * pSrc->_12 + zz * pSrc->_22) >> 12);
    }
}
