#include "m2c.h"

typedef struct UnkIrqCallbackInfo {
    void (*func)(void *);
    u32 enable;
    void *arg;
} UnkIrqCallbackInfo;

extern UnkIrqCallbackInfo data_02153e04[8];
extern u16 data_0213ce24[];
extern M2C_UNK data_027c0000;
extern u32 func_0207ed54(u32 mask);

void func_0207ec80(u32 arg0) {
    u32 mask = 1 << data_0213ce24[arg0];
    void (*callback)(void *) = data_02153e04[arg0].func;

    data_02153e04[arg0].func = NULL;
    if (callback != NULL) {
        callback(data_02153e04[arg0].arg);
    }
    M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) = (s32) (M2C_FIELD(&data_027c0000, s32 *, 0x3FF8) | mask);
    if (data_02153e04[arg0].enable == 0) {
        (void) func_0207ed54(mask);
    }
}
