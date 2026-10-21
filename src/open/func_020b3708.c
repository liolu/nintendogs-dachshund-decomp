#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Struct12;

extern s64 data_02124d28;
extern s32 data_0213ecdc;
extern s32 data_0213ecd8;
extern s32 data_0213ecd4;
extern s32 data_0213ecd0;
void func_02006a20(void *, void *, ...);
void func_01ff832c(s32, s32 *, s32 *, s32);

void func_020b3708(s32 arg0, s32 arg1) {
    s32 mat[6];
    Struct12 tmp;
    s32 e4;
    s32 e8;
    s32 e0;
    s32 v;
    s64 d;
    s32 *dst;

    dst = (s32 *) arg0;
    if (arg1 == 0) {
        return;
    }
    tmp = *(Struct12 *) (arg1 + 0xBC);
    e4 = *(s32 *) (arg1 + 0xE4);
    e8 = *(s32 *) (arg1 + 0xE8);
    e0 = *(s32 *) (arg1 + 0xE0);
    mat[0] = e0;
    mat[1] = e4;
    mat[2] = e8;
    mat[3] = 0;
    mat[4] = 0x1000;
    mat[5] = 0;
    if (e4 > 0) {
        v = e4 / 2;
        d = (s64) e0 * e0 + (s64) v * v + (s64) e8 * e8;
        mat[1] = v;
        if (d >= data_02124d28) {
            func_02006a20(mat, mat);
        }
    }
    func_01ff832c(data_0213ecdc, mat, (s32 *) &tmp, (s32) dst);
    func_01ff832c(data_0213ecd8, mat + 3, (s32 *) dst, (s32) dst);
    func_01ff832c(data_0213ecd4, mat, (s32 *) &tmp, (s32) (dst + 3));
    dst[6] = 0;
    dst[7] = 0x1000;
    dst[8] = 0;
    dst[9] = data_0213ecd0;
}
