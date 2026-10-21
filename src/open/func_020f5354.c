#include "m2c.h"
void func_020a7460(void *arg0);
void func_020a7470(void *arg0);
void func_020a8df4(void *arg0);
void func_020f540c(void *arg0);
void func_020f54e8(void *arg0);
void func_020f5354(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 0:
        func_020a7460(arg0);
        break;
    case 2: {
        s32 *temp = (s32 *) M2C_FIELD(arg0, s32 *, 0x214);

        M2C_FIELD(M2C_FIELD(temp, s32 *, 0xa4), s32 *, 0xc) = 0;
        M2C_FIELD(M2C_FIELD(temp, s32 *, 0xa4), s32 *, 0x8) = 0;
        M2C_FIELD(M2C_FIELD(temp, s32 *, 0xa0), s32 *, 0xc) = 0;
        M2C_FIELD(M2C_FIELD(temp, s32 *, 0xa0), s32 *, 0x8) = 0;
        func_020a7470(arg0);
        M2C_FIELD(temp, s32 *, 0x34) = 0;
        break;
    }
    case 3:
        func_020f54e8(arg0);
        break;
    case 1:
        func_020f540c(arg0);
        break;
    case 4:
        func_020a8df4(arg0);
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x214), s32 *, 0x34) = 1;
        break;
    }
}
