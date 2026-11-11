/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s16);                             /* extern */
s32 func_02033edc();                                /* extern */
M2C_UNK func_020bb8e0(void *);                      /* extern */

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_020b9644(void *arg0, s16 arg1) {
    void *temp_r0;
    void *temp_r3;

    if (func_01ffdb08(arg1) == 0) {
        return;
    }
    if (func_02033edc() != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x6C)    = 0;
    M2C_FIELD(arg0, s32 *, 0x30)    = 4;
    M2C_FIELD(arg0, s16 *, 0x3C)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x44)    = 0;
    M2C_FIELD(arg0, s16 *, 0x50)    = 0x3C;
    temp_r0                         = arg0 + 0xC;
    temp_r3                         = arg0 + 0x54;
    *(M2C_S12 *) ((s8 *) arg0 + 84) = *(M2C_S12 *) ((s8 *) arg0 + 12);

    func_020bb8e0(arg0);
}
