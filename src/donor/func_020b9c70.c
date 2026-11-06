/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211392c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211392c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_0213f304;
extern u32 data_0213f314;
extern void func_02069b68(u32 a);
extern void func_020a3a70(u32 a, u32 b, u32 c);
extern void func_0207d0e0(u32 a, u32 b, u32 c, u32 d);
void func_020b9c70(u32 *param_1) {
    func_02069b68(0);
    *(u16 *) 0x0400100a = (u16) ((*(u16 *) 0x0400100a & 0x43) | 0x504);
    *(u16 *) 0x0400100c = (u16) ((*(u16 *) 0x0400100c & 0x43) | 0x604);
    *(u16 *) 0x0400100e = (u16) ((*(u16 *) 0x0400100e & 0x43) | 0x708);
    func_020a3a70(2, 2, 1);
    func_020a3a70(2, 4, 1);
    func_020a3a70(2, 0x10, 1);
    func_0207d0e0(0x1f, 0, param_1[3], 0xe0);
    func_0207d0e0(*(u32 *) ((u8 *) &data_0213f304 + 4), 0, param_1[2], 0x4000);
    func_0207d0e0(*(u32 *) ((u8 *) &data_0213f314 + 4), 0, param_1[5], 0x800);
    func_0207d0e0(*(u32 *) ((u8 *) &data_0213f304 + 8), 0, param_1[2], 0x4000);
    func_0207d0e0(*(u32 *) ((u8 *) &data_0213f314 + 8), 0, param_1[6], 0x800);
    *(u16 *) 0x04001040 = 0xff;
    *(u16 *) 0x04001044 = 0xbf;
    *(u16 *) 0x04001042 = 0xff;
    *(u16 *) 0x04001046 = 0xbf;
    *(u32 *) 0x04001014 = 0;
    *(u32 *) 0x04001018 = 0;
    *(u16 *) 0x0400100a = (u16) (*(u16 *) 0x0400100a & ~0x40);
    *(u16 *) 0x0400100c = (u16) (*(u16 *) 0x0400100c & ~0x40);
    *(u16 *) 0x0400100a = (u16) ((*(u16 *) 0x0400100a & ~3) | 2);
    *(u16 *) 0x0400100c = (u16) ((*(u16 *) 0x0400100c & ~3) | 3);
    param_1[0]          = 0;
}
