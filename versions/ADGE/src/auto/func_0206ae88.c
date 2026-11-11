/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020690a4(M2C_UNK);
void func_0206c470(M2C_UNK);

extern s32 data_0213cadc;
extern s32 data_0214f484;

void func_0206ae88(void) {
    if (data_0213cadc != -1) {
        func_0206c470(data_0213cadc);
    }
    func_020690a4(data_0214f484);
    data_0214f484 = 0;
}
