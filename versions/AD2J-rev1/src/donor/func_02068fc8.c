/* compiler: 1.2/sp2p3  */
/* func_02055da4 from projets/children-of-mana/src/auto/func_02055da4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long fx32;
typedef unsigned short u16;
typedef unsigned long long u64;
fx32 func_02068fc8(void) {
    while (*(volatile u16 *) 0x04000280 & 0x8000) {
    }
    return (*(volatile u64 *) 0x040002A0 + 0x80000) >> 20;
}
