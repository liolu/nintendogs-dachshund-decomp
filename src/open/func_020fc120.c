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
void func_020fc120(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 1:
        func_020fc20c(arg0);
        break;
    case 2:
        func_020b27dc(arg0);
        break;
    case 3:
        func_020b26f0(arg0, 0x40, 0x40, 0x60, 0x1EC, 0x802, 4);
        func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), 0, 0,
                      func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)),
                      &func_020fc408, &func_020fc3a0, 0, &func_020fc35c, &func_020fc358);
        break;
    case 0:
    case 4:
    case 5:
    case 6:
    case 7:
    default:
        break;
    }
}
