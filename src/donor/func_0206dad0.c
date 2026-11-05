/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bf624 from projets/eyeshield-21/src/auto/func_020bf624.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned long u32;
typedef volatile u32 vu32;
extern void func_0206dad0(u32 dmaNo, void *dest, u16 data, u32 size);
typedef u32 OSIntrMode;
extern OSIntrMode func_0208120c(void);
extern OSIntrMode func_02081220(OSIntrMode state);
extern void func_01ffda34(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
void func_0206dad0(u32 dmaNo, void *dest, u16 data, u32 size) {
    vu32 *dmaCntp;
    if (size == 0) {
        return;
    }
    dmaCntp = &((vu32 *) 0x040000b0)[dmaNo * 3 + 2];
    while (*(dmaCntp) & 0x80000000) {
    };
    {
        OSIntrMode enabled = func_0208120c();
        vu32 *p            = (vu32 *) (0x040000e0 + dmaNo * 4);
        *p                 = data;
        func_01ffda34(dmaNo, (u32) p, (u32) dest, (0x81000000 | ((size) >> 1)));
        func_02081220(enabled);
    }
    while (*(dmaCntp) & 0x80000000) {
    };
}
extern void func_01ffda34(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
