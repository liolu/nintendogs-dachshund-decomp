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
void func_0206823c(void *, void *, void *);
void func_01ff832c(M2C_UNK, void *, void *, M2C_UNK);
void func_020a826c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_S48 buf;
    M2C_S12 val;
    s32 handle;

    handle = func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
    if (handle == 0) {
        return;
    }
    func_02027168(handle, &buf, 0x11);
    val.f0 = buf.f[0];
    val.f1 = buf.f[1];
    val.f2 = buf.f[2];
    if (M2C_FIELD(arg0, s32 *, 0x164) == 0) {
        val.f1 = 0;
        M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (((s64) val.f0 * 0x19A + 0x800) >> 12);
        M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (((s64) val.f1 * 0x19A + 0x800) >> 12);
        M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (((s64) val.f2 * 0x19A + 0x800) >> 12);
    } else {
        func_0206823c((s8 *) arg0 + 0xBC, (s8 *) arg0 + 0x170, (s8 *) arg0 + 0xB0);
        M2C_FIELD(arg0, s32 *, 0xB0) = M2C_FIELD(arg0, s32 *, 0xB0) << arg1;
        M2C_FIELD(arg0, s32 *, 0xB4) = arg3 + (M2C_FIELD(arg0, s32 *, 0xB4) << arg2);
        M2C_FIELD(arg0, s32 *, 0xB8) = M2C_FIELD(arg0, s32 *, 0xB8) << arg1;
        val.f1 = 0;
        func_01ff832c(0x333, &val, (s8 *) arg0 + 0xB0, (M2C_UNK) ((s8 *) arg0 + 0xB0));
    }
}
