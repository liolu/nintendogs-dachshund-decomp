/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02078bf4(s32, M2C_UNK *);                  /* extern */
M2C_UNK func_020c4ea8(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020c5148(void *, s32);                 /* extern */
M2C_UNK func_020c5184(void *, s32);                 /* extern */
M2C_UNK func_020c51d0(void *, s16, M2C_UNK *);      /* extern */
M2C_UNK func_020c53b0(void *, s32, M2C_UNK);        /* extern */
extern M2C_UNK data_ov010_02158ea8;
extern M2C_UNK data_ov010_02158eb8;
extern M2C_UNK data_ov010_02158ec8;
extern M2C_UNK func_ov010_021588e4;
extern M2C_UNK func_ov010_021588f4;
extern M2C_UNK func_ov010_02158904;
extern M2C_UNK func_ov010_02158a4c;

void func_ov010_021587ac(void *arg0, s32 arg1) {
    s32 temp_r5;
    void *temp_r4;

    if (arg1 != 0) {
        return;
    }
    temp_r4                         = M2C_FIELD(arg0, void **, 0x94);
    temp_r5                         = M2C_FIELD(arg0, s32 *, 0x6C);
    M2C_FIELD(temp_r4, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r4, u16 *, 0x20) | 4);
    func_020c5184(temp_r4, 0x5294);
    func_020c5148(temp_r4, 0x4210);
    func_020c53b0(temp_r4, temp_r5, 1);
    func_020c4ea8(temp_r4, &func_ov010_02158a4c);
    M2C_FIELD(temp_r4, s32 *, 0x88) =
        func_02078bf4(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x1C), s32 *, 8) + 0x40, &data_ov010_02158eb8);
    M2C_FIELD(temp_r4, s32 *, 0x8C) =
        func_02078bf4(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x1C), s32 *, 8) + 0x40, &data_ov010_02158ea8);
    M2C_FIELD(temp_r4, s32 *, 0x90) =
        func_02078bf4(M2C_FIELD(M2C_FIELD(temp_r4, void **, 0x1C), s32 *, 8) + 0x40, &data_ov010_02158ec8);
    func_020c51d0(temp_r4, (s16) M2C_FIELD(temp_r4, s32 *, 0x88), &func_ov010_02158904);
    func_020c51d0(temp_r4, (s16) M2C_FIELD(temp_r4, s32 *, 0x8C), &func_ov010_021588f4);
    func_020c51d0(temp_r4, (s16) M2C_FIELD(temp_r4, s32 *, 0x90), &func_ov010_021588e4);
    M2C_FIELD(temp_r4, s16 *, 0x94) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x98) = 0x1000;
    M2C_FIELD(temp_r4, s32 *, 0x9C) = 0;
    M2C_FIELD(temp_r4, s32 *, 0xA0) = 0;
}
