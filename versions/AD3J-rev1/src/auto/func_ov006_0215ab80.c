/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s16 data_ov006_0215bc24;
extern s32 data_ov006_0215bc34;
extern s32 data_ov006_0215bc28;

void func_ov006_021596d0(void);
void func_ov006_0215974c(void);
void func_ov006_0215a510(void);
void func_ov006_0215a650(s32);
void func_ov006_0215a634(s32, s32);

void func_ov006_0215ab80(s32 arg0) {
    data_ov006_0215bc24 = (s16) arg0;
    switch (arg0) {
        case 0:
            func_ov006_021596d0();
            return;
        case 1:
            func_ov006_0215974c();
            return;
        case 2:
            func_ov006_0215a510();
            return;
        case 3:
            func_ov006_0215a650(0);
            func_ov006_0215a634(data_ov006_0215bc34, 0x74F8);
            data_ov006_0215bc28 = 0;
            return;
        case 4:
            func_ov006_0215a510();
            return;
        default:
            return;
    }
}
