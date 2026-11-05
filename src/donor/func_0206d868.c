/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02059a68 from projets/children-of-mana/src/auto/func_02059a68.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern void func_0206d868(u32 dmaNo);
static inline void UnkWaitDmaBusy(u32 dmaNo) {
    vu32 *cnt = &(((vu32 *) 0x040000b0)[(dmaNo) * 3 + 2]);
    while (*cnt & 0x80000000) {
    }
}
void func_0206d868(u32 dmaNo) {
    u32 e = func_0208120c();
    UnkWaitDmaBusy(dmaNo);
    if (dmaNo == 0) {
        vu32 *p = (vu32 *) (0x040000b0 + dmaNo * 12);
        p[0]    = 0;
        p[1]    = 0;
        p[2]    = 0x81400001;
    }
    func_02081220(e);
}
