/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_ov006_021597d0(void);

extern void *data_ov006_0215bb64;

void func_ov006_0215a4c8(void) {
    s16 temp_r1;

    if (data_ov006_0215bb64 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(data_ov006_0215bb64, s16 *, 0x12C);
    if ((s32) temp_r1 > 0) {
        M2C_FIELD(data_ov006_0215bb64, s16 *, 0x12C) = (s16) (temp_r1 - 1);
    }
    func_ov006_021597d0();
}
