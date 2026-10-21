#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 mode;
    s32 unk8;
    s32 timer;
    s32 flag;
    u16 counter;
    u16 pad16;
    s32 value;
} Edd14Obj;

extern u8 data_0214d624[];
extern u8 data_02124e68[];

s32 func_020eb5a4(s32, s32, s32);
void func_020ebbdc(s32, s32, s32, s32);
void func_020ebb0c(s32, s32, s32);
void func_020dd914(void);
void func_020dd904(void);
s32 func_ov005_0216297c(void);

void func_020edd14(Edd14Obj *arg0) {
    s32 ret;
    s32 flag;
    s16 tv;
    f32 v;
    f32 x;
    f32 y;
    f32 z;

    ret = func_020eb5a4(0, data_0214d624[0], data_0214d624[1]);
    flag = (*(u16 *) (data_0214d624 + 2) & 2) != 0;
    arg0->unk0 = 0;
    if (flag) {
        switch (ret) {
        case 0:
            arg0->mode = 2;
            arg0->unk0 = 2;
            func_020ebbdc(0, 0, 2, 2);
            func_020ebb0c(0, 0, 0);
            arg0->timer = 10;
            func_020dd914();
            break;
        case 1:
            arg0->mode = 1;
            arg0->unk0 = 1;
            func_020ebbdc(0, 1, 2, 2);
            func_020ebb0c(0, 0, 1);
            arg0->timer = 10;
            func_020dd914();
            break;
        }
    }
    if (arg0->timer > 0) {
        arg0->timer--;
        if (arg0->timer <= 0) {
            func_020ebbdc(0, 0, 0, 0);
            func_020ebbdc(0, 1, 0, 0);
        }
    }
    if (arg0->mode == 1) {
        arg0->flag = 0;
    } else if (arg0->flag == 0) {
        if (func_ov005_0216297c() != 0) {
            arg0->flag = 1;
        }
    }
    if (arg0->flag != 0) {
        tv = *(s16 *) (data_02124e68 + ((arg0->counter >> 4) << 2));
        v = (f32) tv;
        x = v / 4096.0f;
        y = (4096.0f + x) / 2.0f;
        if (y) {
            z = 4096.0f * y + 0.5f;
        } else {
            z = 4096.0f * y - 0.5f;
        }
        arg0->value = (s32) z / 4 + 0x1000;
        if (arg0->counter == 0x8000) {
            func_020dd904();
        }
        arg0->counter += 0x800;
    } else {
        arg0->value = 0x1000;
        arg0->counter = 0;
    }
}
