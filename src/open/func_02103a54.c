#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    u8 unk8[8];
    u16 unk10;
    u8 unk12[2];
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    u8 unk24[8];
    s32 unk2C;
} S;

extern S *data_0215a038;
s32 func_020038a8(s32, s32);
s32 func_020c8b58(s32);
void func_021032bc(void);

void func_02103a54(s32 arg0, s32 arg1) {
    data_0215a038 = (S *) func_020038a8(arg0, 0x28);
    data_0215a038->unk1C = func_020c8b58(arg0);
    ((S *) data_0215a038->unk1C)->unk2C = (s32) func_021032bc;
    data_0215a038->unk0 = 0;
    data_0215a038->unk4 = 1;
    data_0215a038->unk10 = 0xffff;
    data_0215a038->unk14 = 0;
    data_0215a038->unk18 = 0;
    data_0215a038->unk20 = arg1;
}
