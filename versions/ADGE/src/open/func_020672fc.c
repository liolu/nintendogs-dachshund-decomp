/* compiler: 1.2/sp2p3 -O4,p */
/* MTX_Inverse43 from https://github.com/ntrtwl/NitroSDK libraries/fx/src/fx_mtx43.c (license: none) */
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
extern void func_0206ccdc(register const void *pSrc, register void *pDest);
extern fx32 func_02067bd0(void);
extern void func_02067b94(fx32 denom);
int func_020672fc(const MtxFx43 *pSrc, MtxFx43 *pDst) {
    MtxFx43 tmp;
    MtxFx43 *p;
    fx32 det;
    fx32 det00, det10, det20;
    fx32 tmp01, tmp02, tmp11, tmp12;
    fx32 tmp21, tmp22;

    ((void) 0);
    ((void) 0);

    if (pSrc == pDst) {
        p = &tmp;
    } else {
        p = pDst;
    }

    det00 =
        (fx32) (((fx64) pSrc->_11 * pSrc->_22 - (fx64) pSrc->_12 * pSrc->_21 + (fx64) (((fx32) 0x0000000000001000L) >> 1)) >>
                12);
    det10 =
        (fx32) (((fx64) pSrc->_10 * pSrc->_22 - (fx64) pSrc->_12 * pSrc->_20 + (fx64) (((fx32) 0x0000000000001000L) >> 1)) >>
                12);
    det20 =
        (fx32) (((fx64) pSrc->_10 * pSrc->_21 - (fx64) pSrc->_11 * pSrc->_20 + (fx64) (((fx32) 0x0000000000001000L) >> 1)) >>
                12);

    det = (fx32) (((fx64) pSrc->_00 * det00 - (fx64) pSrc->_01 * det10 + (fx64) pSrc->_02 * det20 +
                   (fx64) (((fx32) 0x0000000000001000L) >> 1)) >>
                  12);

    if (0 == det) {
        return -1;
    }

    func_02067b94(det);

    tmp01 = (fx32) (((fx64) pSrc->_01 * pSrc->_22 - (fx64) pSrc->_21 * pSrc->_02) >> 12);
    tmp02 = (fx32) (((fx64) pSrc->_01 * pSrc->_12 - (fx64) pSrc->_11 * pSrc->_02) >> 12);
    tmp11 = (fx32) (((fx64) pSrc->_00 * pSrc->_22 - (fx64) pSrc->_20 * pSrc->_02) >> 12);
    tmp12 = (fx32) (((fx64) pSrc->_00 * pSrc->_12 - (fx64) pSrc->_10 * pSrc->_02) >> 12);

    det    = func_02067bd0();
    p->_00 = (fx32) (((fx64) det * det00) >> 12);
    p->_01 = -(fx32) (((fx64) det * tmp01) >> 12);
    p->_02 = (fx32) (((fx64) det * tmp02) >> 12);

    p->_10 = -(fx32) (((fx64) det * det10) >> 12);
    p->_11 = (fx32) (((fx64) det * tmp11) >> 12);
    p->_12 = -(fx32) (((fx64) det * tmp12) >> 12);

    p->_20 = (fx32) (((fx64) det * det20) >> 12);

    tmp21  = (fx32) (((fx64) pSrc->_00 * pSrc->_21 - (fx64) pSrc->_20 * pSrc->_01) >> 12);
    p->_21 = -(fx32) (((fx64) det * tmp21) >> 12);

    tmp22  = (fx32) (((fx64) pSrc->_00 * pSrc->_11 - (fx64) pSrc->_10 * pSrc->_01) >> 12);
    p->_22 = (fx32) (((fx64) det * tmp22) >> 12);

    p->_30 = -(fx32) (((fx64) p->_00 * pSrc->_30 + (fx64) p->_10 * pSrc->_31 + (fx64) p->_20 * pSrc->_32) >> 12);
    p->_31 = -(fx32) (((fx64) p->_01 * pSrc->_30 + (fx64) p->_11 * pSrc->_31 + (fx64) p->_21 * pSrc->_32) >> 12);
    p->_32 = -(fx32) (((fx64) p->_02 * pSrc->_30 + (fx64) p->_12 * pSrc->_31 + (fx64) p->_22 * pSrc->_32) >> 12);

    if (p == &tmp) {
        func_0206ccdc(&tmp, pDst);
    }

    return 0;
}
