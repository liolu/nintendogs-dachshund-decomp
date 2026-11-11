/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 data_ov007_0215e8bc;
extern s32 data_ov007_0215e8d0;
extern s32 data_ov007_0215e8c0;

void func_ov007_0215bd24(void);
void func_ov007_0215bda0(void);
void func_ov007_0215ce38(void);
void func_ov007_0215cf78(s32);
void func_ov007_0215cf5c(s32, s32);

void func_ov007_0215d548(s32 arg0) {
    data_ov007_0215e8bc = (s16) arg0;
    switch (arg0) {
        case 0:
            func_ov007_0215bd24();
            return;
        case 1:
            func_ov007_0215bda0();
            return;
        case 2:
            func_ov007_0215ce38();
            return;
        case 3:
            func_ov007_0215cf78(0);
            func_ov007_0215cf5c(data_ov007_0215e8d0, 0x74F8);
            data_ov007_0215e8c0 = 0;
            return;
        case 4:
            func_ov007_0215ce38();
            return;
        default:
            return;
    }
}
