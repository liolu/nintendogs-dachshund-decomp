#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern void *data_0215a044;
extern u32 *data_0215a02c;
extern Vec3 data_0214c9a4;

s32 func_020e21b8(void);
s32 func_020e1544(void);
s32 func_02003a6c(void);
void func_02003c90(s16 arg0);
void func_02003de8(s16 arg0);
void func_021146e8(s32 arg0);
void func_020e207c(s32 arg0);
void func_0208129c(u32 arg0, s32 arg1, void *arg2);
void func_0208d438(s32 arg0, s32 arg1);

void func_0211acc0(void *arg0) {
    u16 state = M2C_FIELD(arg0, u16 *, 4);
    Vec3 v;
    u32 obj;
    s32 id;

    switch (state) {
    case 0:
        M2C_FIELD(arg0, u16 *, 4) = 0x600;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        break;
    case 0x600:
        if (func_020e21b8() == 0) {
            break;
        }
        M2C_FIELD(arg0, u16 *, 4) = 0x601;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        func_02003c90(0x1E);
        break;
    case 0x601:
        if (func_02003a6c() != 0) {
            M2C_FIELD(arg0, s16 *, 6) += 1;
        }
        if (M2C_FIELD(arg0, s16 *, 6) < 0x1E) {
            break;
        }
        M2C_FIELD(arg0, u16 *, 4) = 0x602;
        M2C_FIELD(arg0, u16 *, 6) = 0;
        func_02003de8(0xF);
        func_021146e8(M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 0x34), s16 *, 4));
        if (M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 0x34), s16 *, 4) >= 1
            && M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 0x34), s16 *, 4) <= 3) {
            v = data_0214c9a4;
            obj = data_0215a02c != 0 ? *data_0215a02c : 0;
            func_0208129c(obj, 5, &v);
            func_0208129c(obj, 6, &v);
            func_0208129c(obj, 7, &v);
        }
        func_020e207c((s16) (M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 0x34), s16 *, 4) - 1));
        id = 7;
        if (M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 0x34), s16 *, 4) >= 1
            && M2C_FIELD(M2C_FIELD(data_0215a044, s32 *, 0x34), s16 *, 4) <= 3) {
            id = 6;
        }
        func_0208d438(id, 0x7F);
        break;
    case 0x602:
        if (func_020e1544() != 0) {
            M2C_FIELD(arg0, u16 *, 4) = 1;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
        }
        break;
    }
}
