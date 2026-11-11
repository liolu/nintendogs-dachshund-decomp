/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020695f0(M2C_UNK);
void func_0206c470(M2C_UNK);

extern s32 data_0213cadc;
extern s32 data_0214f48c;
extern s32 data_0214f49c;
extern s32 data_0214f4a0;
extern s32 data_0214f4a4;

void func_0206c024(void) {
    if (data_0213cadc != -1) {
        func_0206c470(data_0213cadc);
    }
    func_020695f0(data_0214f49c);
    data_0214f4a4 = 0;
    data_0214f4a0 = 0;
    data_0214f48c = 0;
    data_0214f49c = 0;
}
