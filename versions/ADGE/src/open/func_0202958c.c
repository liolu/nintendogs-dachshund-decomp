#include "m2c.h"
extern s32 data_0214da80;
extern void *data_0214da84;
s32 func_020a5d54(void);
s32 func_021144f0(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02114564(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0202958c(s32 arg0) {
    s8 temp_r5;
    s32 v;
    s32 x;
    s32 y;

    if (((*(u16 *) 0x4000304 & 0x8000) >> 15) != 0) {
        goto end;
    }
    temp_r5 = M2C_FIELD(arg0, s8 *, 0x88);
    if (temp_r5 != func_020a5d54()) {
        goto end;
    }
    if (temp_r5 != M2C_FIELD(data_0214da84, s8 *, 7)) {
        goto end;
    }
    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x1004 + 0x800) >> 12);
    if (func_021144f0(data_0214da80, arg0 + 0x378, y) != 0) {
        goto hit220;
    }
    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x14D2 + 0x800) >> 12);
    if (func_021144f0(data_0214da80, arg0 + 0x384, y) == 0) {
        goto check3;
    }
hit220:
    M2C_FIELD(arg0, u16 *, 0xEA) = M2C_FIELD(arg0, s32 *, 0x484) + 0x220;
    return 1;
check3:
    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x14D2 + 0x800) >> 12);
    if (func_02114564(data_0214da80, arg0 + 0x348, y) != 0) {
        goto hit217;
    }
    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x19A + 0x800) >> 12);
    if (func_021144f0(data_0214da80, arg0 + 0x324, y) != 0) {
        goto hit217;
    }
    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x19A + 0x800) >> 12);
    if (func_021144f0(data_0214da80, arg0 + 0x330, y) != 0) {
        goto hit217;
    }
    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x802 + 0x800) >> 12);
    if (func_021144f0(data_0214da80, arg0 + 0x360, y) == 0) {
        goto end;
    }
hit217:
    M2C_FIELD(arg0, u16 *, 0xEA) = 0x217;
    return 1;
end:
    return 0;
}
