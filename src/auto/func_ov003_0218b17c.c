/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0203571c(void *);
void func_0203e5e8(void *, s32);
extern u32 *data_0214da84;

s32 func_ov003_0218b17c(void *arg0) {
    u32 v;
    u16 idx;

    if (func_0203571c(arg0) != 0) {
        v              = *data_0214da84 * 0x10DCD + 1;
        idx            = (u16) (((u32) (u16) v * 3) >> 16);
        *data_0214da84 = v;
        switch (idx) {
            case 0:
                func_0203e5e8(arg0, 0x375);
                return 1;
            case 1:
                func_0203e5e8(arg0, 0x370);
                return 1;
            case 2:
                func_0203e5e8(arg0, 0x371);
                return 1;
            default:
                break;
        }
    } else {
        v              = *data_0214da84 * 0x10DCD + 1;
        idx            = (u16) ((v << 16) >> 30);
        *data_0214da84 = v;
        switch (idx) {
            case 0:
                func_0203e5e8(arg0, 0x375);
                return 1;
            case 1:
                func_0203e5e8(arg0, 0x376);
                return 1;
            case 2:
                func_0203e5e8(arg0, 0x377);
                return 1;
            case 3:
                func_0203e5e8(arg0, 0x367);
                return 1;
            default:
                break;
        }
    }
    return 0;
}
