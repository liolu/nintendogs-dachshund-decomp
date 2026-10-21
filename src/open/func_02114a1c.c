#include "m2c.h"

extern void *data_0215a064;
extern void *data_0215a048;
extern void *data_021555f8;

typedef struct UnkStruct_02114a1c {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} UnkStruct_02114a1c;

s32 func_02114a1c(void) {
    s16 temp_r12;
    s32 var_r3;
    void *var_r2;
    s32 ret;
    UnkStruct_02114a1c sp0;

    if (M2C_FIELD(data_0215a064, s16 *, 0x58) == -2) {
        temp_r12 = M2C_FIELD(data_0215a064, s16 *, 0x7A);
        var_r3 = M2C_FIELD(data_0215a048, s32 *, 0xC);
        ret = 0;
        if (((s32) temp_r12 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= (s32) temp_r12)) {
            var_r2 = NULL;
        } else {
            var_r2 = M2C_FIELD((data_021555f8 + (temp_r12 * 4)), void **, 4);
        }
        if (var_r2 == NULL) {
            goto end;
        }
        if (M2C_FIELD(var_r2, s16 *, 0x90) == 3) {
            goto end;
        }
        sp0 = *(UnkStruct_02114a1c *) ((s8 *) var_r2 + 0xBC);
        ret = var_r3 + M2C_FIELD(data_0215a048, s32 *, 0x10) - sp0.unk_08;
        if (ret < 0) {
            ret = 0;
        }
    end:
        return ret;
    }
    return M2C_FIELD(data_0215a064, s32 *, 0x60);
}
