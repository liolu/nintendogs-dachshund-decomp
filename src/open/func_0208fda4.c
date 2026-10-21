#include "m2c.h"
extern u32 data_02154468;
extern u16 data_02154460;
void func_02073328(s32 arg0, s32 arg1, s32 arg2);
void func_02070ed4(s32 arg0, s32 arg1);
s32 func_0208fda4(s32 arg0) {
    u32 *p = &data_02154468;

    if (*p != 0) {
        return 0;
    }
    func_02073328((s32) p, 0x13, arg0);
    func_02070ed4((s32) &data_02154468, data_02154460 * 0x7F / 100);
    return 1;
}
