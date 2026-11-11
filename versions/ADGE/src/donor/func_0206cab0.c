/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200ba68 from projets/code-lyoko/src/donor/func_0200ba68.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
extern void func_0206c470(u32 dmaNo);
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
extern UnkGxCmdDmaState data_0214f4a8;
extern void func_0207ef2c(u32 mask, UnkIrqHandler handler);
extern UnkIrqHandler func_0207eea0(u32 mask);
extern void func_0207ed9c(u32 mask);
extern void func_0206c2c8(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void func_0206c9e8(void);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_0206cab0(u32 dmaNo, const void *src, u32 size, UnkDmaCallback callback, void *arg) {
    u32 e;

    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    while (data_0214f4a8.isBusy) {
    }
    while (!((((*(vu32 *) 0x04000600) & 0x7000000) >> 24) & 2)) {
    }
    data_0214f4a8.isBusy   = 1;
    data_0214f4a8.dmaNo    = dmaNo;
    data_0214f4a8.src      = (u32) src;
    data_0214f4a8.size     = size;
    data_0214f4a8.callback = callback;
    data_0214f4a8.arg      = arg;
    func_0206c2c8(dmaNo, (u32) src, size, 0);
    func_0206c470(dmaNo);

    e                             = func_02080c28();
    data_0214f4a8.fifoCond        = ((*(vu32 *) 0x04000600) & 0xc0000000) >> 30;
    data_0214f4a8.fifoIntrHandler = func_0207eea0(0x200000);
    (*(vu32 *) 0x04000600)        = ((*(vu32 *) 0x04000600) & ~0xc0000000) | 0x40000000;
    func_0207ef2c(0x200000, func_0206c9e8);
    func_0207ed9c(0x200000);
    func_0206c9e8();
    func_02080c3c(e);
}
extern void func_0206c9e8(void);
