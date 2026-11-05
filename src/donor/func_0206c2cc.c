/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020585f0 from projets/children-of-mana/src/auto/func_020585f0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 data_0213b3c4;
extern void func_0206e004(const void *src, void *dest, u32 size);
extern void func_0206d8d8(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_0206d8d8(dmaNo, src, dest, size, 0, 0);
    } else {
        func_0206e004(src, dest, size);
    }
}
void func_0206c2cc(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_0213b3c4, src, (void *) (0x68a0000 + destSlotAddr), size);
}
