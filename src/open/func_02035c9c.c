#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

extern void *data_021555f8;

typedef struct {
    u8 pad[0x140];
    s16 unk_140[4];
} UnkStruct_02035c9c;

s32 func_02009bc0(s32 *arg0, s32 *arg1);
s32 func_02038620(M2C_UNK arg0, M2C_UNK arg1);
s32 func_020abb3c(s32 arg0);

void func_02035c9c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    M2C_S12 pos;
    s16 temp_r0;
    s32 var_r2;
    s32 var_r0;
    s32 var_r4;
    s32 var_sp0;
    s32 var_sp4;
    s32 var_sp8;
    s32 var_spc;
    void *var_r8;

    var_sp0 = 0;
    var_sp4 = 0;
    var_sp8 = 0;
    var_spc = 0;
    var_r4 = 0;
loop_1:
    if ((var_r4 < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= var_r4)) {
        var_r8 = (void *) var_sp0;
    } else {
        var_r8 = M2C_FIELD((data_021555f8 + (var_r4 * 4)), void **, 4);
    }
    if (var_r8 == NULL) {
        goto block_18;
    }
    temp_r0 = M2C_FIELD(var_r8, s16 *, 0x90);
    if ((temp_r0 == 0) || (temp_r0 == 2)) {
        var_r0 = 1;
    } else if ((M2C_FIELD(var_r8, s16 *, 0x94) == 0x35) && (func_020abb3c((s32) var_r8) == 0)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if ((var_r0 != 0) || (var_sp4 != 0)) {
        goto block_18;
    }
    pos = *(M2C_S12 *) ((s8 *) var_r8 + 0xBC);
    var_r2 = (s32) func_02009bc0((s32 *) &pos, (s32 *) ((s8 *) arg0 + 0x2A0)) - (s32) func_02038620(arg0, (M2C_UNK) var_r8);
    if (var_r2 >= M2C_FIELD(arg1, s32 *, 0)) {
        goto block_18;
    }
    if (arg2 == 0) {
        goto store;
    }
    for (temp_r0 = var_sp8; temp_r0 < 2; temp_r0++) {
        if ((s16) (var_r4 + 3) == ((UnkStruct_02035c9c *) arg0)->unk_140[temp_r0]) {
            var_r0 = var_spc;
            goto check;
        }
    }
    var_r0 = 1;
check:
    if (var_r0 == 0) {
        goto copy;
    }
store:
    M2C_FIELD(arg1, s32 *, 0) = var_r2;
    M2C_FIELD(arg0, s16 *, 0x13E) = (s16) (var_r4 + 3);
copy:
    if (arg3 != 0) {
        *(M2C_S12 *) ((s8 *) arg0 + 0x3B4) = pos;
    }
block_18:
    var_r4 = (s32) (s16) (var_r4 + 1);
    if (var_r4 < 7) {
        goto loop_1;
    }
}
