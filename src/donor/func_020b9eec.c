/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b9eec from projets/nintendogs-chihuahua-friends/src/donor/func_020b9eec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern void func_02069b68(u32 a);
extern void func_020a3a70(u32 a, u32 b, u32 c);
void func_020b9eec(void) {
    func_02069b68(0);
    *(u16 *) 0x0400100a = (u16) ((*(u16 *) 0x0400100a & 0x43) | 0x504);
    *(u16 *) 0x0400100c = (u16) ((*(u16 *) 0x0400100c & 0x43) | 0x604);
    *(u16 *) 0x0400100e = (u16) ((*(u16 *) 0x0400100e & 0x43) | 0x708);
    func_020a3a70(2, 2, 0);
    func_020a3a70(2, 4, 1);
    func_020a3a70(2, 0x10, 1);
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
}
