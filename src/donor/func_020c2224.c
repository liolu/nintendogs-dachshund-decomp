/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c2228 from projets/nintendogs-chihuahua-friends/src/donor/func_020c2228.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_021538e0;
extern u32 data_0214130c;
extern u32 data_02141598;
extern void func_0205e950(void *buf, s32 n, void *src, u32 v);
extern void func_0207e718(void *buf);
void func_020c2224(u32 param_0) {
    volatile u32 save;
    u8 buf[64];
    u8 *obj;
    u32 uVar2;
    save  = param_0;
    obj   = *(u8 **) &data_021538e0;
    uVar2 = ((u32 *) &data_0214130c)[*(u16 *) (obj + 8)];
    func_0205e950(buf, 64, &data_02141598, uVar2);
    func_0207e718(buf);
}
