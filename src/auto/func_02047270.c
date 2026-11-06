/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02047270 from projets/nintendogs-shiba-friends/src/donor/func_02047270.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 *data_0214b484;
extern void func_02047f5c(u8 *a, u32 b, u32 c);
void func_02047270(u8 *param_1) {
    u32 *q = data_0214b484;
    u32 s  = *q * 0x10dcd + 1;
    u16 lo;
    u32 m;
    *q = s;
    lo = (u16) s;
    m  = (u32) lo * 50;
    func_02047f5c(param_1, 8, (u16) (m >> 16) == 0);
}
