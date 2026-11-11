/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern u8 data_0214f578;

void func_02070178(void) {
    data_0214f578 += 1;
    if (data_0214f578 == 0) {
        data_0214f578 += 1;
    }
}
