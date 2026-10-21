#include "m2c.h"
s32 func_02116da0(s32 arg0);
void func_02114c5c(s32 arg0);
s32 func_02024130(void);
s32 func_021244a8(s32 arg0);
s32 func_02122174(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_01ffdb08(s32 arg0);
void func_0202911c(s32 arg0, s32 arg1, s32 arg2);
s32 func_0212202c(s32 arg0);
void func_02114b28(s32 arg0);
void func_02121ea4(s32 arg0);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
extern void *data_02159e64;
extern void *data_0215a04c;

typedef struct {
    u8 pad0[0x2E];
    s16 f2E;
    s16 f30;
    u8 pad32[0xFE];
    s32 f130;
    s32 f134;
    s16 f138;
} Obj;

void func_02121c8c(s32 arg0) {
    s32 ok = 0;
    s32 flag;

    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        if (func_02116da0(arg0) == 0) {
            return;
        }
        func_02114c5c(arg0);
        return;
    case 1:
        if (M2C_FIELD(data_02159e64, s16 *, 0x6C) != 0) {
            return;
        }
        ok = 0;
        if (func_02024130() == 0) {
            if (func_021244a8(arg0) != 0) {
                ok = 1;
            } else if (func_02122174(arg0) != 0) {
                ok = 1;
            } else {
                flag = 0;
                switch (M2C_FIELD(arg0, s16 *, 0x138)) {
                case 1:
                    func_02116dec(arg0, 0x11);
                    func_02116d20(arg0, ok);
                    flag = 1;
                    break;
                case 2:
                    func_02116dec(arg0, 0xA);
                    func_02116d20(arg0, ok);
                    func_0202911c(func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0x1C)), 0x59, 1);
                    flag = 1;
                    break;
                }
                if (flag) {
                    M2C_FIELD(arg0, s16 *, 0x138) = 0;
                }
                if (flag) {
                    ok = 1;
                } else if (func_0212202c(arg0) != 0) {
                    ok = 1;
                }
            }
        }
        if (ok != 0) {
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0x130) == -2) {
            M2C_FIELD(arg0, s32 *, 0x130) = 0x8CA0;
        }
        if (M2C_FIELD(arg0, s32 *, 0x134) == -2) {
            M2C_FIELD(arg0, s32 *, 0x134) = 0x8CA0;
        }
        func_02114b28(arg0);
        func_02121ea4(arg0);
        return;
    case 2:
        break;
    case 3:
        M2C_FIELD(arg0, s16 *, 0x30) = M2C_FIELD(arg0, s16 *, 0x30) + 1;
        if (M2C_FIELD(arg0, s16 *, 0x30) < 0x3C) {
            return;
        }
        func_02116dec(arg0, 6);
        func_02116d20(arg0, 1);
        return;
    case 4:
        if (func_02116cb4(arg0) == 0) {
            return;
        }
        func_02116f14(arg0);
        return;
    }
}
