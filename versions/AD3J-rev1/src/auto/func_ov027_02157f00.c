/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov027_0215890c(void);
void func_ov027_021589a8(s32 a, s32 b);
void func_ov027_021596dc(void);
void func_ov027_0215972c(void);
extern s16 data_ov027_02159b20;
extern s32 data_ov027_02159b24;
extern s32 data_ov027_02159b30;

void func_ov027_02157f00(s16 arg0) {
    data_ov027_02159b20 = arg0;
    switch (arg0) {
        case 0:
            func_ov027_021596dc();
            return;
        case 1:
            func_ov027_0215972c();
            return;
        case 2:
            func_ov027_0215890c();
            return;
        case 3:
            func_ov027_021589a8(data_ov027_02159b30, 0x74F8);
            data_ov027_02159b24 = 0;
            return;
        case 4:
            func_ov027_0215890c();
            return;
        default:
            return;
    }
}
