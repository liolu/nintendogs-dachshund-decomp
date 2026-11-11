/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02051984 from projets/children-of-mana/src/auto/func_02051984.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef volatile u32 vu32;
typedef volatile u8 vu8;
extern void func_020675c8(u32 hi, u32 lo);
void func_020675c8(u32 hi, u32 lo) {
    while (*(vu32 *) 0x040001A4 & 0x80000000) {
    }
    *(vu8 *) 0x040001A1 = 0xC0;
    *(vu8 *) 0x040001A8 = (u8) (hi >> 24);
    *(vu8 *) 0x040001A9 = (u8) (hi >> 16);
    *(vu8 *) 0x040001AA = (u8) (hi >> 8);
    *(vu8 *) 0x040001AB = (u8) (hi >> 0);
    *(vu8 *) 0x040001AC = (u8) (lo >> 24);
    *(vu8 *) 0x040001AD = (u8) (lo >> 16);
    *(vu8 *) 0x040001AE = (u8) (lo >> 8);
    *(vu8 *) 0x040001AF = (u8) (lo >> 0);
}
