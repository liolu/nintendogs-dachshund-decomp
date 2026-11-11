/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0214da80;
extern s32 *data_0214da84;
extern u8 data_02150e58[];

void func_02039128(void *);
void func_02114690(s32, void *);
void func_01ff832c(s32, void *, void *, void *);
void func_ov003_02177c58(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_02175aa4(u8 *arg0) {
    s32 buf[3];
    s32 buf2[6];
    s32 var;
    s32 t;

    func_02039128(arg0);
    func_02114690(data_0214da80, arg0 + 0x3B4);
    buf[0] = *(s32 *) (data_02150e58 + 0x4C);
    buf[1] = *(s32 *) (data_02150e58 + 0x58);
    buf[2] = *(s32 *) (data_02150e58 + 0x64);
    func_01ff832c(0x1000, buf, arg0 + 0x3B4, arg0 + 0x278);
    var = 0;
    if ((u32) * (u16 *) (arg0 + 0xFC) > 0xC8U) {
        t              = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = t;
        if ((u16) ((u32) ((u16) t * 0x64) >> 0x10) == 0) {
            var = 1;
        }
    }
    func_ov003_02177c58(arg0, 0, 0x1FF, 1, 1, 1, 1, var, 0x30, 0, 1, 1);
}
