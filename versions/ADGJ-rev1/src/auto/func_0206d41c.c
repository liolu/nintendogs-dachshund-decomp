/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206a9e8(M2C_UNK);
void func_0206d868(M2C_UNK);

extern s32 data_0213b3c4;
extern s32 data_0214e9ec;
extern s32 data_0214e9fc;
extern s32 data_0214ea00;
extern s32 data_0214ea04;

void func_0206d41c(void) {
    if (data_0213b3c4 != -1) {
        func_0206d868(data_0213b3c4);
    }
    func_0206a9e8(data_0214e9fc);
    data_0214ea04 = 0;
    data_0214ea00 = 0;
    data_0214e9ec = 0;
    data_0214e9fc = 0;
}
