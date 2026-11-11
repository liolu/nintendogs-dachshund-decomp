/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007198 from projets/code-lyoko/src/donor/func_02007198.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_0213cadc;
extern void func_0206cc0c(const void *src, void *dest, u32 size);
extern void func_0206c4e0(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_0206c4e0(dmaNo, src, dest, size, 0, 0);
    } else {
        func_0206cc0c(src, dest, size);
    }
}
void func_0206aed4(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_0213cadc, src, (void *) (0x68a0000 + destSlotAddr), size);
}
