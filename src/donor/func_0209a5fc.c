/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209a5fc from projets/nintendogs-chihuahua-friends/src/donor/func_0209a5fc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_0215372c;
extern u8 *data_0214b150;
extern void *func_02003844(s32 *p, u32 n);
extern void func_0209a68c(u8 *p, u8 *q, u32 r);
extern void func_0200668c(u32 a, void *b);
extern void func_0209aa98(void);
void func_0209a5fc(s32 *param_1) {
    data_0215372c                   = (u8 *) func_02003844(param_1, 0x14);
    *(u32 *) data_0215372c          = 0xc000;
    *(u16 *) (data_0215372c + 0x10) = 0xffff;
    *(u16 *) (data_0215372c + 4)    = 0;
    *(u16 *) (data_0215372c + 6)    = 0;
    *(u32 *) (data_0215372c + 8)    = 0;
    *(u32 *) (data_0215372c + 0xc)  = 0;
    func_0209a68c(data_0215372c, data_0214b150 + 44, 1);
    func_0200668c(13, (void *) func_0209aa98);
}
