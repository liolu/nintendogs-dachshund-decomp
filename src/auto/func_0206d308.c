/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206a8f4(M2C_UNK);
void func_0206d868(M2C_UNK);

extern s32 data_0213b3c4;
extern s32 data_0214e9f0;
extern s32 data_0214e9f4;

void func_0206d308(void) {
    if (data_0213b3c4 != -1) {
        func_0206d868(data_0213b3c4);
    }
    func_0206a8f4(data_0214e9f4);
    data_0214e9f4 = 0;
    data_0214e9f0 = 0;
}
