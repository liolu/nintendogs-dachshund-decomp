#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern void *data_0215a064;
extern u8 *data_021555f8;
s32 func_02044980(s32);
void func_020a80bc(s32, Vec *, s32);
void func_02114658(s32, void *, Vec *);
void func_020a7fdc(s32, void *);
void func_020a9734(s32, void *, M2C_UNK, M2C_UNK, M2C_UNK, void *);
void func_020afbc4(s32);
s32 func_02068038(void *);
void func_0208b948(s32, s32, s32);
void func_02044838(void);

void func_020b257c(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6,
                    s32 arg7) {
    Vec v;
    Vec t;
    s32 handle;

    handle = func_02044980(0);
    func_020a80bc((s32) arg0, &t, arg7);
    func_02114658(handle, (u8 *) arg0 + 0xBC, &t);
    func_020a7fdc((s32) arg0, (u8 *) arg0 + 0xC8);
    if ((M2C_FIELD(data_0215a064, u16 *, 0x84) & 1)
        && M2C_FIELD(data_021555f8, s32 *, 0x24) == 0) {
        return;
    }
    func_020a9734(handle, (u8 *) arg0 + 0xBC, arg1, arg2, arg3, (u8 *) arg0 + 0xB0);
    v = *(Vec *) ((u8 *) M2C_FIELD(data_0215a064, void **, 0x1C) + 0x48);
    M2C_FIELD(arg0, s32 *, 0xB0) += (s32) (((s64) v.x * arg4 + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0xB8) += (s32) (((s64) v.z * arg4 + 0x800) >> 12);
    if (M2C_FIELD(arg0, s32 *, 0xB4) > arg5) {
        M2C_FIELD(arg0, s32 *, 0xB4) = arg5;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) < -arg5) {
        M2C_FIELD(arg0, s32 *, 0xB4) = -arg5;
    }
    func_020afbc4((s32) arg0);
    if (arg6 >= 0) {
        func_0208b948((s32) arg0 + 0x190, arg6, func_02068038((u8 *) arg0 + 0xB0));
    }
    func_02044838();
}
