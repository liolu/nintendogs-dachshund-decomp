/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02067228 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_0206d868(u32 dmaNo);
typedef void (*UnkDmaCallback)(void *arg);
extern void func_01ffda94(u32 dmaNo, volatile const void *src, void *dest, u32 ctrl);
extern void _Z24SetDMACompletionCallbackiPFviEi(u32 dmaNo, UnkDmaCallback callback, void *arg);
static inline void UnkCallCallback(UnkDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
static inline void UnkDmaFillAsync(u32 dmaNo, void *dest, u32 data, u32 ctrl) {
    u32 e                            = func_0208120c();
    (((vu32 *) 0x040000e0)[(dmaNo)]) = data;
    func_01ffda94(dmaNo, &(((vu32 *) 0x040000e0)[(dmaNo)]), dest, ctrl);
    func_02081220(e);
}
void func_0206d980(u32 dmaNo, void *dest, u32 data, u32 size, UnkDmaCallback callback, void *arg) {
    if (size == 0) {
        UnkCallCallback(callback, arg);
        return;
    }
    func_0206d868(dmaNo);
    if (callback) {
        _Z24SetDMACompletionCallbackiPFviEi(dmaNo, callback, arg);
        {
            u32 e      = func_0208120c();
            u32 ctrl   = 0xc5000000 | (size >> 2);
            vu32 *fill = &(((vu32 *) 0x040000e0)[(dmaNo)]);
            *fill      = data;
            func_01ffda94(dmaNo, fill, dest, ctrl);
            func_02081220(e);
        }
    } else {
        UnkDmaFillAsync(dmaNo, dest, data, 0x85000000 | (size >> 2));
    }
}
void func_0206d868(u32 dmaNo);
