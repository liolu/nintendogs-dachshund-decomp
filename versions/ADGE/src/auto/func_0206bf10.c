/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020694fc(M2C_UNK);
void func_0206c470(M2C_UNK);

extern s32 data_0213cadc;
extern s32 data_0214f490;
extern s32 data_0214f494;

void func_0206bf10(void) {
    if (data_0213cadc != -1) {
        func_0206c470(data_0213cadc);
    }
    func_020694fc(data_0214f494);
    data_0214f494 = 0;
    data_0214f490 = 0;
}
