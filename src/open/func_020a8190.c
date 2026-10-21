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
void func_02027540(s32, void *);
void func_01ff832c(M2C_UNK, void *, void *, M2C_UNK);

void func_020a8190(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_S12 val;
    M2C_S48 buf;
    s32 handle;
    s16 i;

    i = 0;
    for (;;) {
        if (M2C_FIELD(arg0, s32 *, 0x16C) & (1 << i)) {
            break;
        }
        i++;
        if (i >= 3) {
            i = -1;
            break;
        }
    }
    handle = func_01ffdb08(i);
    if (handle == 0) {
        return;
    }
    func_02027540(handle, (s8 *) arg0 + 0xB0);
    M2C_FIELD(arg0, s32 *, 0xB0) = M2C_FIELD(arg0, s32 *, 0xB0) << arg1;
    M2C_FIELD(arg0, s32 *, 0xB4) = arg3 + (M2C_FIELD(arg0, s32 *, 0xB4) << arg2);
    M2C_FIELD(arg0, s32 *, 0xB8) = M2C_FIELD(arg0, s32 *, 0xB8) << arg1;
    func_02027168(handle, &buf, 0x11);
    val.f0 = buf.f[0];
    val.f1 = buf.f[1];
    val.f2 = buf.f[2];
    val.f1 = 0;
    func_01ff832c(0x3D7, &val, (s8 *) arg0 + 0xB0, (M2C_UNK) ((s8 *) arg0 + 0xB0));
}
