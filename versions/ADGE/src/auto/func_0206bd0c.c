/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020693bc(M2C_UNK);
void func_0206c470(M2C_UNK);

extern s32 data_0213cadc;
extern s32 data_0214f488;
extern s32 data_0214f498;

void func_0206bd0c(void) {
    if (data_0213cadc != -1) {
        func_0206c470(data_0213cadc);
    }
    func_020693bc(data_0214f488);
    data_0214f488 = 0;
    data_0214f498 = 0;
}
