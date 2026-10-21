#include "m2c.h"
s32 func_ov006_021601e8(void);
s32 func_ov006_021601d4(void);
s32 func_ov006_021601c0(void);
void func_02116dec(s32, s32);
void func_02116d20(s32, s32);
void func_0208f350(s32);
void func_ov006_02162a30(s32);
extern void *data_02159e70;
extern void *data_0215a064;
extern void *data_0215a044;
void func_0211e29c(s32 arg0) {
    s32 state;
    s32 limit;
    s32 cur;

    if (M2C_FIELD(data_02159e70, s32 *, 0x48BC) == 1) {
        func_02116dec(arg0, 0xA);
        func_02116d20(arg0, 0);
        M2C_FIELD(data_0215a064, u32 *, 0x20) &= ~1;
        M2C_FIELD(data_0215a064, u32 *, 0x20) &= ~2;
        return;
    }
    state = func_ov006_021601e8();
    limit = func_ov006_021601d4();
    switch (state) {
    case 2:
    case 4:
    case 6:
    case 8:
    case 9:
        M2C_FIELD(arg0, s16 *, 0x64) -= 5;
        if (M2C_FIELD(arg0, s16 *, 0x64) < -99) {
            M2C_FIELD(arg0, s16 *, 0x64) = -99;
        }
        break;
    }
    if (M2C_FIELD(data_0215a044, s16 *, 0x0) != 0) {
        if (state != 0) {
            cur = func_ov006_021601c0();
            if (cur == M2C_FIELD(arg0, s16 *, 0x66)) {
                M2C_FIELD(arg0, s16 *, 0x66) += 1;
                if (M2C_FIELD(arg0, s16 *, 0x66) >= limit) {
                    M2C_FIELD(arg0, s16 *, 0x6A) = 1;
                    func_0208f350(0xC);
                }
            }
        }
        if (M2C_FIELD(arg0, s16 *, 0x6A) == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x68) >= 0) {
                M2C_FIELD(arg0, s16 *, 0x68) += 1;
                if (M2C_FIELD(arg0, s16 *, 0x68) >= 0x1770) {
                    M2C_FIELD(arg0, s16 *, 0x6A) = 2;
                    func_0208f350(7);
                }
            }
        }
    }
    if (M2C_FIELD(arg0, s16 *, 0x6A) == 0) {
        return;
    }
    func_02116dec((s32) data_0215a064, 0x1D);
    func_02116d20((s32) data_0215a064, 0);
    func_ov006_02162a30(0);
}
