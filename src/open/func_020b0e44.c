#include "m2c.h"
extern u32 *data_021555f8;
extern s8 *data_0215a064;
s32 func_01ffdb08(M2C_UNK);
s32 func_020a72bc(M2C_UNK, void *);
s32 func_02034208(s32);
void func_020afbc4(void *);
void func_020afb54(void *, M2C_UNK);
void func_020b0e44(void *arg0, M2C_UNK arg1) {
    s32 r6;
    s32 ok;
    u32 rng;

    if (func_01ffdb08(arg1) == 0) {
        return;
    }
    r6 = func_01ffdb08(arg1);
    if (r6 != 0 && func_020a72bc(r6, arg0) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0xC0) < (M2C_FIELD(arg0, s32 *, 0xF8) << 1)) {
            ok = 1;
        } else if (func_02034208(r6) != 0) {
            if (M2C_FIELD(arg0, s16 *, 0x90) == 3) {
                rng = M2C_FIELD(data_021555f8, u32 *, 0) * 0x10DCD + 1;
                M2C_FIELD(data_021555f8, u32 *, 0) = rng;
                if ((u16) rng >= 0x4000) {
                    goto fail;
                }
                ok = 1;
            } else {
                ok = 1;
            }
        } else {
            goto fail;
        }
    } else {
fail:
        ok = 0;
    }
    if (!ok) {
        return;
    }
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
        case 4:
        case 5:
            func_020afbc4(arg0);
            break;
        case 1:
        case 3:
            func_020afb54(arg0, arg1);
            M2C_FIELD(data_0215a064, s32 *, 0x50) = 0;
            break;
        case 0:
        case 2:
        case 6:
        case 7:
        case 8:
            break;
    }
}
