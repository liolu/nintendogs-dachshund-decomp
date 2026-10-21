#include "m2c.h"
extern s8 *data_02158ac8;
void func_0207e124(s32);
void func_0207e124(s32 arg0);
void func_020c7740(void) {
    if (M2C_FIELD(data_02158ac8, s32 *, 0xC) != 0) {
        func_0207e124(M2C_FIELD(data_02158ac8, s32 *, 0xC));
    }
    M2C_FIELD(data_02158ac8, u16 *, 8) = 0xFFFF;
    M2C_FIELD(data_02158ac8, s32 *, 0xC) = 0;
}
