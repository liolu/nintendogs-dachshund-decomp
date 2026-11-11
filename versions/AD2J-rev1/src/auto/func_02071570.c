/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u8 data_0214ead8;

void func_02071570(void) {
    data_0214ead8 += 1;
    if (data_0214ead8 == 0) {
        data_0214ead8 += 1;
    }
}
