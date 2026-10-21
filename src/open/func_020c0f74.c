#include "m2c.h"
extern void *data_02156ec0;
s32 func_0206ffd0(s32);
s32 func_0206ff0c(s32, s32, s32, s32);
extern s32 *data_02156ec0_p;
extern s32 data_02156ecc[];
s32 func_020bef20(void);
void func_0206f62c(s32 arg0, s32 arg1, M2C_UNK arg2);
void func_0206f5a4(s32 arg0, s32 arg1);
s32 func_020beea0(void);
s32 func_020beeb4(void);
u8 func_020c0f74(u8 arg0) {
    s32 i;
    u8 count;
    s32 j;
    s32 out[2];

    count = arg0;
    if (func_0206ff0c(0x438, func_0206ffd0(M2C_FIELD(data_02156ec0, u16 *, 0x10A)), (s32) &out[0], (s32) &out[1]) != 0) {
        count++;
    }
    count++;
    for (i = 0; i < 0x10; i++) {
        if (((s32 *) data_02156ec0)[i + 0x10] != 0) {
            for (j = 0; j < 0xA; j++) {
                func_0206ffd0(M2C_FIELD(data_02156ec0, u16 *, 0x10A));
            }
            count++;
        }
    }
    return count;
}
