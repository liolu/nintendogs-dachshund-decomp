#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

typedef struct {
    s32 w[12];
} Block48;

extern u8 data_0213e90c[];

s32 func_01ffdb08(s16);
s32 func_02028108(s32);
s32 func_02028120(s32);
void func_02027658(s32, void *);
void func_0202755c(s32, void *);
void func_01ff832c(s32, void *, void *, Vec3 *);
s32 func_02034cf8(s32);
void func_02068270(s32, s32, s32);
s32 func_020b1db4(void *, s32, void *);
void func_020b1428(s32, Vec3 *, s32, s32, s32);
s32 func_020b0180(s32, s32, s32, Vec3 *, Block48 *);
void func_020b114c(s32, Vec3 *, Block48 *, s32, s32, s32);

void func_020a85bc(void *arg0) {
    Vec3 out;
    Block48 b14;
    Vec3 p44;
    Vec3 p50;
    Block48 work2;
    Vec3 src;
    Block48 b98;
    Vec3 mvec;
    s32 *pv;
    s32 handle;
    s32 *row;
    s32 vel;
    s32 s;

    handle = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
    vel = M2C_FIELD(arg0, s32 *, 0x128);
    row = (s32 *) (data_0213e90c + func_02028108(handle) * 8);
    func_02027658(handle, &src);
    func_0202755c(handle, &b98);
    mvec.x = b98.w[6];
    mvec.y = b98.w[7];
    mvec.z = b98.w[8];
    s = func_02028120(handle);
    func_01ff832c(vel + (s32) (((s64) row[1] * s + 0x800) >> 12), &mvec, &src, &out);
    if (func_02034cf8(handle) != 0) {
        s32 wx;
        s32 wz;

        func_0202755c(handle, &b14);
        wx = b14.w[6];
        wz = b14.w[8];
        M2C_FIELD(arg0, s32 *, 0xB4) = 0xCD;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (((s64) wx * 0xCD + 0x800) >> 12);
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (((s64) wz * 0xCD + 0x800) >> 12);
    }
    M2C_FIELD(arg0, s32 *, 0xB4) -= 0x52;
    M2C_FIELD(arg0, s32 *, 0xB0) += (s32) (((s64) (out.x - M2C_FIELD(arg0, s32 *, 0xBC)) * 0x333 + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0xB8) += (s32) (((s64) (out.z - M2C_FIELD(arg0, s32 *, 0xC4)) * 0x333 + 0x800) >> 12);
    func_02068270((s32) ((u8 *) arg0 + 0xBC), (s32) ((u8 *) arg0 + 0xB0), (s32) ((u8 *) arg0 + 0xBC));
    if (M2C_FIELD(arg0, s32 *, 0x168) == 1) {
        pv = (s32 *) &p44;
        pv[0] = 0;
        pv[1] = 0;
        pv[2] = 0;
        if (func_020b1db4((u8 *) arg0 + 0xBC, M2C_FIELD(arg0, s32 *, 0xF8), &p44) == 0) {
            return;
        }
        func_020b1428((s32) arg0, &p44, 0x333, 0x99A, -1);
        return;
    }
    {
        pv = (s32 *) &p50;
        pv[0] = 0;
        pv[1] = 0;
        pv[2] = 0;
        if (func_020b0180((s32) arg0, (s32) ((u8 *) arg0 + 0xFC), (s32) ((u8 *) arg0 + 0x108), &p50, &work2) == 0) {
            return;
        }
        func_020b114c((s32) arg0, &p50, &work2, 0x333, 0x99A, -1);
    }
}
