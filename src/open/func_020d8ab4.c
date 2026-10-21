#include "m2c.h"
M2C_UNK func_020eb5a4(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020f0bfc(void *, s32, s32);
void func_020ddc08(void);
extern void *data_02159e70;
extern M2C_UNK data_0214d624;
extern M2C_UNK data_02144594;
extern M2C_UNK data_02144584;
extern M2C_UNK data_0214457c;
extern M2C_UNK data_02144574;
extern M2C_UNK data_0214458c;

void func_020d8ab4(s32 arg0) {
    s32 var_r7;
    s32 var_r6;
    s32 b0;
    s32 b1;
    s32 ret;

    if (M2C_FIELD(data_02159e70, s32 *, 0x4860) == 0) {
        return;
    }
    if (!(M2C_FIELD(&data_0214d624, u16 *, 2) & 2)) {
        return;
    }
    b0 = M2C_FIELD(&data_0214d624, u8 *, 0);
    b1 = M2C_FIELD(&data_0214d624, u8 *, 1);
    var_r7 = (s16) b0;
    var_r6 = (s16) b1;
    ret = func_020eb5a4(2, var_r7, var_r6);
    switch (ret) {
        case 3:
            func_020f0bfc((void *) (arg0 + 0xB8), var_r7, var_r6);
            func_020ddc08();
            M2C_FIELD(arg0, M2C_UNK *, 0x1D0) = (M2C_UNK) &data_02144594;
            break;
        case 4:
            func_020f0bfc((void *) (arg0 + 0xF4), var_r7, var_r6);
            func_020ddc08();
            M2C_FIELD(arg0, M2C_UNK *, 0x1D0) = (M2C_UNK) &data_02144584;
            break;
        case 1:
            func_020f0bfc((void *) (arg0 + 0x4), var_r7, var_r6);
            func_020ddc08();
            M2C_FIELD(arg0, M2C_UNK *, 0x1D0) = (M2C_UNK) &data_0214457c;
            break;
        case 0:
            func_020f0bfc((void *) (arg0 + 0x40), var_r7, var_r6);
            func_020ddc08();
            M2C_FIELD(arg0, M2C_UNK *, 0x1D0) = (M2C_UNK) &data_02144574;
            break;
        case 2:
            func_020f0bfc((void *) (arg0 + 0x7C), var_r7, var_r6);
            func_020ddc08();
            M2C_FIELD(arg0, M2C_UNK *, 0x1D0) = (M2C_UNK) &data_0214458c;
            break;
        default:
            M2C_FIELD((s8 *) data_02159e70, s32 *, 0x1CE0) = 6;
            M2C_FIELD((s8 *) data_02159e70, s32 *, 0x48C0) = 6;
            break;
    }
}
