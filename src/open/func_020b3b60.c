#include "m2c.h"
void *func_0200c488(s32, s32);
void func_01ff8000(s32 *, s16, s16);
void func_01ff8020(s32 *, s16, s16);
void func_01ff803c(s32 *, s16, s16);
void func_01ff810c(s32 *, s32 *, s32 *);
extern s16 data_02124e68[];

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    u8 unk_0[2];
    u16 ang0;
    u16 ang1;
    u16 ang2;
    Vec pos;
    u8 unk_14[0x14];
    s32 f28;
} Pose;

void func_020b3b60(s32 *arg0, s32 arg1, s32 arg2) {
    s32 m[12];
    s32 m2[12];
    Pose *p;
    u16 a0;
    u16 a1;
    u16 a2;
    s32 s0;
    s32 s1;
    s32 s2;

    p = (Pose *) func_0200c488(0xF, arg1);
    *(Vec *) arg0 = p->pos;
    a0 = p->ang0;
    a1 = p->ang1;
    a2 = p->ang2;
    {
        s32 i = a0 >> 4;
        s32 j = i * 2;
        s32 k = j + 1;
        func_01ff8000(m, data_02124e68[j], data_02124e68[k]);
    }
    {
        s32 i = a1 >> 4;
        s32 j = i * 2;
        s32 k = j + 1;
        func_01ff8020(m2, data_02124e68[j], data_02124e68[k]);
    }
    func_01ff810c(m, m2, m);
    {
        s32 i = a2 >> 4;
        s32 j = i * 2;
        s32 k = j + 1;
        func_01ff803c(m2, data_02124e68[j], data_02124e68[k]);
    }
    func_01ff810c(m, m2, m);
    arg0[3] = p->pos.x + (s32) (((s64) arg2 * m[6] + 0x800) >> 12);
    arg0[4] = p->pos.y + (s32) (((s64) arg2 * m[7] + 0x800) >> 12);
    arg0[5] = p->pos.z + (s32) (((s64) arg2 * m[8] + 0x800) >> 12);
    s2 = m[5];
    s1 = m[4];
    s0 = m[3];
    arg0[6] = s0;
    arg0[7] = s1;
    arg0[8] = s2;
    arg0[9] = (p->f28 << 12) / 2;
}
