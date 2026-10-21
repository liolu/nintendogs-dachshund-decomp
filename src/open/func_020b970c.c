#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Blk;

s32 func_020b2874(void);
s32 func_020a5dcc(void);
s32 func_02061d7c(void);
void func_020a7dac(s32);
void func_020a7d20(s32 *);
void func_020b970c(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 2;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s16 *, 0x3C) = -1;
    M2C_FIELD(arg0, s16 *, 0x3E) = -1;
    M2C_FIELD(arg0, s16 *, 0x40) = -1;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    M2C_FIELD(arg0, s16 *, 0x50) = 0;
    *(Blk *)((u8 *)arg0 + 0x54) = *(Blk *)((u8 *)arg0 + 0xC);
    if (func_020b2874() != 0) {
        M2C_FIELD(arg0, s32 *, 0x70) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x70) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x76) = -1;

    switch (func_020a5dcc()) {
    case 0: {
        s32 v[3];

        v[0] = 0;
        v[1] = 0;
        v[2] = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        func_020a7d20(v);
        func_020a7dac((u16) (func_02061d7c() % 8 * 0x1FFF));
        break;
    }
    case 1: {
        s32 v[3];

        v[0] = 0;
        v[1] = 0;
        v[2] = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x2C) = 4;
        func_020a7d20(v);
        break;
    }
    case 2: {
        s32 v[3];

        v[0] = 0x1000;
        v[1] = 0;
        v[2] = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x2C) = 5;
        func_020a7d20(v);
        break;
    }
    case 3: {
        s32 v[3];

        v[0] = 0;
        v[1] = 0;
        v[2] = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x2C) = 6;
        func_020a7d20(v);
        break;
    }
    case 4: {
        s32 v[3];

        v[0] = 0;
        v[1] = 0;
        v[2] = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x2C) = 7;
        func_020a7d20(v);
        break;
    }
    case 7: {
        s32 v[3];

        v[0] = 0;
        v[1] = 0;
        v[2] = 0x1000;
        M2C_FIELD(arg0, s32 *, 0x2C) = 8;
        func_020a7d20(v);
        break;
    }
    }
}
