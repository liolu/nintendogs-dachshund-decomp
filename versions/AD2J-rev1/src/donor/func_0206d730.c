/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02059930 from projets/children-of-mana/src/auto/func_02059930.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
typedef volatile u32 vu32;
extern void func_02081288(void);
void func_0206d730(u32 dmaNo, u32 dmaType) {
    s32 i;
    vu32 *cnt = &(((vu32 *) 0x040000b0)[(0) * 3 + 2]);

    for (i = 0; i < 3; i++, cnt += 3) {
        u32 dmaCnt;
        if (i == dmaNo) {
            continue;
        }
        dmaCnt = *cnt;
        if (!(dmaCnt & 0x80000000)) {
            continue;
        }
        dmaCnt &= 0x38000000;
        if (dmaCnt == dmaType) {
            continue;
        }
        if (dmaCnt == 0x08000000 && dmaType == 0x10000000) {
            continue;
        }
        if (dmaCnt == 0x10000000 && dmaType == 0x08000000) {
            continue;
        }
        if (dmaCnt == 0x18000000 || dmaCnt == 0x20000000 || dmaCnt == 0x28000000 || dmaCnt == 0x30000000 ||
            dmaCnt == 0x38000000 || dmaCnt == 0x08000000 || dmaCnt == 0x10000000) {
            func_02081288();
        }
    }
}
