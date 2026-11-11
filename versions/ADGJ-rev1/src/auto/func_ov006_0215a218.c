/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov006_0215bb70;
s32 func_ov006_021594f4(void);
void func_0207099c(s32 a, s32 b);
void func_02070a24(s32 a, s32 b, s32 c);

void func_ov006_0215a218(s32 arg0, s32 arg1, s32 arg2) {
    s32 r;

    r = func_ov006_021594f4();
    if (r == 2) {
        if (arg1 == 0) {
            (&data_ov006_0215bb70)[arg0] = 0;
            return;
        }
        (&data_ov006_0215bb70)[arg0] = 1;
        func_02070a24(arg1, arg2, arg0);
        return;
    }
    if (r == 3) {
        if (arg1 == 0) {
            data_ov006_0215bb70 = 0;
            return;
        }
        data_ov006_0215bb70 = 1;
        func_0207099c(arg1, arg2);
    }
}
