#include "engine.h"
#include "m2c.h"
void func_020ca864(s32, s32, s32);
void func_020ca7f0(s32 arg0, s16 arg1, s16 arg2) {
    u8 *obj = (u8 *) M2C_FIELD(arg0, void **, 0x1C);
    s16 i;

    *(s32 *) ((u8 *) M2C_FIELD(obj, void **, 0x5C) + arg2 * 0xC) =
        (s32) ((u8 *) M2C_FIELD(arg0, void **, 0x74) + arg1 * 0x24);
    for (i = 0; i < M2C_FIELD(arg0, s16 *, 0x6C); i++) {
        *(s32 *) ((u8 *) M2C_FIELD(arg0, void **, 0x74) + i * 0x24) = 0;
    }
    func_020ca864(arg0, 0, (s32) M2C_FIELD(arg0, void **, 0x74));
}
