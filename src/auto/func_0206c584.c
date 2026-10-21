/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206aca4(M2C_UNK);
void func_0206d868(M2C_UNK);

extern s32 data_0213b3c4;
extern s32 data_0214e9d8;
extern s32 data_0214e9dc;
extern s32 data_0214e9e0;

void func_0206c584(void) {
    if (data_0213b3c4 != -1) {
        func_0206d868(data_0213b3c4);
    }
    func_0206aca4(data_0214e9e0);
    data_0214e9e0 = 0;
    data_0214e9dc = 0;
    data_0214e9d8 = 0;
}
