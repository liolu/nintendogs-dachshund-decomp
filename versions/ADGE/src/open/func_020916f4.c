#include "m2c.h"
extern u32 data_02159e18;
extern u32 data_02153dd0;
extern u32 data_02154578;
extern u32 data_02153dc4;
void func_020916f4(void) {
    u32 *p = &data_02154578;
    if (p[0x34 / 4] != 0) {
        p[0x34 / 4] = 0;
    }
}
