/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020924ac from projets/nintendogs-shiba-friends/src/donor/func_020924ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153708[];
extern u8 data_02153714[];
extern u8 *func_02003844(u8 *p, s32 a);
extern void func_02005da4(u16 *a);
extern void func_020cedd4(u16 *a);
extern u8 *func_020055c8(u8 *p, u16 *q);
extern void func_02005478(u8 *p, s32 a, s32 b);
extern void func_02005598(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_02005568(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_02005540(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_020054a0(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020ced70(u8 *p);
extern void func_02005468(u8 *p, s32 a);
extern void func_02005460(u8 *p, s32 a);
extern void func_02005470(u8 *p, s32 a);
void func_020924ac(u8 *param_1) {
    u16 buf[20];
    u8 *puVar3;
    u8 *puVar5;
    u16 uVar1;
    u16 *puVar4;
    u8 *obj;

    puVar3                 = func_02003844(param_1, 20);
    *(u32 *) puVar3        = 0;
    *(u16 *) (puVar3 + 4)  = 0;
    *(u16 *) (puVar3 + 6)  = 0;
    *(s16 *) (puVar3 + 8)  = -1;
    *(u16 *) (puVar3 + 10) = 0;
    *(u16 *) (puVar3 + 12) = 0;
    *(s32 *) (puVar3 + 16) = 3;
    if (**(u16 **) data_02153708 == 0xc002) {
        *(s32 *) (puVar3 + 16) = 0x13;
    }
    func_02005da4(buf);
    puVar4 = *(u16 **) data_02153708;
    buf[1] = 0x11;
    buf[3] = 1;
    buf[5] = 1;
    buf[4] = 0;
    if (*puVar4 == 9 || *puVar4 == 12) {
        buf[2] = 0x16;
    } else {
        buf[2] = 0x14;
    }
    buf[6] = 0;
    if ((*puVar4 & 0x4000) != 0) {
        buf[2] = 0x18;
        buf[6] = 3;
    }
    if ((*puVar4 & 0x4000) == 0) {
        func_020cedd4(buf);
    }
    buf[11] = 3;
    buf[12] = 0x10;
    uVar1   = *(u16 *) *(u8 **) data_02153708;
    if ((uVar1 & 0x4000) == 0) {
        if (uVar1 == 9 || uVar1 == 12) {
            buf[7]  = 8;
            buf[8]  = 0x60;
            buf[14] = 4;
            buf[15] = 0x100;
        } else {
            buf[7]  = 4;
            buf[8]  = 0x60;
            buf[14] = 0x180;
            buf[15] = 8;
        }
    } else {
        buf[7]  = 0x20;
        buf[8]  = 0x40;
        buf[14] = 0x180;
        buf[19] = 0xc;
    }
    puVar5 = func_020055c8(param_1, buf);
    func_02005478(puVar5, 1, 1);
    func_02005598(puVar5 + 44, 2, 0, 0, 1, 5, 1, 0);
    if (*(u16 *) *(u8 **) data_02153708 == 9 || *(u16 *) *(u8 **) data_02153708 == 12) {
        func_02005568(puVar5 + 120, 1, 0, 3, 0, 8, 2, 0);
        func_02005540(puVar5 + 120, 2, 0, 3, 0, 12, 2);
    } else {
        func_02005540(puVar5 + 120, 2, 0, 0, 0, 2, 1);
        func_020054a0(puVar5 + 120, 0, 0, 1, 0, 0);
    }
    if ((*(u16 *) *(u8 **) data_02153708 & 0x4000) == 0) {
        func_020ced70(puVar5);
    }
    func_02005468(puVar5, 0x10);
    func_02005460(puVar5, 0x00200010);
    if ((*(u16 *) *(u8 **) data_02153708 & 0x8000) != 0 && (*(u16 *) *(u8 **) data_02153708 & 0x4000) != 0) {
        func_02005470(puVar5, 0x20);
    }
    *(u8 **) data_02153714 = puVar3;
    *(u8 **) puVar3        = puVar5;
    if ((*(u16 *) *(u8 **) data_02153708 & 0x4000) != 0) {
        *(u16 *) (puVar3 + 4) = (u16) (*(u16 *) (puVar3 + 4) | 1);
    } else {
        *(u16 *) (puVar3 + 4) = (u16) (*(u16 *) (puVar3 + 4) & ~1);
    }
}
