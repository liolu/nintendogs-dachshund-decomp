#include "m2c.h"
void func_020b780c(void *a, void *b, s32 c, s32 d, s32 e);
void func_020ba108(s32 arg0, s32 arg1) {
    typedef struct {
        s32 a;
        s32 b;
        s32 c;
    } Vec3;

    func_020b780c((void *) arg1, (void *) arg0, M2C_FIELD(arg0, s32 *, 0x1C),
                  M2C_FIELD(arg0, u16 *, 0x18), M2C_FIELD(arg0, u16 *, 0x1A));
    *(Vec3 *) (arg1 + 0xC) = *(Vec3 *) (arg0 + 0);
    *(Vec3 *) (arg1 + 0x18) = *(Vec3 *) (arg0 + 0xC);
    *(s32 *) (arg1 + 0x24) = *(s32 *) (arg0 + 0x20);
}
