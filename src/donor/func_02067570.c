/* compiler: 1.2/sp2p3  */
/* func_0205192c from projets/children-of-mana/src/auto/func_0205192c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
extern u8 data_0214e180;
extern u8 data_0214e780;
extern void func_0206e3d8(s32, s32, s32, s32);
extern void func_020675c8(u32, u32);
void func_02067570(void) {
    u8 *r4 = (u8 *) &data_0214e180;
    u32 v;

    func_0206e3d8(*(s32 *) (r4 + 0x24), 0x04100010, *(s32 *) (r4 + 0x1C), 0x200);
    v = *(u32 *) (r4 + 0x18);
    func_020675c8((v >> 8) | 0xB7000000, v << 0x18);
    *(volatile u32 *) 0x040001A4 = *(u32 *) (&data_0214e780 + 4);
}
