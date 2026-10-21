#include "m2c.h"
extern u8 *data_0214da84;
extern u32 data_0214da80[];
extern u8 *data_0215a064;
void func_020447ac(s32 *arg0) {
    struct Unk12 {
        u32 unk_00;
        u32 unk_04;
        u32 unk_08;
    };

    if (M2C_FIELD(data_0214da84, s32 *, 0x64) == 0) {
        M2C_FIELD(data_0214da84, s32 *, 0x64) = (s32) data_0214da80[0];
        *(struct Unk12 *) (data_0214da84 + 0x68) =
            *(struct Unk12 *) (*(u32 *) (data_0215a064 + 0x1C) + 0x48);
        func_01ff8980((s32) (data_0214da84 + 0x68));
    }
    *(struct Unk12 *) arg0 = *(struct Unk12 *) (data_0214da84 + 0x68);
}
/* test */
