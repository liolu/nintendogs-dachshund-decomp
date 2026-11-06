/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02065604 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/g3_util.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef long long s64;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
typedef struct {
    s32 _00, _01, _02, _03;
    s32 _10, _11, _12, _13;
    s32 _20, _21, _22, _23;
    s32 _30, _31, _32, _33;
} UnkMtx44;
extern s32 func_02069098(s32 numer, s32 denom);
extern s64 func_02069004(void);
extern s32 func_02068fc8(void);
static inline void UnkDivAsyncFx(s32 numer, s32 denom) {
    (*(u64 *) 0x04000290) = (s64) numer << 32;
    (*(u64 *) 0x04000298) = (u32) denom;
}
static inline s32 UnkMulFx(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
static inline s32 UnkMul32x64c(s32 v32, s64 v64c) {
    s64 tmp = v64c * v32 + 0x80000000LL;
    return (s32) (tmp >> 32);
}
void func_0206c090(s32 fovySin, s32 fovyCos, s32 aspect, s32 n, s32 f, s32 scaleW, BOOL draw, UnkMtx44 *mtx) {
    s32 fovyCot, m00, m22, m32;
    s64 inv;
    vu32 *fifo;

    fovyCot = func_02069098(fovyCos, fovySin);
    if (scaleW != 0x1000) {
        fovyCot = fovyCot * scaleW / 0x1000;
    }
    UnkDivAsyncFx(fovyCot, aspect);

    if (draw) {
        (*(vu32 *) 0x04000440) = 0;
        fifo                   = &(*(vu32 *) 0x04000458);
    }
    if (mtx != 0) {
        mtx->_01 = 0;
        mtx->_02 = 0;
        mtx->_03 = 0;
        mtx->_10 = 0;
        mtx->_12 = 0;
        mtx->_13 = 0;
        mtx->_20 = 0;
        mtx->_21 = 0;
        mtx->_23 = -scaleW;
        mtx->_30 = 0;
        mtx->_31 = 0;
        mtx->_33 = 0;
    }

    m00 = func_02068fc8();
    UnkDivAsyncFx(0x1000, n - f);
    if (draw) {
        *fifo = m00;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = fovyCot;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
        *fifo = 0;
    }
    if (mtx != 0) {
        mtx->_00 = m00;
        mtx->_11 = fovyCot;
    }

    inv = func_02069004();
    if (scaleW != 0x1000) {
        inv = inv * scaleW / 0x1000;
    }
    m22 = UnkMul32x64c(f + n, inv);
    m32 = UnkMul32x64c(UnkMulFx(n * 2, f), inv);
    if (draw) {
        *fifo = m22;
        *fifo = -scaleW;
        *fifo = 0;
        *fifo = 0;
        *fifo = m32;
        *fifo = 0;
    }
    if (mtx != 0) {
        mtx->_22 = m22;
        mtx->_32 = m32;
    }
}
