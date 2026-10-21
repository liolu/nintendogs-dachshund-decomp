#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    Vec r0;
    Vec r1;
    Vec r2;
    Vec r3;
} Mtx34;

typedef struct {
    void *unk0;
    s32 unk4;
} G3DCam;

extern u16 data_0214d5fc[];
extern s16 data_02124e68[];
extern G3DCam *data_0215a038;

void func_01ff8000(void *, s16, s16);
void func_01ff8020(void *, s16, s16);
void func_01ff810c(void *, void *, void *);
void func_0206810c(Vec *, Vec *, Vec *);
void func_02006a20(Vec *, Vec *);

void func_02103650(void) {
    Mtx34 save;
    Mtx34 mat1;
    Mtx34 mat2;
    Vec v1;
    Vec v2;
    Vec v3;
    Mtx34 *m;
    s32 x;
    s32 y;
    s32 z;
    u16 f;
    s32 a;
    s32 b;
    s32 i;
    s32 j;
    s32 k;

    f = data_0214d5fc[1];
    m = (Mtx34 *) ((u8 *) data_0215a038->unk0 + 0x3C);

    a = 0;
    b = 0x80;
    if ((u16) (f & 0x40) != 0 || (u16) (f & 0x400) != 0) {
        a = 0x200;
    } else if ((u16) (f & 0x80) != 0 || (u16) (f & 0x2) != 0) {
        a = -0x200;
    }
    if ((u16) (f & 0x20) != 0 || (u16) (f & 0x800) != 0) {
        b = -0x200;
    } else if ((u16) (f & 0x10) != 0 || (u16) (f & 0x1) != 0) {
        b = 0x200;
    }

    i = ((u16) a) >> 4;
    j = i * 2;
    k = j + 1;
    func_01ff8000(&mat1, data_02124e68[j], data_02124e68[k]);

    i = ((u16) b) >> 4;
    j = i * 2;
    k = j + 1;
    func_01ff8020(&mat2, data_02124e68[j], data_02124e68[k]);

    func_01ff810c(&mat2, m, m);
    save = *m;
    func_01ff810c(m, &mat1, m);
    if (m->r1.y < 0xC00) {
        *m = save;
    }
    m->r1.x = 0;

    z = m->r0.z;
    y = m->r0.y;
    x = m->r0.x;
    v1.x = x;
    v1.y = y;
    v1.z = z;
    z = m->r1.z;
    y = m->r1.y;
    x = m->r1.x;
    v2.x = x;
    v2.y = y;
    v2.z = z;
    func_0206810c(&v1, &v2, &v3);
    func_02006a20(&v1, &v1);
    func_02006a20(&v3, &v3);
    func_0206810c(&v3, &v1, &v2);
    m->r0.x = v1.x;
    m->r0.y = v1.y;
    m->r0.z = v1.z;
    m->r1.x = v2.x;
    m->r1.y = v2.y;
    m->r1.z = v2.z;
    m->r2.x = v3.x;
    m->r2.y = v3.y;
    m->r2.z = v3.z;

    if (data_0215a038->unk4 != 0) {
        ((u16 *) data_0215a038->unk0)[0x10] &= ~1;
    } else {
        ((u16 *) data_0215a038->unk0)[0x10] |= 1;
    }
}
