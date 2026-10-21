#include "m2c.h"
s32 func_02116da0(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
void func_0212162c(void);
void func_020d2c64(s32, s32, s32, s32, s32);
void func_02088e24(void);
void func_02088df0(void);
extern void *data_02159e64;

typedef struct {
    u8 pad[0xA4];
    s32 fA4;
} St;

typedef struct {
    u8 pad[0x2A];
    s16 f2A;
    s16 f2C;
    s16 f2E;
} Obj;

void func_021214f8(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (func_02116da0(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0x2A) = 0;
        }
        return;
    case 1:
        switch (M2C_FIELD(arg0, s16 *, 0x2A)) {
        case 0:
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x2A) = 1;
            func_020d2c64(2, 0xCFC, 0, (s32) func_0212162c, 0);
            func_02088e24();
            return;
        case 1:
            if (M2C_FIELD(data_02159e64, s32 *, 0xA4) == 0) {
                return;
            }
            func_02116dec(arg0, 2);
            func_02116d20(arg0, 0);
            func_02088df0();
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
        M2C_FIELD(arg0, s16 *, 0x2A) = 0;
        func_02116f14(arg0);
        return;
    }
}
