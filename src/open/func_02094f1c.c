#include "m2c.h"
extern char data_02154664[];
extern s8 *volatile data_0215467c[];
void func_02094bf0(void *);
void func_02094f1c(s32 arg0, s32 arg1) {
    s32 off;

    func_02094bf0(data_02154664 + arg0 * 4);
    off = arg1 * 0x18;
    *(s32 *) (data_0215467c[arg0] + off + 0x94) = 1;
    *(s32 *) (data_0215467c[arg0] + off + 0x98) = 1;
}
