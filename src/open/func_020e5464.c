#include "m2c.h"
extern u8 *data_02159e70;
extern u8 data_0214d624[];
void func_020e64cc();
void func_020eb9fc();
void func_020e55ec();
void func_020e5d94();
void func_020e5a3c();
void func_020e5464(s32 arg0) {
    s8 *e;
    s32 i;
    u32 v0;
    u32 v1;
    u16 v2;
    u8 *q;
    u8 *d;

    e = (s8 *) arg0 + 0x38;
    for (i = 0; i < 10; i++) {
        if (*(s16 *) (e + 2) > 0) {
            *(s16 *) (e + 2) -= 1;
            if (*(s16 *) (e + 2) == 0) {
                func_020e64cc(arg0, *(s16 *) e, 0);
            }
        }
        e += 4;
    }
    func_020eb9fc(2, 0xE, M2C_FIELD((u8 *) arg0 + 0x800, u16 *, 0x86) < 0x1E);
    M2C_FIELD((u8 *) arg0 + 0x800, u16 *, 0x86) = M2C_FIELD((u8 *) arg0 + 0x800, u16 *, 0x86) + 1;
    if (M2C_FIELD((u8 *) arg0 + 0x800, u16 *, 0x86) >= 0x3C) {
        M2C_FIELD((u8 *) arg0 + 0x800, u16 *, 0x86) = 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x32) != 0) {
        M2C_FIELD(arg0, u16 *, 0x32) -= 1;
        return;
    }
    if (M2C_FIELD(data_02159e70, s32 *, 0x4860) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 1) {
        return;
    }
    q = (u8 *) arg0 + 0x1C5C;
    d = data_0214d624;
    v2 = M2C_FIELD(d, u16 *, 2);
    v0 = d[0];
    v1 = d[1];
    if ((v2 & 2) == 0) {
        return;
    }
    switch (M2C_FIELD(q, s32 *, 0)) {
    case 0:
    case 1:
    case 2:
        func_020e55ec(arg0, v0, v1);
        break;
    case 3:
    case 4:
        func_020e5d94(arg0, v0, v1);
        break;
    case 5:
    case 6:
    case 7:
        func_020e5a3c(arg0, v0, v1);
        break;
    }
}
