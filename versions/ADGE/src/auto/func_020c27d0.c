/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020a7470(M2C_UNK);
void func_020a8df4(M2C_UNK);
void func_020c2890(M2C_UNK);
M2C_UNK func_021057c8(void);
M2C_UNK func_ov004_0215a758(void);

extern u16 *data_0215a04c;

void func_020c27d0(s32 arg0) {
    s16 temp_r1;
    void *temp_r1_2;
    void *temp_r2;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {                              /* irregular */
        case 2:
            func_020c2890(arg0);
            return;
        case 1:
            func_020a7470(arg0);
            temp_r1_2                         = M2C_FIELD(arg0, void **, 0x18C);
            M2C_FIELD(temp_r1_2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r1_2, u16 *, 0x20) & ~1);
            M2C_FIELD(arg0, s32 *, 0xBC)      = func_021057c8();
            M2C_FIELD(arg0, s32 *, 0xC0)      = 0x5EC;
            return;
        case 4:
            func_020a7470(arg0);
            temp_r2                         = M2C_FIELD(arg0, void **, 0x18C);
            M2C_FIELD(temp_r2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r2, u16 *, 0x20) & ~1);
            func_020a8df4(arg0);
            if ((*data_0215a04c == 9) && (func_ov004_0215a758() != 0)) {
                return;
            }
            M2C_FIELD(arg0, s16 *, 0x162) = 0;
            return;
    }
}
