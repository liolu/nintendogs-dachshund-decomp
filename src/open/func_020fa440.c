#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

void func_020fa440(void *arg0) {
    Vec3 vec_a;
    Vec3 vec_b;
    Vec3 vec_c;
    Vec3 vec_d;

    vec_a.x = M2C_FIELD(arg0, s32 *, 0xC8);
    vec_a.y = M2C_FIELD(arg0, s32 *, 0xCC);
    vec_a.z = M2C_FIELD(arg0, s32 *, 0xD0);
    vec_b.z = M2C_FIELD(arg0, s32 *, 0xDC);
    vec_b.y = M2C_FIELD(arg0, s32 *, 0xD8);
    vec_b.x = M2C_FIELD(arg0, s32 *, 0xD4);
    vec_c.x = M2C_FIELD(arg0, s32 *, 0xE0);
    vec_c.y = M2C_FIELD(arg0, s32 *, 0xE4);
    vec_c.z = M2C_FIELD(arg0, s32 *, 0xE8);
    vec_d = vec_a;
    vec_a = vec_c;
    vec_c.x = -vec_d.x;
    vec_c.y = -vec_d.y;
    vec_c.z = -vec_d.z;
    M2C_FIELD(arg0, s32 *, 0xC8) = vec_a.x;
    M2C_FIELD(arg0, s32 *, 0xCC) = vec_a.y;
    M2C_FIELD(arg0, s32 *, 0xD0) = vec_a.z;
    M2C_FIELD(arg0, s32 *, 0xD4) = vec_b.x;
    M2C_FIELD(arg0, s32 *, 0xD8) = vec_b.y;
    M2C_FIELD(arg0, s32 *, 0xDC) = vec_b.z;
    M2C_FIELD(arg0, s32 *, 0xE0) = vec_c.x;
    M2C_FIELD(arg0, s32 *, 0xE4) = vec_c.y;
    M2C_FIELD(arg0, s32 *, 0xE8) = vec_c.z;
}
