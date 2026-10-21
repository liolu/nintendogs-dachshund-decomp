#include "m2c.h"

void func_02116da0(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
void func_020ee2cc(void);
extern void *data_02159e64;

void func_02121bb8(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
            return;
        }
        switch (M2C_FIELD(data_02159e64, s16 *, 0x9A)) {
        case 0:
            M2C_FIELD(arg0, s16 *, 0x2E) = 2;
            M2C_FIELD(arg0, s16 *, 0x30) = 0;
            M2C_FIELD((u8 *) arg0 + 0x100, s16 *, 0) = 1;
            return;
        case 1:
            func_02116dec(arg0, 2);
            func_02116d20(arg0, 0);
            func_020ee2cc();
            return;
        }
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) != 0) {
            func_02116f14(arg0);
        }
        return;
    }
}
