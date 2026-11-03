/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067744 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef s32 BOOL;
extern void func_0206d868(u32 dmaNo);
typedef void (*UnkDmaCallback)(void *arg);
typedef void (*UnkIrqHandler)(void);
typedef struct {
    volatile BOOL isBusy;
    u32 dmaNo;
    u32 src;
    u32 size;
    UnkDmaCallback callback;
    void *arg;
    u32 fifoCond;
    UnkIrqHandler fifoIntrHandler;
} UnkGxCmdDmaState;
extern UnkGxCmdDmaState data_0214ea08;
extern void func_01ffdb40(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void _Z24SetDMACompletionCallbackiPFviEi(u32 dmaNo, UnkDmaCallback callback, void *arg);
extern void func_0206d730(u32 dmaNo, u32 dmaType);
extern void func_0206d6c0(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_0206dc6c(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_0206dcac(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_0214ea08.isBusy) {
    }
    data_0214ea08.isBusy   = 1;
    data_0214ea08.dmaNo    = dmaNo;
    data_0214ea08.callback = callback;
    data_0214ea08.arg      = arg;
    func_0206d730(dmaNo, 0x38000000);
    func_0206d6c0(dmaNo, (u32) src, size, 0);
    func_0206d868(dmaNo);
    _Z24SetDMACompletionCallbackiPFviEi(dmaNo, func_0206dc6c, 0);
    func_01ffdb40(dmaNo, src, ((void *) 0x04000400), 0xfc400000 | (size >> 2));
}
void func_0206dc6c(void *arg);
