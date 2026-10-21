#include "m2c.h"
extern s32 data_02150e58[];
extern s32 *data_0214da84;
s32 func_020681f8(s32, s32 *);
s32 func_0202a838(s32 arg0) {
    s32 buf[3];
    s32 n;
    s32 v;
    s32 *seed;
    u16 r;

    buf[0] = data_02150e58[0x13];
    buf[1] = data_02150e58[0x16];
    buf[2] = data_02150e58[0x19];
    v = func_020681f8(arg0 + 0x2A0, buf) > 0 ? func_020681f8(arg0 + 0x2A0, buf) : -func_020681f8(arg0 + 0x2A0, buf);
    if (v > 0x8000) {
        seed = data_0214da84;
        n = *seed * 0x10DCD + 1;
        r = (u16) ((u32) (u16) n * 3 >> 16);
        *seed = n;
        switch (r) {
            case 0:
                *(u16 *) (arg0 + 0xEA) = 0x42E;
                return 1;
            case 1:
                *(u16 *) (arg0 + 0xEA) = 0x42F;
                return 1;
            case 2:
                *(u16 *) (arg0 + 0xEA) = 0x430;
                return 1;
        }
    }
    seed = data_0214da84;
    n = *seed * 0x10DCD + 1;
    r = (u16) ((u32) (u16) n * 2 >> 16);
    *seed = n;
    switch (r) {
        case 0:
            *(u16 *) (arg0 + 0xEA) = 0x42C;
            return 1;
        case 1:
            *(u16 *) (arg0 + 0xEA) = 0x42D;
            return 1;
    }
    return 0;
}
