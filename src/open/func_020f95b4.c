#include "m2c.h"

typedef struct {
    s32 f[12];
} M2C_S48;

void func_02068270(void *, void *, void *);
s32 func_0208b948(void *, s32, s32);

void func_020f95b4(void *arg0, void *arg1, void *arg2) {
    func_02068270(arg0 + 0xBC, arg1, arg0 + 0xBC);
    if (M2C_FIELD(arg0, s32 *, 0xB4) < 0) {
        func_0208b948(arg0 + 0x190, 0, (s32) M2C_FIELD(arg0, s32 *, 0xB4) > 0 ? (s32) M2C_FIELD(arg0, s32 *, 0xB4) : -(s32) M2C_FIELD(arg0, s32 *, 0xB4));
        M2C_FIELD(arg0, s32 *, 0xB4) = -(s32) (((s64) M2C_FIELD(arg0, s32 *, 0xB4) * 0x668 + 0x800) >> 12);
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0xB0) * 0xF37 + 0x800) >> 12);
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0xB8) * 0xF37 + 0x800) >> 12);
    }
    *(M2C_S48 *) ((s8 *) arg0 + 0xC8) = *(M2C_S48 *) arg2;
}
