/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02069130(M2C_UNK);
void func_0206c470(M2C_UNK);

extern s32 data_0213cadc;
extern s32 data_0214f46c;

void func_0206af6c(void) {
    if (data_0213cadc != -1) {
        func_0206c470(data_0213cadc);
    }
    func_02069130(data_0214f46c);
    data_0214f46c = 0;
}
