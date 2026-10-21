#include "m2c.h"
void func_02116da0(s32 arg0);
s32 func_02114aec(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
extern void *data_02159e70;

typedef struct {
    u8 pad[0x1D54];
    s32 mode;
} Blk;

void func_02120540(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        if (func_02114aec(arg0) != 0) {
            return;
        }
        switch (((Blk *) data_02159e70)->mode + 1) {
        case 0:
            func_02116dec(arg0, 4);
            func_02116d20(arg0, 0);
            return;
        case 1:
            func_02116dec(arg0, 0xD);
            func_02116d20(arg0, 0);
            return;
        case 2:
        case 3:
        case 4:
            break;
        }
        break;
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
