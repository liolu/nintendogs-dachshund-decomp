/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02089388(void);
void func_020c089c(void);
void func_020d2d84(void);
void func_020d5730(void);

extern s32 data_02159e6c;

void func_0210dd24(void) {
    func_020d2d84();
    func_02089388();
    if (data_02159e6c != 0) {
        func_020d5730();
    }
    func_020c089c();
}
