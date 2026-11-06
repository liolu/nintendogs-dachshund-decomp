/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021198e4 from projets/nintendogs-chihuahua-friends/src/donor/func_021198e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 *data_021560c0;
extern u8 data_021490ac[];
extern u8 data_021560c4[];
extern void func_0211a6a0(u8 *p);
extern void func_0211a974(u32 a, u32 b, u32 *buf);
extern void func_02119934(u8 *a, u8 *b);
void func_021198dc(void) {
    u32 buf[11];
    func_0211a6a0(data_021560c0);
    func_0211a974(*(u32 *) (data_021560c0 + 0x38), *(u32 *) (data_021560c0 + 8), buf);
    *(u32 *) (data_021490ac + 0x28) = buf[10];
    func_02119934(data_021490ac, data_021560c4);
}
