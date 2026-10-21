#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    u8 pad0[0x30];
    Vec unk30;
    Vec unk3c;
    Vec unk48;
    Vec unk54;
    Vec unk60;
    u8 pad6c[0x10];
    s32 unk7c;
    u16 unk80;
    u16 unk82;
} S;

void *func_020038a8(s32, s32);
void func_020c9e1c(void *);
void func_020ca4b0(void *, void *);
void func_020c9ad4(void *);
extern s16 data_02124e68[];
void func_0206823c(Vec *, Vec *, Vec *);
void func_02006a20(const Vec *, Vec *);
void func_0206810c(Vec *, Vec *, Vec *);
S *func_020c9990(s32 arg0) {
    S *p;
    s32 i2;
    s32 i3;
    s32 j2;
    s32 j3;
    s32 y;
    s32 scale;

    p = (S *) func_020038a8(arg0, 0x84);
    func_020c9e1c(p);
    func_020ca4b0(p, (void *) func_020c9ad4);
    p->unk7c = 0x5000;
    p->unk80 = 0x600;
    p->unk82 = 0;
    i2 = (p->unk80 >> 4) * 2;
    i3 = i2 + 1;
    j2 = (p->unk82 >> 4) * 2;
    j3 = j2 + 1;
    scale = p->unk7c;
    y = (s32) (((s64) scale * data_02124e68[i3] + 0x800) >> 12);
    p->unk30.x = p->unk3c.x + (s32) (((s64) y * data_02124e68[j2] + 0x800) >> 12);
    p->unk30.y = p->unk3c.y + (s32) (((s64) scale * data_02124e68[i2] + 0x800) >> 12);
    p->unk30.z = p->unk3c.z + (s32) (((s64) y * data_02124e68[j3] + 0x800) >> 12);
    func_0206823c(&p->unk3c, &p->unk30, &p->unk48);
    func_02006a20(&p->unk48, &p->unk48);
    func_0206810c(&p->unk54, &p->unk48, &p->unk60);
    func_02006a20(&p->unk60, &p->unk60);
    return p;
}
