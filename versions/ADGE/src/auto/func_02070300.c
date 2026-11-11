#include "engine.h"
#include "m2c.h"

extern s32 data_0214fe04;

void func_02070300(s32 arg0) {
    data_0214fe04 &= ~(1 << arg0);
}
