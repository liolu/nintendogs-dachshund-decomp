/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02112cf0 from projets/nintendogs-chihuahua-friends/src/donor/func_02112cf0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u8 *data_02153704;
extern u32 data_02148e50;
extern void func_021170f0(u32 a, u32 *b, u32 c, u32 d, u32 e);
void func_02112cf0(u32 *p0, u16 p1) {
    u32 loc[3];
    loc[0] = 0;
    loc[1] = 0;
    loc[2] = 0;
    func_021170f0((u32) p0, loc, *(u32 *) (data_02153704 + 0xc), 0, p1);
    p0[1] = 0x1e000;
    p0[3] = 0;
    p0[4] = 0;
    p0[5] = 0;
    p0[6] = 0;
    p0[7] = 0x1000;
    p0[8] = 0;
    p0[9] = data_02148e50;
}
