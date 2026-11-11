/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bf254(void);

extern void *data_02156ec0;

void func_020c19ac(void) {
    s16 temp_r1;

    if (data_02156ec0 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(data_02156ec0, s16 *, 0x12C);
    if ((s32) temp_r1 > 0) {
        M2C_FIELD(data_02156ec0, s16 *, 0x12C) = (s16) (temp_r1 - 1);
    }
    func_020bf254();
}
