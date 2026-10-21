#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern M2C_UNK data_02150e58;
extern void func_020a7470(s32);
extern s32 func_02044980(s16);
extern void func_020a80bc(s32, void *, s32);
extern void func_01ff832c(s32, Vec *, Vec *, Vec *);
extern void func_0206823c(Vec *, Vec *, Vec *);

void func_020af294(s32 arg0) {
    Vec u;
    s16 i;
    Vec *p;
    Vec *trail;
    Vec v;
    unsigned t;
    Vec w;

    trail = (Vec *) M2C_FIELD(arg0, s32 *, 0x214);
    func_020a7470(arg0);
    M2C_FIELD(arg0, u16 *, 0x20) |= 0x10;
    func_02044980(M2C_FIELD(arg0, s16 *, 0x9C));
    func_020a80bc(arg0, &u, 0x1A000);
    v.x = M2C_FIELD(&data_02150e58, s32 *, 0x4C);
    v.y = M2C_FIELD(&data_02150e58, s32 *, 0x58);
    v.z = M2C_FIELD(&data_02150e58, s32 *, 0x64);
    func_01ff832c(0x3000, &v, &u, &v);
    p = trail;
    v.y = 0;
    for (i = 0; i < 0xB; i = (s16) (i + 1)) {
        func_0206823c(&v, &u, &w);
        t = (i << 12) / 11;
        func_01ff832c(t, &w, &u, p);
        p[11].x = 0;
        p[11].y = 0;
        p[11].z = 0;
        p++;
    }
    trail[22].x = 0;
}
