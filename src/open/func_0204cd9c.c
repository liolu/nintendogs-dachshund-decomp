#include "m2c.h"
void func_02039128(void *);
void func_02027644(void *, void *);
s32 func_02037130(void *, M2C_UNK);
void func_0203e5ac(void *, M2C_UNK, M2C_UNK);
s32 func_02035424(void *, M2C_UNK);
s32 func_0203535c(void *);
extern char data_0214da84[];

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Blk3;

void func_0204cd9c(void *arg0, void *arg1) {
    s32 state;
    u32 *temp_r3;
    u32 temp_r2;
    u16 temp_r0;

    if (arg1 == NULL) {
        return;
    }
    state = M2C_FIELD(arg0, s32 *, 0x464);
    switch (state) {
        default:
            func_02039128(arg0);
            func_02027644(arg1, (u8 *) arg0 + 0x278);
            *(Blk3 *) ((u8 *) arg0 + 0x3B4) = *(Blk3 *) ((u8 *) arg0 + 0x278);
            func_02037130(arg0, 0x300);
            temp_r3 = *(u32 **) data_0214da84;
            temp_r2 = *temp_r3 * 0x10DCD + 1;
            temp_r0 = (u16) ((u16) temp_r2 * 10u >> 16);
            *temp_r3 = temp_r2;
            switch (temp_r0) {
                case 0:
                    func_0203e5ac(arg0, 0, 0xA7);
                    M2C_FIELD(arg0, s32 *, 0x464) = 1;
                    return;
                case 1:
                    func_0203e5ac(arg0, 0, 0xA8);
                    M2C_FIELD(arg0, s32 *, 0x464) = 2;
                    return;
                default:
                    return;
            }
        case 1:
            func_02039128(arg0);
            func_02027644(arg1, (u8 *) arg0 + 0x278);
            *(Blk3 *) ((u8 *) arg0 + 0x3B4) = *(Blk3 *) ((u8 *) arg0 + 0x278);
            if (func_02035424(arg0, 0x1A) != 0) {
                func_02037130(arg0, 0x300);
            }
            if (func_0203535c(arg0) == 0) {
                return;
            }
            func_0203e5ac(arg0, 0, 8);
            M2C_FIELD(arg0, s32 *, 0x464) = 0;
            M2C_FIELD(arg0, s32 *, 0x468) = M2C_FIELD(arg0, s32 *, 0x468) + 1;
            return;
        case 2:
            func_02039128(arg0);
            func_02027644(arg1, (u8 *) arg0 + 0x278);
            *(Blk3 *) ((u8 *) arg0 + 0x3B4) = *(Blk3 *) ((u8 *) arg0 + 0x278);
            if (func_02035424(arg0, 0x12) != 0) {
                func_02037130(arg0, 0x300);
            }
            if (func_0203535c(arg0) == 0) {
                return;
            }
            func_0203e5ac(arg0, 0, 8);
            M2C_FIELD(arg0, s32 *, 0x464) = 0;
            M2C_FIELD(arg0, s32 *, 0x468) = M2C_FIELD(arg0, s32 *, 0x468) + 1;
            return;
    }
}
