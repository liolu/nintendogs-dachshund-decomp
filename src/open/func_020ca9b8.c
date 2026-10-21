#include "m2c.h"
void func_020ca864(s32 arg0, s32 arg1, void *arg2);
void *func_020c9720(s16 arg0, s16 arg1, void *arg2);
void func_020ca9b8(s32 arg0, s16 arg1, s16 arg2) {
    s16 i;

    *(s16 *) (arg0 + 0x6C) = arg2;
    *(void **) (arg0 + 0x74) = func_020c9720(arg1, arg2, (void *) (M2C_FIELD(arg0, void **, 0x1C) + 4));
    *(s32 *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x5C) = (s32) M2C_FIELD(arg0, void **, 0x74);
    for (i = 0; i < M2C_FIELD(arg0, s16 *, 0x6C); i++) {
        *(s32 *) ((u8 *) M2C_FIELD(arg0, void **, 0x74) + i * 0x24) = 0;
    }
    func_020ca864(arg0, 0, M2C_FIELD(arg0, void **, 0x74));
}
