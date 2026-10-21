#include "m2c.h"

typedef void (*UnkDmaCallback)(void *arg);

typedef struct {
    volatile s32 isBusy;
    u32 dmaNo;
    u32 src;
    volatile u32 size;
    UnkDmaCallback callback;
    void *arg;
    u32 fifoCond;
    void *fifoIntrHandler;
} UnkGxCmdDmaState;

extern UnkGxCmdDmaState data_0214f4a8;
extern void func_0207ee54(u32 dmaNo, void *handler, u32 mask);
extern void func_0206c974(void *arg);
extern void func_01ffdc44(u32 dmaNo, u32 src, u32 size, u32 flags);
extern void func_0207ed20(u32 mask);

void func_0206c9e8(void) {
    u32 src;
    u32 size;
    u32 remaining;

    if ((size = data_0214f4a8.size) == 0) {
        return;
    }
    if (size >= 0x1D8) {
        size = 0x1D8;
    }
    src = data_0214f4a8.src;
    remaining = data_0214f4a8.size - size;
    data_0214f4a8.size = remaining;
    data_0214f4a8.src = src + size;
    if (!remaining) {
        func_0207ee54(data_0214f4a8.dmaNo, func_0206c974, 0);
        func_01ffdc44(data_0214f4a8.dmaNo, src, 0x4000400, -0x3BC00000 | (size >> 2));
        func_0207ed20(0x200000);
        return;
    }
    func_01ffdc44(data_0214f4a8.dmaNo, src, 0x4000400, 0x84400000 | (size >> 2));
    func_0207ed20(0x200000);
}
