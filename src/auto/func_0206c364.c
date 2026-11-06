/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206a528(M2C_UNK);
void func_0206d868(M2C_UNK);

extern s32 data_0213b3c4;
extern s32 data_0214e9cc;

void func_0206c364(void) {
    if (data_0213b3c4 != -1) {
        func_0206d868(data_0213b3c4);
    }
    func_0206a528(data_0214e9cc);
    data_0214e9cc = 0;
}
