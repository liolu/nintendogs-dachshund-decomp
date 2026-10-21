#include "m2c.h"
void func_02116da0(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
void func_020e2890(void);
extern void *data_02159e64;

typedef struct {
    u8 pad[0x94];
    s16 f94;
    u8 pad2[4];
    s16 f9a;
    u8 pad3[8];
    s32 fA4;
} St;

typedef struct {
    u8 pad[0x2A];
    s16 f2A;
    s16 f2C;
    s16 f2E;
    s16 f30;
    u8 pad32[0x4E];
    s16 f80;
    u8 pad82[0x7E];
    s16 f100;
} Obj;

void func_02121ac8(s32 arg0) {
    St *g;
    s32 v;
    s16 w;

    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        g = (St *) data_02159e64;
        if (g->fA4 == 0) {
            return;
        }
        v = g->f94;
        switch (v) {
        case 3:
        case 4:
            w = g->f9a;
            break;
        default:
            w = 0;
            break;
        }
        switch (w) {
        case 0:
            M2C_FIELD(arg0, s16 *, 0x2E) = 2;
            M2C_FIELD(arg0, s16 *, 0x30) = 0;
            M2C_FIELD((u8 *) arg0 + 0x100, s16 *, 0) = 2;
            return;
        case 1:
            func_02116dec(arg0, M2C_FIELD(arg0, s16 *, 0x80));
            func_02116d20(arg0, 0);
            func_020e2890();
            return;
        }
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) == 0) {
            return;
        }
        func_02116f14(arg0);
        return;
    }
}
