#include "m2c.h"
extern s16 data_02124e68[];
void func_020667fc(s16 *, s32, s32);
void func_02066818(s16 *, s32, s32);
void func_02066834(s16 *, s32, s32);
void func_0206684c(void *, s16 *, void *);
void func_02085840(u16 *arg0, u8 *arg1) {
    s16 buf[0x14];
    s32 i;
    s32 j;
    s32 k;
    s32 a;
    s32 b;

    switch (arg0[1]) {
    case 0:
        i = arg0[0] >> 4;
        j = i * 2;
        k = j + 1;
        a = data_02124e68[j];
        b = data_02124e68[k];
        func_020667fc(buf, a, b);
        break;
    case 1:
        i = arg0[0] >> 4;
        j = i * 2;
        k = j + 1;
        a = data_02124e68[j];
        b = data_02124e68[k];
        func_02066818(buf, a, b);
        break;
    case 2:
        i = arg0[0] >> 4;
        j = i * 2;
        k = j + 1;
        a = data_02124e68[j];
        b = data_02124e68[k];
        func_02066834(buf, a, b);
        break;
    }
    func_0206684c(arg1 + 0x14, buf, arg1 + 0x14);
}
