/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003a50(void);
void func_020a5bf0(void);
void func_0210e318(void);

extern void *data_02159e70;

void func_0209edb0(void) {
    if (M2C_FIELD(data_02159e70, u16 *, 0x11160) != 0) {
        return;
    }
    if (M2C_FIELD(data_02159e70, s32 *, 0xB4) == 0x17) {
        if (func_02003a50() == 0) {
            return;
        }
        func_0210e318();
        func_020a5bf0();
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
}
