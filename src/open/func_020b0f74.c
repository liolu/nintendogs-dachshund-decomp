#include "m2c.h"
extern s32 *data_021555f8;
s32 func_01ffdb08(s32);
s32 func_020a72bc(s32, s32);
s32 func_02034208(s32);
s32 func_020b0f74(s32 arg0, s32 arg1) {
    s32 idx;
    s32 t;

    idx = func_01ffdb08(arg1);
    if (idx != 0) {
        if (func_020a72bc(idx, arg0) != 0) {
            if (*(s32 *) (arg0 + 0xC0) < (*(s32 *) (arg0 + 0xF8) << 1)) {
                return 1;
            }
            if (func_02034208(idx) != 0) {
                if (*(s16 *) (arg0 + 0x90) == 3) {
                    t = (*data_021555f8 * 0x10DCD) + 1;
                    *data_021555f8 = t;
                    if ((u16) t < 0x4000) {
                        return 1;
                    }
                } else {
                    return 1;
                }
            }
        }
    }
    return 0;
}
