#include "m2c.h"
extern u8 *data_021555f8;
s32 *func_020038a8(s32 *, s32);
u64 func_02080978(void);
s32 *func_020c8b58(s32);
void func_020c8aa0(s32);
void func_020066f0(s32, s32);
void func_020a6920(s32, s32);
void func_020a5fdc(void);
u8 *func_020a6854(s32 arg0) {
    s16 i;

    data_021555f8 = (u8 *) func_020038a8((s32 *) arg0, 0x38);
    M2C_FIELD(data_021555f8, s32 *, 0) = (s32) func_02080978();
    for (i = 0; i < 7; i++) {
        ((s32 *) (data_021555f8 + 4))[i] = 0;
    }
    M2C_FIELD(data_021555f8, u16 *, 0x20) = 0;
    M2C_FIELD(data_021555f8, s16 *, 0x22) = -1;
    M2C_FIELD(data_021555f8, u16 *, 0x2C) = 0;
    M2C_FIELD(data_021555f8, s32 *, 0x24) = 0;
    M2C_FIELD(data_021555f8, s32 **, 0x28) = func_020c8b58(arg0);
    M2C_FIELD(M2C_FIELD(data_021555f8, s32 **, 0x28), s32 *, 0x2C) = (s32) func_020a6920;
    func_020c8aa0((s32) M2C_FIELD(data_021555f8, s32 **, 0x28));
    func_020066f0(8, (s32) func_020a5fdc);
    return data_021555f8;
}
