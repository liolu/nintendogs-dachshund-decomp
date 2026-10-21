#include "m2c.h"

extern s8 *data_0215a04c;
extern s8 *data_0215a078;
void func_020a7460();
s32 func_ov004_0215a758();
void func_020afbc4();
void func_020afb54();
s32 func_01ffdb08();
s32 func_02042a2c();
void func_02027168();
void func_0206810c();

void func_020c2890(void *arg0) {
    s32 a[3];
    s32 b[3];
    s32 c[3];
    s32 mtx[12];
    s32 angle;

    func_020a7460(arg0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u16 *, 0x20) =
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x18C), u16 *, 0x20) | 1;
    switch (M2C_FIELD(data_0215a04c, u16 *, 0)) {
    case 9:
        if (func_ov004_0215a758() != 0) {
            func_020afbc4(arg0);
            return;
        }
        func_020afb54(arg0, M2C_FIELD(data_0215a078, s16 *, 2));
        angle = func_01ffdb08(M2C_FIELD(data_0215a078, s16 *, 2));
        break;
    case 7:
        func_020afb54(arg0, M2C_FIELD(data_0215a04c, s16 *, 0xE));
        angle = func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE));
        break;
    case 0xB:
        func_020afb54(arg0, M2C_FIELD(data_0215a04c, s16 *, 0x1C));
        angle = func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0x1C));
        break;
    default:
        func_020afb54(arg0, func_02042a2c());
        angle = func_01ffdb08(func_02042a2c());
        break;
    }
    func_02027168(angle, mtx, 0xC);
    a[0] = mtx[6];
    a[1] = mtx[7];
    a[2] = mtx[8];
    b[0] = mtx[0];
    b[1] = mtx[1];
    b[2] = mtx[2];
    a[0] = -a[0];
    a[1] = -a[1];
    a[2] = -a[2];
    func_0206810c(a, b, c);
    M2C_FIELD(arg0, s32 *, 0xC8) = a[0];
    M2C_FIELD(arg0, s32 *, 0xCC) = a[1];
    M2C_FIELD(arg0, s32 *, 0xD0) = a[2];
    M2C_FIELD(arg0, s32 *, 0xD4) = b[0];
    M2C_FIELD(arg0, s32 *, 0xD8) = b[1];
    M2C_FIELD(arg0, s32 *, 0xDC) = b[2];
    M2C_FIELD(arg0, s32 *, 0xE0) = c[0];
    M2C_FIELD(arg0, s32 *, 0xE4) = c[1];
    M2C_FIELD(arg0, s32 *, 0xE8) = c[2];
}
