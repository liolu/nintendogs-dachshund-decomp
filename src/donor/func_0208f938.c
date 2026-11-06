/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208f938 from projets/nintendogs-chihuahua-friends/src/donor/func_0208f938.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_02153708;
extern void func_02090508(u32, u32);
void func_0208f938(void) {
    u8 *r4 = (u8 *) data_02153708;
    func_02090508((u32) r4, 14);
    *(u16 *) (r4 + 4) = 10;
    {
        u8 *r2             = (u8 *) data_02153708;
        *(u16 *) (r2 + 32) = *(u16 *) (r2 + 32) | 1;
        *(u16 *) (r2 + 32) = *(u16 *) (r2 + 32) | 2;
    }
    *(u16 *) (r4 + 28) = 0;
}
