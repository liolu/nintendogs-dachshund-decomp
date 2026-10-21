#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    u8 pad0[0x8A];
    s16 unk8A;
    u8 pad1[0x04];
    s16 state;
    u8 pad2[0x06];
    s16 unk98;
    u8 pad3[0x08];
    u16 unkA2;
    u8 pad4[0x18];
    s32 vec[3];
    u8 pad5[0xA4];
    u32 unk16C;
} Obj;

void func_020afc84(Obj *self, s32 a1, s32 a2, s32 a3, s32 a4, s32 cb5, s32 cb6, s32 cb7, s32 cb8, s32 cb9) {
    Vec vec1;
    Vec vec2;
    s32 work[12];
    Vec vec4;
    s32 *pv;
    s16 i;
    s16 cur;
    s32 flag;
    s32 obj;
    s32 n;
    s32 moved;

    pv = (s32 *) &vec1;
    pv[0] = 0;
    pv[1] = 0;
    pv[2] = 0;
    if (self->state != 0 && self->state != 2 && self->state != 6 && self->state != 8) {
        n = a1 * 3;
        flag = 0;
        for (i = 0; i < 3; i++) {
            obj = func_01ffdb08(i);
            cur = self->unk98;
            if (obj != 0 && i != cur && func_02034e14(obj) == 0) {
                if (func_020b1f88(obj, self->vec, a1, (s32 *) &vec1) != 0) {
                    self->unk16C |= 1 << (i + 3);
                    flag = 1;
                }
                if (func_020344e8(obj) != 0 && self->unkA2 == 0 && (self->unk16C & 7) == 0) {
                    if (func_020b1ddc(obj, self->vec, n, (s32 *) &vec1) != 0) {
                        self->unk16C |= 1 << i;
                        ((void (*)(Obj *, s32)) cb9)(self, i);
                        flag = 1;
                    }
                }
                if (self->state == 4 || self->unk8A == 4) {
                    vec1.x = 0;
                    vec1.y = 0;
                    vec1.z = 0;
                }
            }
        }
        if (flag != 0) {
            ((void (*)(Obj *, Vec *)) cb5)(self, &vec1);
        }
    }
    if (self->state == 1) {
        if (self->unk8A != 4) {
            pv = (s32 *) &vec2;
            pv[0] = 0;
            pv[1] = 0;
            pv[2] = 0;
            if (cb7 != 0) {
                if (func_020b0180(self, a2, a3, (s32 *) &vec2, work) != 0) {
                    ((void (*)(Obj *, Vec *, s32 *)) cb7)(self, &vec2, work);
                }
            } else {
                if (self->vec[1] < a1) {
                    vec2.y += a1 - self->vec[1];
                    moved = 1;
                } else {
                    moved = 0;
                }
                if (moved) {
                    ((void (*)(Obj *, Vec *)) cb6)(self, &vec2);
                }
            }
        }
    }
    if (self->state != 1) {
        return;
    }
    pv = (s32 *) &vec4;
    pv[0] = 0;
    pv[1] = 0;
    pv[2] = 0;
    if (func_020b1bec(self->vec, a1, a4, (s32 *) &vec4, (s32 *) &vec1) != 0) {
        ((void (*)(Obj *, Vec *)) cb8)(self, &vec4);
    }
}
