#include "m2c.h"
s32 func_0200c488(s32, s32);
void func_01ff8000(s32 *, s16, s16);
void func_01ff8020(s32 *, s16, s16);
void func_01ff803c(s32 *, s16, s16);
void func_01ff810c(s32 *, s32 *, s32 *);
void func_02067d44(s32, void *, void *, void *);
void func_020b6964(M2C_UNK, M2C_UNK, M2C_UNK);
extern s16 data_02124e68[];
void func_020bd3bc(s32 arg0, s32 arg1) {
    s32 vec[3];
    s32 row[3];
    s32 m1[12];
    s32 m2[12];
    s32 rec = func_0200c488(0, 0);
    u16 angle_x = *(u16 *) (rec + 2);
    u16 angle_y = *(u16 *) (rec + 4);
    u16 angle_z = *(u16 *) (rec + 6);
    s32 i = angle_x >> 4;
    s32 j = i * 2;
    s32 k = j + 1;

    func_01ff8000(m1, data_02124e68[j], data_02124e68[k]);
    i = angle_y >> 4;
    j = i * 2;
    k = j + 1;
    func_01ff8020(m2, data_02124e68[j], data_02124e68[k]);
    func_01ff810c(m1, m2, m1);
    i = angle_z >> 4;
    j = i * 2;
    k = j + 1;
    func_01ff803c(m2, data_02124e68[j], data_02124e68[k]);
    func_01ff810c(m1, m2, m1);
    row[0] = m1[6];
    row[1] = m1[7];
    row[2] = m1[8];
    func_02067d44(0x1e000, row, (void *) (rec + 8), vec);
    vec[1] = 0x5000;
    func_020b6964(arg1, (s32) vec, *(s16 *) (arg0 + 0x5c));
}
