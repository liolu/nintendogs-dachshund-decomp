#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Struct12;

extern s32 data_0213eccc;
extern s32 data_0213ecc8;
extern s32 data_0213ecc4;
extern s32 data_0213ecc0;
s32 func_020f7e80(s32);
void func_0206823c(void *, void *, void *);
void func_02068270(s32, void *, s32);
void func_01ff832c(s32, s32 *, s32 *, s32);

void func_020b35b4(s32 arg0, s32 arg1) {
    s32 mat[6];
    s32 x, y, z;
    Struct12 tmp;
    Struct12 m;
    s32 *dst;

    dst = (s32 *) arg0;
    if (arg1 == 0) {
        return;
    }
    switch (*(s16 *) (arg1 + 0x94)) {
        case 0x40:
        case 0x41:
        case 0x42:
            if (func_020f7e80(arg1) != 0) {
                tmp = *(Struct12 *) (arg1 + 0xBC);
                func_0206823c(&tmp, (s32 *) (dst + 3), (s32 *) &m);
                func_02068270((s32) dst, &m, (s32) dst);
                *(Struct12 *) (dst + 3) = tmp;
            } else {
                tmp = *(Struct12 *) (arg1 + 0xBC);
                x = *(s32 *) (arg1 + 0xE0);
                z = *(s32 *) (arg1 + 0xE8);
                y = *(s32 *) (arg1 + 0xE4);
                mat[0] = x;
                mat[1] = y;
                mat[2] = z;
                mat[3] = 0;
                mat[4] = 0x1000;
                mat[5] = 0;
                func_01ff832c(data_0213eccc, mat, (s32 *) &tmp, (s32) dst);
                func_01ff832c(data_0213ecc8, mat + 3, (s32 *) dst, (s32) dst);
                func_01ff832c(data_0213ecc4, mat, (s32 *) &tmp, (s32) (dst + 3));
            }
            dst[6] = 0;
            dst[7] = 0x1000;
            dst[8] = 0;
            dst[9] = data_0213ecc0;
            break;
        default:
            return;
    }
}
