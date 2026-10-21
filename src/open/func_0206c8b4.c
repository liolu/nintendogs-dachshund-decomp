#include "m2c.h"

typedef void (*UnkDmaCallback)(void *arg);

typedef struct {
    volatile s32 isBusy;
    u32 dmaNo;
    u32 src;
    u32 size;
    UnkDmaCallback callback;
    void *arg;
    u32 fifoCond;
    void *fifoIntrHandler;
} UnkGxCmdDmaState;

extern UnkGxCmdDmaState data_0214f4a8;
extern void func_0206c338(u32 dmaNo, u32 dmaType);
extern void func_0206c2c8(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_0206c470(u32 dmaNo);
extern void func_0207ee54(u32 dmaNo, void *handler, u32 mask);
extern void func_01ffdc44(u32 dmaNo, u32 src, u32 size, u32 flags);
extern void func_0206c874(void *arg);

static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}

void func_0206c8b4(u32 dmaNo, u32 src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_0214f4a8.isBusy) {
    }
    data_0214f4a8.isBusy = 1;
    data_0214f4a8.dmaNo = dmaNo;
    data_0214f4a8.callback = callback;
    data_0214f4a8.arg = arg;
    func_0206c338(dmaNo, 0x38000000);
    func_0206c2c8(dmaNo, src, size, 0);
    func_0206c470(dmaNo);
    func_0207ee54(dmaNo, func_0206c874, 0);
    func_01ffdc44(dmaNo, src, 0x4000400, -0x3C00000 | (size >> 2));
}
