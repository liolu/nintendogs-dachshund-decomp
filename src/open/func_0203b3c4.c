#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} UnkStruct_0203b3c4;

void func_02033c98(s32 arg0);
void func_0203b3c4(s32 arg0) {
    if (M2C_FIELD(arg0, s8 *, 0xA0) == 1) {
        *(UnkStruct_0203b3c4 *) (arg0 + 0x3B4) = *(UnkStruct_0203b3c4 *) (arg0 + 0x26C);
    } else {
        *(UnkStruct_0203b3c4 *) (arg0 + 0x3B4) = *(UnkStruct_0203b3c4 *) (arg0 + 0x278);
    }
    func_02033c98(arg0);
}
