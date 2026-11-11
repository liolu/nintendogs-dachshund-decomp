/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003db4(M2C_UNK);
void func_020eae18(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020eae68(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_0209eec0(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_02159e70, s32 *, 0xBC);
    switch (temp_r0) {                              /* irregular */
        case 23:
            func_02003db4(0xA);
            func_020eae68(0x14, (s32) M2C_FIELD(arg0, s16 *, 0x1C18), (s32) M2C_FIELD(arg0, s16 *, 0x1C1A));
            return;
        case 25:
            func_020eae18(0x14, (s32) M2C_FIELD(arg0, s16 *, 0x1C18), (s32) M2C_FIELD(arg0, s16 *, 0x1C1A));
            return;
    }
}
