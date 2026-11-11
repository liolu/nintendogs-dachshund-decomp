/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020691bc(M2C_UNK);
M2C_UNK func_020a5fcc(void);
void func_02113918(M2C_UNK);

extern void *data_0215a058;

void func_021137b8(void) {
    s16 temp_r0_2;
    s16 temp_r1;
    void *temp_r0;

    if (M2C_FIELD(data_0215a058, s16 *, 8) != 0) {
        func_02113918((s32) data_0215a058);
        temp_r1 = M2C_FIELD(data_0215a058, s16 *, 8);
        if ((s32) temp_r1 <= 0) {
            return;
        }
        M2C_FIELD(data_0215a058, s16 *, 8) = (s16) (temp_r1 - 1);
        if (M2C_FIELD(data_0215a058, s16 *, 8) != 0) {
            return;
        }
        temp_r0                         = (void *) func_020a5fcc();
        M2C_FIELD(temp_r0, u16 *, 0x26) = (u16) (M2C_FIELD(temp_r0, u16 *, 0x26) ^ 1);
        return;
    }
    if (M2C_FIELD(data_0215a058, u16 *, 0xA) == 0) {
        return;
    }
    func_020691bc(8);
    temp_r0_2 = M2C_FIELD(data_0215a058, s16 *, 0xC);
    switch (temp_r0_2) {                            /* irregular */
        case 1:
            *(M2C_UNK *) 0x04000000 = (s32) ((*(M2C_UNK *) 0x04000000 & ~0x1F00) | 0x1300);
            *(M2C_UNK *) 0x04001000 = (s32) ((*(M2C_UNK *) 0x04001000 & ~0x1F00) | 0xC00);
            break;
        case 2:
            *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & ~0x1F00) | 0x300;
            *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & ~0x1F00) | 0x1800;
            break;
    }
    *(u16 *) 0x0400100C = (*(u16 *) 0x0400100C & ~3) | 2;
    *(u16 *) 0x0400100C &= ~0x40;
    *(u16 *) 0x0400100C                  = (*(u16 *) 0x0400100C & 0x43) | 0xF00;
    M2C_FIELD(data_0215a058, u16 *, 0xA) = 0U;
}
