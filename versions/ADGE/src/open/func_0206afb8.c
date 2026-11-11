#include "engine.h"
#include "m2c.h"

extern u32 data_0213cadc;

void func_0206c4e0(u32, void *, void *, u32, void *, void *);
void func_0206cc0c(void *, void *, u32);

void func_0206afb8(void *src, u32 destSlotAddr, u32 size) {
    u32 dma = data_0213cadc;

    if (dma != (u32) -1) {
        func_0206c4e0(dma, src, (void *) (0x6898000 + destSlotAddr), size, ((void *) 0), ((void *) 0));
    } else {
        func_0206cc0c(src, (void *) (0x6898000 + destSlotAddr), size);
    }
}
