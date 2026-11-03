/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006dc4 from projets/code-lyoko/src/auto/func_02006dc4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
typedef struct {
    s32 x, y, z;
} UnkVec32;
typedef struct {
    s32 _00, _01, _02;
    s32 _10, _11, _12;
    s32 _20, _21, _22;
    s32 _30, _31, _32;
} UnkMtx43;
extern s32 func_020695f0(const UnkVec32 *a, const UnkVec32 *b);
extern void func_02069504(const UnkVec32 *a, const UnkVec32 *b, UnkVec32 *dest);
extern void func_020692f0(const UnkVec32 *src, UnkVec32 *dest);
void func_0206bef8(const UnkVec32 *camPos, const UnkVec32 *camUp, const UnkVec32 *target, BOOL draw, UnkMtx43 *mtx) {
    UnkVec32 vLook, vRight, vUp;
    s32 tx, ty, tz;
    vu32 *fifo;

    vLook.x = camPos->x - target->x;
    vLook.y = camPos->y - target->y;
    vLook.z = camPos->z - target->z;
    func_020692f0(&vLook, &vLook);
    func_02069504(camUp, &vLook, &vRight);
    func_020692f0(&vRight, &vRight);
    func_02069504(&vLook, &vRight, &vUp);

    if (draw) {
        (*(vu32 *) 0x04000440) = 2;
        fifo                   = &(*(vu32 *) 0x0400045c);
        *fifo                  = vRight.x;
        *fifo                  = vUp.x;
        *fifo                  = vLook.x;
        *fifo                  = vRight.y;
        *fifo                  = vUp.y;
        *fifo                  = vLook.y;
        *fifo                  = vRight.z;
        *fifo                  = vUp.z;
        *fifo                  = vLook.z;
    }

    tx = -func_020695f0(camPos, &vRight);
    ty = -func_020695f0(camPos, &vUp);
    tz = -func_020695f0(camPos, &vLook);
    if (draw) {
        *fifo = tx;
        *fifo = ty;
        *fifo = tz;
    }
    if (mtx != 0) {
        mtx->_00 = vRight.x;
        mtx->_01 = vUp.x;
        mtx->_02 = vLook.x;
        mtx->_10 = vRight.y;
        mtx->_11 = vUp.y;
        mtx->_12 = vLook.y;
        mtx->_20 = vRight.z;
        mtx->_21 = vUp.z;
        mtx->_22 = vLook.z;
        mtx->_30 = tx;
        mtx->_31 = ty;
        mtx->_32 = tz;
    }
}
