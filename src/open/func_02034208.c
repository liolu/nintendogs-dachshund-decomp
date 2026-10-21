#include "m2c.h"

typedef struct {
    s32 x[3];
} S12;

s32 func_02009bc0(s32 *arg0, s32 *arg1);
void func_020a5c2c(s32 *arg0);
extern s32 *data_0214da84;
extern u8 *data_021555f8;

s32 func_02034208(u8 *arg0) {
    S12 a;
    S12 b;
    s32 idx;
    s32 count;
    u8 *entry;
    s32 result;
    s32 temp;
    s32 r;

    count = *(s16 *) (*(u8 **) (arg0 + 0x9E8) + 0x2E);
    idx = (s16) (*(s16 *) (arg0 + 0x13E) - 3);
    if (idx < 0 || *(s16 *) (data_021555f8 + 0x20) <= idx) {
        entry = 0;
    } else {
        entry = *(u8 **) (data_021555f8 + idx * 4 + 4);
    }
    if (entry != 0) {
        func_020a5c2c(a.x);
        b = *(S12 *) (entry + 0xBC);
        result = func_02009bc0(a.x, b.x);

        if (result > 0x17C4000 || *(u16 *) (entry + 0xA4) < 0x28) {
            if (count < 3000) {
                temp = (*data_0214da84 * 0x10DCD) + 1;
                *data_0214da84 = temp;
                r = (u16) (((u32) (u16) temp * 5000) >> 16);
                return count + 500 > r;
            }
            if (count < 5000) {
                temp = (*data_0214da84 * 0x10DCD) + 1;
                *data_0214da84 = temp;
                r = (u16) (((u32) (u16) temp * 10000) >> 16);
                return count + 4000 > r;
            }
            temp = (*data_0214da84 * 0x10DCD) + 1;
            *data_0214da84 = temp;
            r = (u16) (((u32) (u16) temp * 50000) >> 16);
            return count + 40000 > r;
        }
        temp = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp;
        r = (u16) (((u32) (u16) temp * 10000) >> 16);
        return count + 7000 > r;
    } else {
        return 0;
    }
}
