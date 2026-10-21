#include "m2c.h"
extern u8 *data_02159e70;
extern s32 func_020038a8(s32 *arg0, s32 arg1);
extern void func_0206cbc4(u16 arg0, s32 arg1, s32 arg2);
extern void func_020e8194(u8 *arg0, s32 arg1);
extern void func_020d78ac(u8 *arg0);
extern s32 func_020ceb98(void);
extern void func_020e51dc(u8 *arg0, s32 arg1, s32 arg2);
extern s32 func_020ceb30(void);
extern s32 func_020e5304(void);
extern void func_020e3e2c(s32 arg0);
extern void func_020e3df0(void);
extern void func_020db4f0(u8 *arg0);
extern void func_020dcbf8(u8 *arg0, s32 arg1);
extern void func_020066f0(s32 arg0, void (*arg1)(void));
extern void func_020d75f8(void);
extern void func_020d605c(void);
u8 *func_020d7b2c(s32 arg0, s32 arg1) {
    u8 *obj;
    volatile u16 fill;

    obj = (u8 *) func_020038a8((s32 *) arg1, 0x1116C);
    fill = 0;
    data_02159e70 = obj;
    func_0206cbc4(fill, (s32) obj, 0x1116C);
    M2C_FIELD(obj, s32 *, 0xA8) = arg0;
    func_020e8194(obj, arg1);
    func_020d78ac(obj);
    switch (M2C_FIELD(obj, s32 *, 0xA8)) {
        case 0:
        case 3:
        case 4:
        case 12:
        case 14:
            M2C_FIELD(obj + 0x4000, s32 *, 0x8B0) = 1;
            func_020e51dc(obj + 0x1113C, arg1, func_020ceb98());
            if (func_020ceb30() != 0) {
                if (func_020e5304() != 0) {
                    func_020e3e2c(6);
                } else {
                    func_020e3e2c(7);
                }
            } else {
                func_020e3df0();
            }
            break;
        case 13:
        case 15:
            break;
        default:
            func_020e3e2c(0);
            M2C_FIELD(obj + 0x4000, s32 *, 0x8B0) = 0;
            break;
    }
    func_020db4f0(obj + 0x54E8);
    if (M2C_FIELD(obj, s32 *, 0xA8) == 1) {
        func_020dcbf8(data_02159e70 + 0x5028, 0);
    } else {
        func_020dcbf8(data_02159e70 + 0x5028, 1);
    }
    func_020066f0(0xE, func_020d605c);
    switch (M2C_FIELD(obj, s32 *, 0xA8)) {
        case 1:
            if (M2C_FIELD(data_02159e70, s32 *, 0xB0) == 0) {
                M2C_FIELD(data_02159e70, s32 *, 0xB4) = 1;
            }
            break;
        case 13:
            if (M2C_FIELD(data_02159e70, s32 *, 0xB0) == 0) {
                M2C_FIELD(data_02159e70, s32 *, 0xB4) = 0x29;
            }
            break;
        case 15:
            if (M2C_FIELD(data_02159e70, s32 *, 0xB0) == 0) {
                M2C_FIELD(data_02159e70, s32 *, 0xB4) = 0x2A;
            }
            break;
        case 11:
            if (M2C_FIELD(data_02159e70, s32 *, 0xB0) == 0) {
                M2C_FIELD(data_02159e70, s32 *, 0xB4) = 0x27;
            }
            break;
    }
    func_020d75f8();
    if (M2C_FIELD(obj, s32 *, 0xA8) == 0xF) {
        M2C_FIELD(data_02159e70 + 0x4000, s32 *, 0x848) = 0x2400;
        M2C_FIELD(data_02159e70 + 0x5000, s32 *, 0x30) = 1;
    }
    return obj;
}
