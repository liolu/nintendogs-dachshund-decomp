#include "m2c.h"
extern void *data_0215a04c;
extern void *data_0215a044;
extern char data_02159e7c[];
s32 func_0210df10(s32, s32);
void func_020d5de4(s32, s32);
void func_020d5cf0(s32, s32, s32);
s32 func_020e01d4(s32 arg0) {
    s32 obj;
    s32 p;
    s32 r1;
    s32 v;
    s16 q;

    switch (M2C_FIELD(data_0215a04c, s16 *, 6)) {
        case 0:
            if (arg0 == 0) {
                obj = M2C_FIELD(data_0215a044, s32 *, 0x34);
                v   = obj ? M2C_FIELD(obj, s16 *, 8) : 0;
            } else {
                obj = M2C_FIELD(data_0215a044, s32 *, 0x34);
                r1  = (M2C_FIELD(obj, s16 *, 6) != 0) && (arg0 == 1);
                p   = func_0210df10(arg0, r1);
                v   = M2C_FIELD(p, s16 *, 4);
            }
            func_020d5de4(v, (s32) data_02159e7c);
            break;
        case 1:
            if (arg0 == 0) {
                obj = M2C_FIELD(data_0215a044, s32 *, 0x34);
                v   = obj ? M2C_FIELD(obj, s16 *, 0xE) : 0;
            } else {
                obj = M2C_FIELD(data_0215a044, s32 *, 0x34);
                r1  = (M2C_FIELD(obj, s16 *, 6) != 0) && (arg0 == 1);
                p   = func_0210df10(arg0, r1);
                q   = (s16) ((M2C_FIELD(p, s16 *, 8) * 100) / 60);
                if (q < 0) {
                    q = 0;
                }
                v = (s16) (M2C_FIELD(p, s16 *, 4) * 100 - q);
            }
            func_020d5cf0((s16) -v, (s32) data_02159e7c, 2);
            break;
        case 2:
            if (arg0 == 0) {
                obj = M2C_FIELD(data_0215a044, s32 *, 0x34);
                v   = obj ? M2C_FIELD(obj, s16 *, 0x10) : 0;
            } else {
                obj = M2C_FIELD(data_0215a044, s32 *, 0x34);
                r1  = (M2C_FIELD(obj, s16 *, 6) != 0) && (arg0 == 1);
                p   = func_0210df10(arg0, r1);
                v   = M2C_FIELD(p, s16 *, 4);
            }
            func_020d5cf0(v, (s32) data_02159e7c, 2);
            break;
        default:
            break;
    }
    return (s32) data_02159e7c;
}
