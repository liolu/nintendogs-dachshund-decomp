/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02091a24 from projets/nintendogs-shiba-friends/src/donor/func_02091a24.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
extern void func_02005da4(void *p);
extern void func_020cedd4(void *p);
extern u16 *func_020055c8(int *p, void *buf);
extern void func_02005540(void *p, int a, int b, int c, int d, int e, int f);
extern void func_020ced70(void *p);
u16 *func_0209e9b4(int *param_1) {
    u16 *puVar1;
    u16 buf[22];

    func_02005da4(buf);
    buf[1] = 4;
    buf[2] = 4;
    buf[3] = 1;
    buf[4] = 0;
    buf[5] = 0;
    buf[6] = 0;
    func_020cedd4(buf);
    buf[7]  = 3;
    buf[14] = 4;
    buf[8]  = 64;
    puVar1  = func_020055c8(param_1, buf);
    func_02005540((u8 *) puVar1 + 44, 3, 0, 0, 0, 6, 1);
    func_02005540((u8 *) puVar1 + 120, 3, 0, 0, 0, 6, 1);
    func_020ced70(puVar1);
    return puVar1;
}
