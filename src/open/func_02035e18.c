#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Struct12;

typedef struct {
    s32 x[3];
} S12;

extern u8 * volatile data_0214da84;

s32 func_02009bc0(s32 *arg0, s32 *arg1);
void func_02035e18(u8 *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *p = NULL;
    s16 j = 0;
    s32 in_list = 0;
    s32 not_in_list = 1;
    S12 vec;
    S12 pos;
    s32 i;
    s32 d;
    s32 skip;

    for (i = 0; i < 3; i = (s16) (i + 1)) {
        if (i == *(s8 *) (arg0 + 0x88)) {
            continue;
        }
        if ((i < 0) || (i >= 3)) {
            p = NULL;
        } else {
            p = M2C_FIELD((data_0214da84 + (i * 4)), void **, 0x54);
        }
        if (p == NULL) {
            continue;
        }
        vec = *(S12 *) ((u8 *) p + 0x2DC);
        pos = *(S12 *) ((u8 *) p + 0x260);
        d = func_02009bc0(vec.x, (s32 *) (arg0 + 0x2A0)) - 0xA000 -
            0x2710 * (((s32) (((s64) pos.x[0] * pos.x[0] + 0x800) >> 12)) +
                      ((s32) (((s64) pos.x[1] * pos.x[1] + 0x800) >> 12)) +
                      ((s32) (((s64) pos.x[2] * pos.x[2] + 0x800) >> 12)));
        if (*(s8 *) (arg0 + 0x8D) == 0 && *(s8 *) (arg0 + 0x8B) == 2) {
            d -= 0x3E8000;
        }
        if (d >= *arg1) {
            continue;
        }
        if (arg2 != 0) {
            for (j = 0; j < 2; j = (s16) (j + 1)) {
                if ((s16) i == *(s16 *) (arg0 + 0x140 + j * 2)) {
                    skip = in_list;
                    goto test;
                }
            }
            skip = not_in_list;
        test:
            if (!skip) {
                goto copy;
            }
        }
        *arg1 = d;
        *(s16 *) (arg0 + 0x13E) = i;
    copy:
        if (arg3 != 0) {
            *(S12 *) (arg0 + 0x3B4) = vec;
        }
    }
}
