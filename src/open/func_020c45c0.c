#include "m2c.h"
typedef struct {
    s32 x, y, z;
} UnkVec32;

M2C_UNK func_02006a20(void *, void *);              /* extern */
void func_0206810c(void *, void *, void *);         /* extern */
void func_02068270(void *, void *, void *);         /* extern */
void func_020a7ea0(void *, s32);                    /* extern */
M2C_UNK func_020aff08(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020b1d6c(u16, s32);                        /* extern */
extern M2C_UNK func_020c48c4;
extern M2C_UNK func_020c48d0;
extern M2C_UNK func_020c48ec;
extern M2C_UNK func_020c4920;
M2C_UNK func_02006a20(void *, void *);
void func_0206810c(void *, void *, void *);
void func_02068270(void *, void *, void *);
void func_020a7ea0(void *, s32);
M2C_UNK func_020aff08(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 func_020b1d6c(u16, s32);
extern M2C_UNK func_020c3b54;
extern M2C_UNK func_020c3b60;
extern M2C_UNK func_020c3b7c;
extern M2C_UNK func_020c3f04;
void func_020a7460(void *);
void func_020c4038(void *);
void func_020a7470(u8 *arg0);
void func_0208bad4(u8 *arg0, s16 arg1);
void func_020a8df4(void *);
void func_0208b39c(void *);
void func_020c45c0(void *arg0) {
    UnkVec32 vec_a;
    void *temp_r5;
    UnkVec32 vec_b;
    UnkVec32 vec_c;
    s32 x, y, z;

    temp_r5 = M2C_FIELD(arg0, void **, 0x214);
    M2C_FIELD(arg0, s32 *, 0xB4) += *M2C_FIELD(temp_r5, s32 **, 0);
    func_02068270(arg0 + 0xBC, arg0 + 0xB0, arg0 + 0xBC);
    func_020a7ea0(arg0, M2C_FIELD(M2C_FIELD(temp_r5, void **, 0), s32 *, 0x5C));
    x = M2C_FIELD(arg0, s32 *, 0xC8);
    z = M2C_FIELD(arg0, s32 *, 0xD0);
    y = M2C_FIELD(arg0, s32 *, 0xCC);
    vec_a.x = x;
    vec_a.y = y;
    vec_a.z = z;
    x = M2C_FIELD(arg0, s32 *, 0xD4);
    z = M2C_FIELD(arg0, s32 *, 0xDC);
    y = M2C_FIELD(arg0, s32 *, 0xD8);
    vec_b.x = x;
    vec_b.y = y;
    vec_b.z = z;
    func_0206810c(&vec_a, &vec_b, &vec_c);
    func_02006a20(&vec_a, &vec_a);
    func_02006a20(&vec_c, &vec_c);
    func_0206810c(&vec_c, &vec_a, &vec_b);
    M2C_FIELD(arg0, s32 *, 0xC8) = vec_a.x;
    M2C_FIELD(arg0, s32 *, 0xCC) = vec_a.y;
    M2C_FIELD(arg0, s32 *, 0xD0) = vec_a.z;
    M2C_FIELD(arg0, s32 *, 0xD4) = vec_b.x;
    M2C_FIELD(arg0, s32 *, 0xD8) = vec_b.y;
    M2C_FIELD(arg0, s32 *, 0xDC) = vec_b.z;
    M2C_FIELD(arg0, s32 *, 0xE0) = vec_c.x;
    M2C_FIELD(arg0, s32 *, 0xE4) = vec_c.y;
    M2C_FIELD(arg0, s32 *, 0xE8) = vec_c.z;
    func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                  func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)),
                  &func_020c4920, 0, &func_020c48ec, &func_020c48d0, &func_020c48c4);
}
