/* compiler: 1.2/sp2p3  */
/* func_02055d3c from projets/children-of-mana/src/auto/func_02055d3c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long fx32;
typedef unsigned short u16;
typedef unsigned long u32;
fx32 func_02068f60(void) {
    while (*(volatile u16 *) 0x040002B0 & 0x8000) {
    }
    return (*(volatile u32 *) 0x040002B4 + 0x200) >> 10;
}
