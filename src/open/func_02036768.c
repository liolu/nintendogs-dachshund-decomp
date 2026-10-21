#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern u8 *data_0214da84;

void func_01ff832c(s32, void *, void *, void *);
void func_02009bc0(void *, void *);

void func_02036768(u8 *arg0, u8 *arg1, void *arg2, void *arg3, s16 *arg4) {
    s16 kind;
    s32 sel;
    Vec3 buf1;
    Vec3 buf2;
    s32 idx;
    void *obj;

    kind = *(s16 *) (arg1 + 0x90);
    if (kind == 1) {
        sel = 1;
    } else if (kind == 4) {
        sel = 2;
    } else if (kind == 5) {
        sel = 2;
    } else {
        sel = 0;
    }
    *arg4 = (s16) sel;
    switch (*arg4) {
    case 1:
        buf1 = *(Vec3 *) (arg1 + 0xB0);
        func_01ff832c(0xFE00, &buf1, arg2, arg3);
        break;
    case 2:
        idx = *(s16 *) (arg1 + 0x98);
        if (idx < 0 || idx >= 3) {
            obj = 0;
        } else {
            obj = *(void **) (data_0214da84 + idx * 4 + 0x54);
        }
        if (obj != 0 && obj != arg0) {
            buf2 = *(Vec3 *) ((u8 *) obj + 0x260);
            func_01ff832c(0xFE00, &buf2, arg2, arg3);
        }
        break;
    default:
        *(Vec3 *) arg3 = *(Vec3 *) arg2;
        break;
    }
    func_02009bc0(arg3, arg0 + 0x2E8);
}
