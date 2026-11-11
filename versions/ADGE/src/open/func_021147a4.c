#include "m2c.h"

extern void *data_0215a064;
extern s32 func_021148f8(s32, s32 *, s32 *);
extern void func_020e2104(s32, s32);
extern void func_0208f08c(s32, s32);
extern void func_020e1564(s32);

void func_021147a4(s32 arg0) {
    s16 old;
    s32 var;
    s32 diff;

    old = M2C_FIELD(data_0215a064, s16 *, 0x56);
    var = 0;
    if (M2C_FIELD(data_0215a064, s16 *, 0x58) != -2) {
        return;
    }
    M2C_FIELD(data_0215a064, s16 *, 0x58) = arg0;
    M2C_FIELD(data_0215a064, s16 *, 0x5E) = 0;
    if (M2C_FIELD(data_0215a064, s16 *, 0x58) > 0) {
        M2C_FIELD(data_0215a064, s16 *, 0x5C) = func_021148f8(arg0, &var, (s32 *) ((u8 *) data_0215a064 + 0x60));
        M2C_FIELD(data_0215a064, s16 *, 0x56) += M2C_FIELD(data_0215a064, s16 *, 0x5C);
        if (M2C_FIELD(data_0215a064, s16 *, 0x56) > 0x270F) {
            M2C_FIELD(data_0215a064, s16 *, 0x56) = 0x270F;
        }
    } else {
        func_021148f8(arg0, &var, (s32 *) ((u8 *) data_0215a064 + 0x60));
    }
    if (!(M2C_FIELD(data_0215a064, s32 *, 0x20) & 0x10)) {
        return;
    }
    diff = M2C_FIELD(data_0215a064, s16 *, 0x56) - old;
    switch (M2C_FIELD(data_0215a064, s16 *, 0x58)) {
        case -1:
        case 0:
            func_020e2104(3, diff);
            func_0208f08c(8, var);
            break;
        case 1:
            func_020e2104(2, diff);
            func_0208f08c(9, diff);
            break;
        case 2:
            func_020e2104(1, diff);
            func_0208f08c(0xA, diff);
            break;
    }
    func_020e1564(9);
}
