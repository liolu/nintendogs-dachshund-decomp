#include "m2c.h"

extern void *data_0215a06c;
extern void *data_0215a044;

void func_02006c04(void *arg0, s32 arg1, s32 arg2, void *arg3, u16 arg4, s32 arg5);

void func_0211af10(void) {
    void *obj;
    s32 f;
    s32 a[4];

    if (data_0215a06c == NULL) {
        return;
    }
    obj = M2C_FIELD(data_0215a044, void **, 0xC);
    if (M2C_FIELD(data_0215a06c, s16 *, 0) == 1) {
        M2C_FIELD(data_0215a06c, s32 *, 4) += 1;
        if (M2C_FIELD(data_0215a06c, s32 *, 4) > 0) {
            f = M2C_FIELD(data_0215a06c, s32 *, 4);
            if (f > 0x14) {
                f = 0x14;
            }
            if (M2C_FIELD(data_0215a06c, s16 *, 2) != 2) {
                M2C_FIELD(data_0215a06c, s32 *, 0x20) = (f << 20) / 0x14 - 0x100000;
                M2C_FIELD(data_0215a06c, s32 *, 0x24) = 0;
            } else {
                M2C_FIELD(data_0215a06c, s32 *, 0x20) = 0;
                M2C_FIELD(data_0215a06c, s32 *, 0x24) = f * 0x60000 / 0x14 - 0x60000;
            }
        }
        if (M2C_FIELD(data_0215a06c, s32 *, 4) > 0x1E) {
            f = M2C_FIELD(data_0215a06c, s32 *, 4) - 0x1E;
            if (f > 0x14) {
                f = 0x14;
            }
            if (M2C_FIELD(data_0215a06c, s16 *, 2) != 2) {
                M2C_FIELD(data_0215a06c, s32 *, 0x34) = 0x100000 - (f << 20) / 0x14;
                M2C_FIELD(data_0215a06c, s32 *, 0x38) = 0;
            } else {
                M2C_FIELD(data_0215a06c, s32 *, 0x34) = 0;
                M2C_FIELD(data_0215a06c, s32 *, 0x38) = 0x60000 - f * 0x60000 / 0x14;
            }
        }
    }
    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) != 0) {
        return;
    }
    a[0] = M2C_FIELD(data_0215a06c, s32 *, 0x20) + M2C_FIELD(data_0215a06c, s32 *, 0x18);
    a[1] = M2C_FIELD(data_0215a06c, s32 *, 0x24) + M2C_FIELD(data_0215a06c, s32 *, 0x1C);
    a[2] = M2C_FIELD(data_0215a06c, s32 *, 0x34) + M2C_FIELD(data_0215a06c, s32 *, 0x2C);
    a[3] = M2C_FIELD(data_0215a06c, s32 *, 0x38) + M2C_FIELD(data_0215a06c, s32 *, 0x30);
    func_02006c04(obj, M2C_FIELD(data_0215a06c, s32 *, 0x14), 0, a, 0, 0);
    func_02006c04(obj, M2C_FIELD(data_0215a06c, s32 *, 0x28), 0, &a[2], 0, 0);
}
