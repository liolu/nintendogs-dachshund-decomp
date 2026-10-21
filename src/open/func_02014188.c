#include "m2c.h"

extern char data_0214da84[];
void func_0203e5ac(void *, s32, s16);

void func_02014188(void *arg0, s32 arg1) {
    u32 *rng;
    u32 seed;
    u16 r;

    if (arg1 != 0) {
        rng = *(u32 **) data_0214da84;
        seed = *rng * 0x10DCD + 1;
        r = (u16) ((u16) seed * 30u >> 16);
        *rng = seed;
        switch (r) {
        case 0:
        case 1:
        case 2:
            func_0203e5ac(arg0, 1, 0x15);
            return;
        case 3:
        case 4:
        case 5:
            func_0203e5ac(arg0, 1, 0x16);
            return;
        case 6:
            func_0203e5ac(arg0, 1, 0x17);
            return;
        case 7:
            M2C_FIELD(arg0, u16 *, 0x12E) = 0;
            return;
        case 8:
            M2C_FIELD(arg0, u16 *, 0x12E) = 0x800;
            return;
        case 9:
            M2C_FIELD(arg0, u16 *, 0x12E) = 0xF800;
            return;
        default:
            goto end;
        }
    }
    func_0203e5ac(arg0, 1, 0);
    M2C_FIELD(arg0, u16 *, 0x12E) = 0;
end:
    return;
}
