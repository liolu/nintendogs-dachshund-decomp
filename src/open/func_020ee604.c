#include "m2c.h"
extern u8 data_02159e70[];
extern void func_020f0ea0(void *);
extern void func_020d6068(s32, s32, s32);
extern void func_020f1098(void *);
extern void func_02003d80(s32);
extern void func_020e2460(void);
extern void func_020e251c(void);
extern void func_020ddb58(void);
extern void func_020e26e0(s32);
extern void func_020f09f8(void *);
extern s32 func_01ffdb08(s32);
extern s32 func_020276f8(s32);
extern s32 func_020449ac(s32);
extern s32 func_020ebab8(s32, s32);
extern void func_020e83d0(s32, s32, s32, s32, s32, s32, s32, s32);
void func_020ee604(s32 arg0) {
    s32 state;
    s32 obj;
    s32 q;
    u16 idx;
    s32 i;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2F4) = 0;
    M2C_FIELD(arg0, s32 *, 0x2F8) = 0;
    M2C_FIELD(arg0, s32 *, 0x2FC) = 0;

    state = *(s32 *) (*(u8 **) data_02159e70 + 0xBC);
    if (state <= 0xA) {
        if (state >= 0xA) {
            goto case_a;
        }
        if (state != 4) {
            goto def;
        }
        goto case_b;
    }
    if (state > 0x22) {
        goto def;
    }
    if (state < 0x1E) {
        goto def;
    }
    if (state == 0x1E) {
        goto case_b;
    }
    if (state != 0x22) {
        goto def;
    }

case_22:
    func_020f0ea0((u8 *) arg0 + 0x234);
    func_020f0ea0((u8 *) arg0 + 0x254);
    func_020f0ea0((u8 *) arg0 + 0x274);
    switch (M2C_FIELD(arg0, s16 *, 0x1CB8)) {
    case 0:
        break;
    case 1:
        func_020f0ea0((u8 *) arg0 + 0x294);
        break;
    case 2:
        func_020f0ea0((u8 *) arg0 + 0x294);
        func_020f0ea0((u8 *) arg0 + 0x2B4);
        func_020f0ea0((u8 *) arg0 + 0x2D4);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x2F4) = 1;
    func_020d6068(2, 8, 1);
    goto tail;

case_b:
    func_020f0ea0((u8 *) arg0 + 0x234);
    func_020f0ea0((u8 *) arg0 + 0x254);
    func_020f0ea0((u8 *) arg0 + 0x274);
    switch (M2C_FIELD(arg0, s16 *, 0x1CB8)) {
    case 0:
        break;
    case 1:
        func_020f0ea0((u8 *) arg0 + 0x294);
        break;
    case 2:
        func_020f0ea0((u8 *) arg0 + 0x294);
        func_020f0ea0((u8 *) arg0 + 0x2B4);
        func_020f0ea0((u8 *) arg0 + 0x2D4);
        break;
    }
    goto tail;

case_a:
    func_020d6068(2, 8, 0);

def:
    func_020f1098((u8 *) arg0 + 0x234);
    func_020f1098((u8 *) arg0 + 0x254);
    func_020f1098((u8 *) arg0 + 0x274);
    switch (M2C_FIELD(arg0, s16 *, 0x1CB8)) {
    case 0:
        break;
    case 1:
        func_020f1098((u8 *) arg0 + 0x294);
        break;
    case 2:
        func_020f1098((u8 *) arg0 + 0x294);
        func_020f1098((u8 *) arg0 + 0x2B4);
        func_020f1098((u8 *) arg0 + 0x2D4);
        break;
    }
    func_02003d80(0x10);
    func_020e2460();
    func_020e251c();
    func_020ddb58();

tail:
    state = *(s32 *) (*(u8 **) data_02159e70 + 0xA8);
    if (state == 4 || state == 0xA || state == 0xE) {
        func_020e26e0(1);
        func_020f09f8((u8 *) arg0 + 0x18);
        func_020f09f8((u8 *) arg0 + 0x54);
    } else if (state == 0) {
        func_020e26e0(0);
    }

    for (i = 0; i < 3; i++) {
        obj = func_01ffdb08((s16) i);
        if (obj != 0) {
            q = func_020449ac(func_020276f8(obj));
            idx = (u16) (i + 6);
            func_020e83d0(2, idx, func_020ebab8(2, idx),
                          M2C_FIELD(q, s32 *, 0x88), M2C_FIELD(q, s32 *, 0x8C),
                          M2C_FIELD(q, s32 *, 0x90), 1, 1);
        }
    }
}
