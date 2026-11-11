/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020676e4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma_gxcommand.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
typedef s32 BOOL;
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
extern void func_0207f574(u32 mask, UnkIrqHandler handler);
extern void func_0207f39c(u32 mask);
extern void func_0206dd6c(void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
void func_0206dd6c(void *arg) {
    func_0207f39c(0x200000);
    (*(vu32 *) 0x04000600) = (data_0214ea08.fifoCond << 30) | ((*(vu32 *) 0x04000600) & ~0xc0000000);
    func_0207f574(0x200000, data_0214ea08.fifoIntrHandler);
    data_0214ea08.isBusy = 0;
    UnkCallCallback(data_0214ea08.callback, data_0214ea08.arg);
}
