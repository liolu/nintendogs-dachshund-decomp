#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Struct12;

extern u8 *data_0214da7c;
s32 func_0200c488(s32, s32);
s32 func_02009bc0(s32 *, s32 *);
void func_02035b44(s32 arg0, s32 *arg1, s32 arg2, s32 arg3) {
    s16 i;
    s16 j;
    s32 k = 0;
    s32 m = 1;
    s32 cond;
    s32 item;
    s32 dist;

    for (i = 0; i < M2C_FIELD(M2C_FIELD(data_0214da7c, void **, 0x20), s16 *, 0x2E); i = (s16) (i + 1)) {
        item = (s32) func_0200c488(0xB, i);
        if (item == 0) {
            continue;
        }
        dist = func_02009bc0((s32 *) (item + 8), (s32 *) (arg0 + 0x2A0));
        if (M2C_FIELD(arg0, s8 *, 0x8D) == 1
            && M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s16 *, 0x1E) == 0x2710) {
            dist -= 0x3E8000;
        } else {
            dist -= M2C_FIELD(arg0, s32 *, 0x29C);
        }
        if (dist >= *arg1) {
            continue;
        }
        if (arg2 != 0) {
            j = 0;
            while (j < 2) {
                if (M2C_FIELD((s8 *) arg0 + j * 2, s16 *, 0x140) == (s16) (i + 0xD)) {
                    cond = k;
                    goto Lcheck;
                }
                j = (s16) (j + 1);
            }
            cond = m;
        Lcheck:
            if (cond == 0) {
                goto Lcopy;
            }
        }
        *arg1 = dist;
        M2C_FIELD(arg0, s16 *, 0x13E) = (s16) (i + 0xD);
    Lcopy:
        if (arg3 != 0) {
            *(Struct12 *) ((s8 *) arg0 + 0x3B4) = *(Struct12 *) (item + 8);
        }
    }
}
