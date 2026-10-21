#include "m2c.h"
extern u8 data_02154578[];
void func_02070f88(void *, s32);
void func_02070ee4(void *);
void func_02091710(void) {
    u8 *p = data_02154578;
    u8 *q;

    if (M2C_FIELD(p, u32 *, 0x34) == 0) {
        return;
    }
    if (M2C_FIELD(p, u32 *, 0x38) == 0) {
        q = p + 8;
        if (M2C_FIELD(p, s16 *, 4) == 3) {
            if (M2C_FIELD(q, u32 *, 0) != 0) {
                func_02070f88(q, 0xA);
                func_02070ee4(q);
            }
        }
    }
    M2C_FIELD(p, u32 *, 0x38) = 0;
}
