/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02035264(void *, s32);
void func_0203e5ac(void *, s32, s16);
void func_ov003_02177c58(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u32 *data_0214da84;

void func_ov003_021761d8(void *arg0) {
    u8 *a;
    u16 idx;
    u32 v;
    s32 flag;
    s16 sv;

    a  = arg0;
    sv = *(s16 *) (a + 0x154);
    switch (sv) {
        case 0:
            v              = *data_0214da84 * 0x10DCD + 1;
            idx            = (u16) (((u32) (u16) v * 5) >> 16);
            *data_0214da84 = v;
            switch (idx) {
                case 0:
                    func_0203e5ac(arg0, 1, 0x49);
                    break;
                case 1:
                    func_0203e5ac(arg0, 1, 0x4A);
                    break;
                default:
                    break;
            }
            break;
        case 0x49:
            if (func_02035264(arg0, 1) != 0) {
                func_0203e5ac(arg0, 1, 0x4B);
            }
            break;
        case 0x4A:
            if (func_02035264(arg0, 1) != 0) {
                func_0203e5ac(arg0, 1, 0x4C);
            }
            break;
        default:
            break;
    }
    flag = 0;
    if (*(u16 *) (a + 0xFC) > 0x64) {
        v              = *data_0214da84 * 0x10DCD + 1;
        idx            = (u16) (((u32) (u16) v * 0x3C) >> 16);
        *data_0214da84 = v;
        if (idx == 0) {
            flag = 1;
        }
    }
    sv = *(s16 *) (a + 0x154);
    func_ov003_02177c58(arg0, 0, 0x1FF, 1, 1, 1, 1, flag, sv, sv, 3, 0);
}
