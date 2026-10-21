#include "m2c.h"
extern u32 data_02153dc4;
void func_02077a10(void) {
    while (*(volatile u32 *)&data_02153dc4 != 0) {
    }
}
