/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b9a88 from projets/nintendogs-chihuahua-friends/src/donor/func_020b9a88.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern u32 data_0213f304;
extern u32 data_0213f314;
extern void func_02069b68(int a);
extern void func_020a3a70(int a, int b, int c);
extern void func_0207d0e0(u32 a, u32 b, u32 c, u32 d);
void func_020b9a88(u32 *param_1) {
    vu16 *pb;
    vu16 *pa;

    func_02069b68(0);
    *(vu16 *) 0x0400100a = (*(vu16 *) 0x0400100a & 0x43) | 0x504;
    *(vu16 *) 0x0400100c = (*(vu16 *) 0x0400100c & 0x43) | 0x604;
    *(vu16 *) 0x0400100e = (*(vu16 *) 0x0400100e & 0x43) | 0x708;
    func_020a3a70(2, 2, 0);
    func_020a3a70(2, 4, 1);
    func_020a3a70(2, 0x10, 1);
    *(vu16 *) 0x04001040 = 255;
    *(vu16 *) 0x04001044 = 191;
    *(vu16 *) 0x04001042 = 255;
    *(vu16 *) 0x04001046 = 191;
    *(vu32 *) 0x04001014 = 0;
    *(vu32 *) 0x04001018 = 0;
    pa                   = (vu16 *) 0x0400100a;
    pb                   = (vu16 *) 0x0400100c;
    *pa                  = *pa & ~0x40;
    *pb                  = *pb & ~0x40;
    *pa                  = (*pa & ~3) | 2;
    *pb                  = (*pb & ~3) | 3;
    func_0207d0e0(31, 0, param_1[3], 448);
    func_0207d0e0(*(u32 *) ((u8 *) &data_0213f304 + 8), 0, param_1[2], 0x8000);
    func_0207d0e0(*(u32 *) ((u8 *) &data_0213f314 + 8), 0, param_1[6], 0x800);
    param_1[0] = 0;
}
