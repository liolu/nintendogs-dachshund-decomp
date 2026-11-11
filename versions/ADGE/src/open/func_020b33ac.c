#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Struct12;

extern s32 data_0213ecac;
extern s32 data_0213ecb0;
extern s32 data_0213ecbc;
extern s32 data_0213ecb8;
s32 func_ov006_021601ac(s32, s32);
s32 func_01ffdb08(s32);
void func_020b2a54(s32, s32 *);

void func_020b33ac(s32 arg0, s32 arg1) {
    s32 a;
    s32 t;
    s32 *dst;

    dst = (s32 *) arg0;
    switch (func_ov006_021601ac(arg0, arg1)) {
        case 1:
        case 2:
        case 3:
            a = data_0213ecac;
            t = func_01ffdb08(arg1);
            func_020b2a54(t, dst + 3);
            *(Struct12 *) dst = *(Struct12 *) (dst + 3);
            dst[1] += data_0213ecbc;
            dst[2] += data_0213ecb8;
            dst[6] = 0;
            dst[7] = 0x1000;
            dst[8] = 0;
            dst[9] = a;
            break;
        default:
            a = data_0213ecb0;
            t = func_01ffdb08(arg1);
            func_020b2a54(t, dst + 3);
            *(Struct12 *) dst = *(Struct12 *) (dst + 3);
            dst[1] += data_0213ecbc;
            dst[2] += data_0213ecb8;
            dst[6] = 0;
            dst[7] = 0x1000;
            dst[8] = 0;
            dst[9] = a;
            break;
    }
}
