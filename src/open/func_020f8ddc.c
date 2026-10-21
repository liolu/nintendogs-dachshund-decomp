#include "m2c.h"

typedef struct {
    u8 unk_0x0[0xc];
    u16 angle;
} UnkAngle;

typedef struct {
    u8 unk_0x0[0x214];
    UnkAngle *unk_0x214;
} UnkMain;

extern void *data_027c0b64;
extern s16 data_02124e68[];
void func_01ff8000(void *, s16, s16);
M2C_UNK func_01ff810c(void *, s32, void *);
void func_020f8ddc(s32 arg0, void *arg1) {
    s32 buf[12];
    UnkMain *main = (UnkMain *) data_027c0b64;
    UnkAngle *sub = main->unk_0x214;
    s32 i = sub->angle >> 4;
    s32 j = i * 2;
    s32 k = j + 1;

    func_01ff8000(buf, data_02124e68[j], data_02124e68[k]);
    func_01ff810c(buf, (s32) arg1, arg1);
}
