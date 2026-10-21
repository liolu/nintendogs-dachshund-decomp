#include "m2c.h"

s32 func_0200c488(s32, s32);
void func_02035fcc(s32, s16);
s32 func_02036164(s32);
void func_0202f6e8(s32);
void func_0202f9a0(s32);
extern s32 *data_0214da7c;
extern s32 *data_0214da84;

void func_0200ddd8(s32 p) {
    s32 i;
    s32 *seed;
    s32 r;
    u16 v;

    for (i = 0; i < M2C_FIELD(M2C_FIELD(data_0214da7c, void **, 0x20), s16 *, 0x2E); i = (s16) (i + 1)) {
        if (func_0200c488(0xB, i) != 0) {
            func_02035fcc(p, (s16) (i + 0xD));

            seed = data_0214da84;
            r = *seed * 0x10DCD + 1;
            *seed = r;
            v = (u16) (((u32) (u16) r * 5) >> 16);
            if (v == 0) {
                break;
            }
        }
    }

    if (func_02036164(p) != 0) {
        func_0202f6e8(p);
    } else {
        func_0202f9a0(p);
    }
}
