/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020697f4(M2C_UNK);
void func_0206c470(M2C_UNK);

extern s32 data_0213cadc;
extern s32 data_0214f470;
extern s32 data_0214f474;

void func_0206b050(void) {
    if (data_0213cadc != -1) {
        func_0206c470(data_0213cadc);
    }
    func_020697f4(data_0214f474);
    data_0214f474 = 0;
    data_0214f470 = 0;
}
