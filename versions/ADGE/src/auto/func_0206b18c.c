/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020698ac(M2C_UNK);
void func_0206c470(M2C_UNK);

extern s32 data_0213cadc;
extern s32 data_0214f478;
extern s32 data_0214f47c;
extern s32 data_0214f480;

void func_0206b18c(void) {
    if (data_0213cadc != -1) {
        func_0206c470(data_0213cadc);
    }
    func_020698ac(data_0214f480);
    data_0214f480 = 0;
    data_0214f47c = 0;
    data_0214f478 = 0;
}
