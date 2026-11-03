/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020670cc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/mi_dma.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_0206dbdc(u32 dmaNo, void *dest, u32 data, u32 size);
extern void func_01ffda34(u32 dmaNo, volatile const void *src, void *dest, u32 ctrl);
void func_0206dbdc(u32 dmaNo, void *dest, u32 data, u32 size) {
    vu32 *cnt;
    if (size == 0) {
        return;
    }
    cnt = &(((vu32 *) 0x040000b0)[(dmaNo) * 3 + 2]);
    while (*cnt & 0x80000000) {
    }
    {
        u32 e                            = func_0208120c();
        (((vu32 *) 0x040000e0)[(dmaNo)]) = data;
        func_01ffda34(dmaNo, &(((vu32 *) 0x040000e0)[(dmaNo)]), dest, 0x85000000 | (size >> 2));
        func_02081220(e);
    }
    while (*cnt & 0x80000000) {
    }
}
