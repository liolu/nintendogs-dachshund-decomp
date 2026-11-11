/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207837c(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_020ca4b0(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020ca750(void *, s32);                 /* extern */
M2C_UNK func_020ca78c(void *, s32);                 /* extern */
M2C_UNK func_020ca7d8(void *, s16, M2C_UNK *);      /* extern */
M2C_UNK func_020ca9b8(void *, s32, M2C_UNK);        /* extern */
extern M2C_UNK data_ov011_0215b328;
extern M2C_UNK data_ov011_0215b338;
extern M2C_UNK data_ov011_0215b348;
extern M2C_UNK func_ov011_0215ad64;
extern M2C_UNK func_ov011_0215ad74;
extern M2C_UNK func_ov011_0215ad84;
extern M2C_UNK func_ov011_0215aecc;

void func_ov011_0215ac2c(void *arg0, s32 arg1) {
    s32 temp_r5;
    void *temp_r4;

    if (arg1 != 0) {
        return;
    }
    temp_r4                         = M2C_FIELD(arg0, void **, 0x94);
    temp_r5                         = M2C_FIELD(arg0, s32 *, 0x6C);
    M2C_FIELD(temp_r4, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r4, u16 *, 0x20) | 4);
    func_020ca78c(temp_r4, 0x5294);
    func_020ca750(temp_r4, 0x4210);
    func_020ca9b8(temp_r4, temp_r5, 1);
    func_020ca4b0(temp_r4, &func_ov011_0215aecc);
    M2C_FIELD(temp_r4, s32 *, 0x88) =
        func_0207837c(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x1C), s32 *, 8) + 0x40, &data_ov011_0215b338);
    M2C_FIELD(temp_r4, s32 *, 0x8C) =
        func_0207837c(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x1C), s32 *, 8) + 0x40, &data_ov011_0215b328);
    M2C_FIELD(temp_r4, s32 *, 0x90) =
        func_0207837c(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x1C), s32 *, 8) + 0x40, &data_ov011_0215b348);
    func_020ca7d8(temp_r4, (s16) M2C_FIELD(temp_r4, s32 *, 0x88), &func_ov011_0215ad84);
    func_020ca7d8(temp_r4, (s16) M2C_FIELD(temp_r4, s32 *, 0x8C), &func_ov011_0215ad74);
    func_020ca7d8(temp_r4, (s16) M2C_FIELD(temp_r4, s32 *, 0x90), &func_ov011_0215ad64);
    M2C_FIELD(temp_r4, s16 *, 0x94) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x98) = 0x1000;
    M2C_FIELD(temp_r4, s32 *, 0x9C) = 0;
    M2C_FIELD(temp_r4, s32 *, 0xA0) = 0;
}
