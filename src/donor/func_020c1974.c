/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c1974 from projets/nintendogs-chihuahua-friends/src/donor/func_020c1974.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_02141490;
extern void func_0205e950(u8 *buf, u32 n, u32 *g, u32 p);
extern u32 func_0207e718(u8 *buf);
extern void func_02078f8c(u32 a, u32 b);
void func_020c1974(u32 param_1) {
    u8 buf[64];
    u32 iVar1;

    func_0205e950(buf, 0x40, &data_02141490, param_1);
    iVar1 = func_0207e718(buf);
    func_02078f8c(iVar1, 0);
}
