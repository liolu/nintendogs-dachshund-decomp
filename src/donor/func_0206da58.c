/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02059c58 from projets/children-of-mana/src/auto/func_02059c58.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_01ffdacc(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_0206d6c0(u32 dmaNo, u32 src, u32 size, u32 dir);
void func_0206da58(u32 dmaNo, const void *src, void *dest, u32 size) {
    vu32 *cnt;
    if (size == 0) {
        return;
    }
    func_0206d6c0(dmaNo, (u32) src, size, 0);
    cnt = &(((vu32 *) 0x040000b0)[(dmaNo) * 3 + 2]);
    while (*cnt & 0x80000000) {
    }
    func_01ffdacc(dmaNo, src, dest, 0x80000000 | (size >> 1));
    while (*cnt & 0x80000000) {
    }
}
extern void func_0206d6c0(u32 dmaNo, u32 src, u32 size, u32 dir);
