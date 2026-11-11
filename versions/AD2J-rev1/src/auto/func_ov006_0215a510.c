/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02071078(u32);
void func_02070abc(void);
void func_ov006_02159508(void);
extern void *data_ov006_0215bb64;
extern s32 data_ov006_0215bb70[];

void func_ov006_0215a510(void) {
    s32 i;

    func_02071078(0xFFFF);
    func_02070abc();
    M2C_FIELD(data_ov006_0215bb64, s32 *, 4) = 0;
    for (i = 0; i < 16; i++) {
        data_ov006_0215bb70[i] = 0;
    }
    M2C_FIELD(data_ov006_0215bb64, s32 *, 0x10C) = 0;
    M2C_FIELD(data_ov006_0215bb64, s32 *, 0x110) = 0;
    M2C_FIELD(data_ov006_0215bb64, s32 *, 0x124) = 0;
    M2C_FIELD(data_ov006_0215bb64, s32 *, 0x128) = 0;
    func_ov006_02159508();
}
