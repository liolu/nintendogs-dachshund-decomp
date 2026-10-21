#include "m2c.h"

typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;

extern UnkIrqCallbackInfo data_02153e34[8];

u32 func_0207ed9c(u32 mask);
void func_0207ee08(u32 dmaNo, void (*func)(void *), void *arg) {
    u32 mask = 1 << (dmaNo + 3);

    data_02153e34[dmaNo].func = func;
    data_02153e34[dmaNo].arg = arg;
    func_0207ed9c(mask);
    data_02153e34[dmaNo].enable = 1;
}
