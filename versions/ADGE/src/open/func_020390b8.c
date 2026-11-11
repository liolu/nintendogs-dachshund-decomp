#include "m2c.h"
extern s16 data_02124e68[];
void func_01ff8020(void *dst, s16 a, s16 b);
void func_01ff8058(void *a, void *b, void *c);
void func_020390b8(s32 arg0, s32 arg1) {
    s32 buf[12];
    s32 i = (arg1 >> 4) * 2;
    s32 j = i + 1;

    func_01ff8020(buf, data_02124e68[i], data_02124e68[j]);
    func_01ff8058((void *) (arg0 + 0x1A4), buf, (void *) (arg0 + 0x1A4));
}
