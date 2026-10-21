#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} M2C_Vec3;

extern M2C_Vec3 data_02139ad8;
extern M2C_UNK data_02150e58;
void func_02022900(M2C_UNK, M2C_Vec3 *);
void func_01ff832c(M2C_UNK, void *, M2C_UNK, M2C_UNK);

void func_0202285c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_Vec3 w;
    M2C_Vec3 v = data_02139ad8;
    s32 val;

    func_02022900(arg1, &v);
    w.x = M2C_FIELD(&data_02150e58, s32 *, 0x50);
    w.y = M2C_FIELD(&data_02150e58, s32 *, 0x5C);
    w.z = M2C_FIELD(&data_02150e58, s32 *, 0x68);
    val = (s32) (((s64) M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8) * -164 + 0x800) >> 12);
    func_01ff832c(val, &w, arg1, arg2);
}
