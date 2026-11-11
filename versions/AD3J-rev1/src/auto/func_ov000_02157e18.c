/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0206dff0(s32, s32, s32);
void func_020a442c(void);
void func_020df828(void);
s32 func_020dfa30(void);
extern void *data_ov000_021581a4;

void func_ov000_02157e18(void) {
    volatile s32 sp[3];
    void *temp_r3;
    void *temp_r3_2;

    if (func_020dfa30() != 0) {
        func_020df828();
    }
    temp_r3                      = M2C_FIELD(data_ov000_021581a4, void **, 0);
    M2C_FIELD(temp_r3, s16 *, 2) = 0;
    sp[0]                        = 0xC0;
    func_0206dff0(sp[0], M2C_FIELD(temp_r3, s32 *, 4), M2C_FIELD(temp_r3, u16 *, 0) * 8);
    temp_r3_2                      = M2C_FIELD(data_ov000_021581a4, void **, 4);
    M2C_FIELD(temp_r3_2, s16 *, 2) = 0;
    sp[1]                          = 0xC0;
    func_0206dff0(sp[1], M2C_FIELD(temp_r3_2, s32 *, 4), M2C_FIELD(temp_r3_2, u16 *, 0) * 8);
    func_020a442c();
}
