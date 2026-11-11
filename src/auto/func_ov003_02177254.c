/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0214da80;
extern s32 *data_0214da84;

void func_02037130(void *, s32);
void func_02039128(void *);
void func_0203e5ac(void *, s32, s32);
void func_02114690(s32, void *);
void func_ov003_02177c58(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_02177254(u8 *arg0) {
    s32 var;
    s32 t;

    func_02039128(arg0);
    func_02037130(arg0, 0x300);
    if ((*(s8 *) (arg0 + 0xA0) == 0) && (*(s8 *) (arg0 + 0xA1) == 0)) {
        func_0203e5ac(arg0, 0, 0x118);
    }
    func_02114690(data_0214da80, arg0 + 0x3B4);
    var = 0;
    if ((u32) * (u16 *) (arg0 + 0xFC) >= 0x96U) {
        t              = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = t;
        if ((u16) ((u32) ((u16) t * 0x1E) >> 0x10) == 0) {
            var = 1;
        }
    }
    func_ov003_02177c58(arg0, 0, 0x180, 1, 0, 1, 0, var, 0x30, 0, 3, 0);
}
