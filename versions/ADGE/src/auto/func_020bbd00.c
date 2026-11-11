/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a6b10(M2C_UNK);
void func_020a7de0(M2C_UNK);
void func_020b95d0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_0215a064;

void func_020bbd00(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020a6b10((s32) M2C_FIELD(data_0215a064, s16 *, 0x7C));
    switch (temp_r0) {                              /* irregular */
        case 11:
            func_020a7de0(1);
            func_020b95d0(arg0, 0x15, -1, 0);
            return;
        case 12:
            func_020a7de0(1);
            func_020b95d0(arg0, 3, -1, 0);
            return;
    }
}
