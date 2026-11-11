/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200276c(void);
void func_020664c4(M2C_UNK, M2C_UNK);
void func_02080ca4(void);

void func_02066528(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        func_0200276c();
    }
    func_020664c4(1, 1);
    func_02080ca4();
}
