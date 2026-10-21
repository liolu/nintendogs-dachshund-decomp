#include "m2c.h"
#include "engine.h"
extern void *data_0214da84;
void func_0206cbdc(s32, s32, s32);
void func_02044710(s16 arg0, s32 arg1) {
    s8 *base = (s8 *) data_0214da84;

    func_0206cbdc(arg1, (s32) (base + 0x1A4) + arg0 * 0x85C, 0x85C);
}
