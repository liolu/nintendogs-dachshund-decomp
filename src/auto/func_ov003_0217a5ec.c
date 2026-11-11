/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u16 func_0202f9a0(void *);
void func_02037130(void *, s32);
void func_02039128(void);
void func_0203e5ac(void *, s32, s32);
void func_02114690(s32, void *);
extern s32 data_0214da80;
extern s32 *data_0214da84;

u16 func_ov003_0217a5ec(void *arg0) {
    u16 h;
    u32 m;
    s32 v;
    u16 res;

    func_02039128();
    func_02037130(arg0, 0x300);
    if ((*(s8 *) ((u8 *) arg0 + 0xA0) == 0) && (*(s8 *) ((u8 *) arg0 + 0xA1) == 0)) {
        func_0203e5ac(arg0, 0, 0x118);
    }
    func_02114690(data_0214da80, (u8 *) arg0 + 0x3B4);
    if (*(u16 *) ((u8 *) arg0 + 0xFC) <= 0x96) {
        return *(u16 *) ((u8 *) arg0 + 0xFC);
    }
    v              = *data_0214da84 * 0x10DCD + 1;
    *data_0214da84 = v;
    h              = (u16) v;
    m              = (u32) h * 0x1E;
    res            = (u16) (m >> 16);
    if (res != 0) {
        return res;
    }
    return func_0202f9a0(arg0);
}
