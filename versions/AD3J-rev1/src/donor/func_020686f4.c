/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02098f84 from projets/pokemon-dash/src/donor/func_02098f84.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed long long s64 __attribute__((aligned(4)));
typedef unsigned long long u64 __attribute__((aligned(4)));
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef s32 fx32;
typedef s64 fx64;
typedef struct MtxFx43 {
    fx32 _00, _01, _02;
    fx32 _10, _11, _12;
    fx32 _20, _21, _22;
    fx32 _30, _31, _32;
} MtxFx43;
extern void func_0206e0d4(void *src, void *dst);
extern void func_02068f8c(fx32 x);
extern fx32 func_02068fc8(void);
int func_020686f4(const MtxFx43 *pSrc, MtxFx43 *pDst) {
    MtxFx43 tmp;
    MtxFx43 *p;
    fx32 det0, det1, det2, det;
    fx32 var0, var1, var2, var3;
    fx64 inv;
    if (pSrc == pDst) {
        p = &tmp;
    } else {
        p = pDst;
    }

    det0 = (fx32) (((fx64) pSrc->_11 * pSrc->_22 - (fx64) pSrc->_12 * pSrc->_21 + (fx64) (((fx32) 0x00001000L) >> 1)) >> 12);
    det1 = (fx32) (((fx64) pSrc->_10 * pSrc->_22 - (fx64) pSrc->_12 * pSrc->_20 + (fx64) (((fx32) 0x00001000L) >> 1)) >> 12);
    det2 = (fx32) (((fx64) pSrc->_10 * pSrc->_21 - (fx64) pSrc->_11 * pSrc->_20 + (fx64) (((fx32) 0x00001000L) >> 1)) >> 12);
    det  = (fx32) (((fx64) pSrc->_00 * det0 - (fx64) pSrc->_01 * det1 + (fx64) pSrc->_02 * det2 +
                   (fx64) (((fx32) 0x00001000L) >> 1)) >>
                  12);
    if (det == 0) {
        return -1;
    }
    func_02068f8c(det);
    var0   = (fx32) (((fx64) pSrc->_01 * pSrc->_22 - (fx64) pSrc->_21 * pSrc->_02) >> 12);
    var1   = (fx32) (((fx64) pSrc->_01 * pSrc->_12 - (fx64) pSrc->_11 * pSrc->_02) >> 12);
    var2   = (fx32) (((fx64) pSrc->_00 * pSrc->_22 - (fx64) pSrc->_20 * pSrc->_02) >> 12);
    var3   = (fx32) (((fx64) pSrc->_00 * pSrc->_12 - (fx64) pSrc->_10 * pSrc->_02) >> 12);
    inv    = func_02068fc8();
    p->_00 = (fx32) ((inv * det0) >> 12);
    p->_01 = -(fx32) ((inv * var0) >> 12);
    p->_02 = (fx32) ((inv * var1) >> 12);
    p->_10 = -(fx32) ((inv * det1) >> 12);
    p->_11 = (fx32) ((inv * var2) >> 12);
    p->_12 = -(fx32) ((inv * var3) >> 12);
    p->_20 = (fx32) ((inv * det2) >> 12);
    p->_21 = -(fx32) ((inv * (fx32) (((fx64) pSrc->_00 * pSrc->_21 - (fx64) pSrc->_20 * pSrc->_01) >> 12)) >> 12);
    p->_22 = (fx32) ((inv * (fx32) (((fx64) pSrc->_00 * pSrc->_11 - (fx64) pSrc->_10 * pSrc->_01) >> 12)) >> 12);

    p->_30 = -(fx32) (((fx64) p->_00 * pSrc->_30 + (fx64) p->_10 * pSrc->_31 + (fx64) p->_20 * pSrc->_32) >> 12);
    p->_31 = -(fx32) (((fx64) p->_01 * pSrc->_30 + (fx64) p->_11 * pSrc->_31 + (fx64) p->_21 * pSrc->_32) >> 12);
    p->_32 = -(fx32) (((fx64) p->_02 * pSrc->_30 + (fx64) p->_12 * pSrc->_31 + (fx64) p->_22 * pSrc->_32) >> 12);
    if (p == &tmp) {
        func_0206e0d4(&tmp, pDst);
    }
    return 0;
}
