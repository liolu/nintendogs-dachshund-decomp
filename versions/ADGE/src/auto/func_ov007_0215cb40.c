/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_ov007_0215e808;
s32 func_ov007_0215bb48(void);
void func_0206f5a4(s32 a, s32 b);
void func_0206f62c(s32 a, s32 b, s32 c);

void func_ov007_0215cb40(s32 arg0, s32 arg1, s32 arg2) {
    s32 r;

    r = func_ov007_0215bb48();
    if (r == 2) {
        if (arg1 == 0) {
            (&data_ov007_0215e808)[arg0] = 0;
            return;
        }
        (&data_ov007_0215e808)[arg0] = 1;
        func_0206f62c(arg1, arg2, arg0);
        return;
    }
    if (r == 3) {
        if (arg1 == 0) {
            data_ov007_0215e808 = 0;
            return;
        }
        data_ov007_0215e808 = 1;
        func_0206f5a4(arg1, arg2);
    }
}
