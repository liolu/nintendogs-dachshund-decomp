/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208f130(void);
void func_02091fac(void);
void func_02097b58(void);
void func_020efb80(M2C_UNK);

extern u16 data_0214affc;
extern M2C_UNK data_0214b024;

void func_02097a58(s32 arg0) {
    s16 temp_r0;

    if ((u16) (data_0214affc & 0xC0B) != 0) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 2;
        func_020efb80(1);
    }
    if ((s32) M2C_FIELD(arg0, s16 *, 0x1E) < 2) {
        M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (M2C_FIELD(arg0, s16 *, 0x1C) + 1);
        temp_r0                      = M2C_FIELD(arg0, s16 *, 0x20);
        if ((s32) temp_r0 > 0) {
            M2C_FIELD(arg0, s16 *, 0x20) = (s16) (temp_r0 - 1);
        } else {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        }
        if ((M2C_FIELD(&data_0214b024, u16 *, 2) & 2) && ((s32) M2C_FIELD(arg0, s16 *, 0x20) < 0x23)) {
            M2C_FIELD(arg0, s16 *, 0x1C) = 0;
            M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) + 1);
            M2C_FIELD(arg0, s16 *, 0x20) = 0x2D;
            func_02097b58();
        }
    } else {
        M2C_FIELD(arg0, s16 *, 0x22) = (s16) (M2C_FIELD(arg0, s16 *, 0x22) + 1);
        if (M2C_FIELD(&data_0214b024, u16 *, 2) & 2) {
            func_02097b58();
        }
    }
    if ((s32) M2C_FIELD(arg0, s16 *, 0x22) < 0x3C) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 4) = 0x104;
    M2C_FIELD(arg0, s16 *, 6) = 0;
    func_0208f130();
    func_02091fac();
}
