#include "engine.h"
#include "m2c.h"
typedef void (*MIDmaCallback)(void *);
extern void func_0206c4e0(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void func_0206cc0c(register const void *srcp, register void *destp, register u32 size);
extern u32 data_0214f498;
extern u32 data_0213cadc;
#pragma thumb off
void func_0206bdd8(void *src, u32 size) {
    u32 dma = data_0213cadc;
    void *dest = (void *) data_0214f498;

    if (dma != (u32) -1) {
        func_0206c4e0(dma, src, dest, size, ((void *) 0), ((void *) 0));
    } else {
        func_0206cc0c(src, dest, size);
    }
}
