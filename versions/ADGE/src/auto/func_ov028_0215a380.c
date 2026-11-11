/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov028_0215ad8c(void);
void func_ov028_0215ae28(s32 a, s32 b);
void func_ov028_0215bb5c(void);
void func_ov028_0215bbac(void);
extern s16 data_ov028_0215bfa0;
extern s32 data_ov028_0215bfa4;
extern s32 data_ov028_0215bfb0;

void func_ov028_0215a380(s16 arg0) {
    data_ov028_0215bfa0 = arg0;
    switch (arg0) {
        case 0:
            func_ov028_0215bb5c();
            return;
        case 1:
            func_ov028_0215bbac();
            return;
        case 2:
            func_ov028_0215ad8c();
            return;
        case 3:
            func_ov028_0215ae28(data_ov028_0215bfb0, 0x74F8);
            data_ov028_0215bfa4 = 0;
            return;
        case 4:
            func_ov028_0215ad8c();
            return;
        default:
            return;
    }
}
