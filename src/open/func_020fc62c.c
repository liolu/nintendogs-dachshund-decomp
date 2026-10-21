#include "m2c.h"
void func_020fc20c(void *);
void func_020b27dc(void *);
void func_020b26f0(void *, s32, s32, s32, s32, s32, s32);
s32 func_020b1d6c(u16, s32);
void func_020aff08(void *, s32, s32, s32, s32, void *, void *, s32, void *, void *);
void func_020fc408(void);
void func_020fc3a0(void);
void func_020fc35c(void);
void func_020fc358(void);
M2C_UNK func_020e2a64(void);
s32 func_02085d28(s32);
s32 func_02085d30(s32);
void func_0207ca98(s32, s32, s32, s32);
void func_020afbf4(s32);
void func_020fc724(s32);
void func_020fc62c(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 0:
        break;
    case 1:
        break;
    case 2: {
        s32 *temp;
        s32 temp_r4;

        if (func_020e2a64() == 0) {
            return;
        }
        temp = (s32 *) M2C_FIELD(arg0, s32 *, 0x214);
        func_020afbf4((s32) arg0);
        temp_r4 = func_02085d28(M2C_FIELD(temp, s32 *, 0x14));
        func_0207ca98(0x23, 0, func_02085d30(M2C_FIELD(temp, s32 *, 0x14)), temp_r4);
        func_0207ca98(0x19, 0, M2C_FIELD(temp, s32 *, 0x34) + 0xC, M2C_FIELD(M2C_FIELD(temp, s32 *, 0x34), s32 *, 0x8));
        func_0207ca98(0x15, 0, M2C_FIELD(M2C_FIELD(temp, s32 *, 0x2C), s32 *, 0x14), M2C_FIELD(M2C_FIELD(temp, s32 *, 0x2C), s32 *, 0x10));
        func_0207ca98(0x1E, 0, M2C_FIELD(M2C_FIELD(temp, s32 *, 0x28), s32 *, 0xC), 0x1C0);
        func_0207ca98(0x1F, 0, M2C_FIELD(M2C_FIELD(temp, s32 *, 0x30), s32 *, 0xC), 0x1C0);
        M2C_FIELD(temp, s32 *, 0x2B8) = 1;
        return;
    }
    case 3:
        func_020fc724((s32) arg0);
        break;
    }
}
