/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0206714c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_01ffdacc(u32 dmaNo, const void *src, void *dest, u32 ctrl);
extern void func_0206d6c0(u32 dmaNo, u32 src, u32 size, u32 dir);
void func_0206db60(u32 dmaNo, const void *src, void *dest, u32 size) {
    vu32 *cnt;
    func_0206d6c0(dmaNo, (u32) src, size, 0);
    if (size == 0) {
        return;
    }
    cnt = &(((vu32 *) 0x040000b0)[(dmaNo) * 3 + 2]);
    while (*cnt & 0x80000000) {
    }
    func_01ffdacc(dmaNo, src, dest, 0x84000000 | (size >> 2));
    while (*cnt & 0x80000000) {
    }
}
void func_0206d6c0(u32 dmaNo, u32 src, u32 size, u32 dir);
