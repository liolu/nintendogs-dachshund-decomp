/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206fc80(u32);
void func_0206f6c4(void);
void func_ov007_0215bb5c(void);
extern void *data_ov007_0215e7fc;
extern s32 data_ov007_0215e808[];

void func_ov007_0215ce38(void) {
    s32 i;

    func_0206fc80(0xFFFF);
    func_0206f6c4();
    M2C_FIELD(data_ov007_0215e7fc, s32 *, 4) = 0;
    for (i = 0; i < 16; i++) {
        data_ov007_0215e808[i] = 0;
    }
    M2C_FIELD(data_ov007_0215e7fc, s32 *, 0x10C) = 0;
    M2C_FIELD(data_ov007_0215e7fc, s32 *, 0x110) = 0;
    M2C_FIELD(data_ov007_0215e7fc, s32 *, 0x124) = 0;
    M2C_FIELD(data_ov007_0215e7fc, s32 *, 0x128) = 0;
    func_ov007_0215bb5c();
}
