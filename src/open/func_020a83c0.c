#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

typedef struct {
    s32 f[12];
} M2C_S48;

s32 func_01ffdb08(s16);
void func_02027168(s32, void *, s32);
s32 func_02034ca4(s32);
void func_020a85bc(void *);
void func_020a883c(void *, void *);
void func_020a8ac8(void *, s32, void *);
void func_01ff810c(void *, void *, void *);
s32 func_02033ec4(s32);
void func_02028188(s32);

void func_020a83c0(void *arg0) {
    M2C_S12 val;
    M2C_S48 work;
    s32 handle;
    s32 old;

    handle = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
    if (handle == 0) {
        return;
    }
    func_02027168(handle, &work, 0xc);
    switch (func_02034ca4(handle)) {
        case 3:
            func_020a85bc(arg0);
            return;
        case 2:
            func_020a883c(arg0, &val);
            if (M2C_FIELD(arg0, s32 *, 0x164) != 0) {
                if (func_02033ec4(handle) != 0) {
                    M2C_FIELD(arg0, s16 *, 0x162) = 6;
                }
            }
            M2C_FIELD(arg0, s32 *, 0x164) = 0;
            break;
        case 0:
        case 1:
        default:
            func_020a8ac8(arg0, func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98)), &val);
            func_01ff810c((u8 *) arg0 + 0x130, &work, (u8 *) arg0 + 0xc8);
            if (M2C_FIELD(arg0, s32 *, 0x164) == 0) {
                if (func_02033ec4(handle) != 0) {
                    M2C_FIELD(arg0, s16 *, 0x162) = 6;
                }
            }
            M2C_FIELD(arg0, s32 *, 0x164) = 1;
            break;
    }
    if (M2C_FIELD(arg0, s16 *, 0x162) > 0) {
        M2C_FIELD(arg0, s16 *, 0x162)--;
        old = M2C_FIELD(arg0, s32 *, 0x170);
        M2C_FIELD(arg0, s32 *, 0xbc) = old + (s32) (((s64) (val.f0 - old) * 0x400 + 0x800) >> 12);
        old = M2C_FIELD(arg0, s32 *, 0x174);
        M2C_FIELD(arg0, s32 *, 0xc0) = old + (s32) (((s64) (val.f1 - old) * 0x400 + 0x800) >> 12);
        old = M2C_FIELD(arg0, s32 *, 0x178);
        M2C_FIELD(arg0, s32 *, 0xc4) = old + (s32) (((s64) (val.f2 - old) * 0x400 + 0x800) >> 12);
        return;
    }
    M2C_FIELD(arg0, M2C_S12 *, 0xbc) = val;
    if (M2C_FIELD(arg0, s32 *, 0x188) != 0) {
        return;
    }
    func_02028188(handle);
    M2C_FIELD(arg0, s32 *, 0x188) = 1;
}
