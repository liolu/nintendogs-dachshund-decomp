/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dc6c4 from projets/nintendogs-chihuahua-friends/src/donor/func_020dc6c4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[3];
} T3;
extern u8 data_02150330[];
extern u8 *data_02153720;
extern s32 func_02044644(s32 a);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
extern u32 func_020dca1c(u8 *p, u32 *q);
extern s32 func_0210fdf8(u8 *p);
extern s32 func_02069878(s32 a, s32 b);
extern s32 func_020dcbc4(u8 *p);
u32 func_020dc6c4(u8 *p) {
    s32 iv3;
    s32 iv5;
    s32 iv6;
    s32 n6;
    u32 *piVar7;
    u32 *pq;
    u32 uVar4;
    u32 sVar2;
    u8 *g;
    u8 *gp;
    u32 t3;
    u32 t4;
    u32 t5;
    u32 t6;
    u32 t7;
    u32 t8;
    T3 v1;
    u32 tt[6];
    T3 v4;

    iv3    = func_02044644(*(s16 *) (p + 156));
    piVar7 = *(u32 **) (p + 0x214);
    func_02044644(*(s16 *) (p + 156));
    g     = *(u8 *volatile *) &data_02153720;
    t3    = *(u32 *) (data_02150330 + 0x4c);
    t4    = *(u32 *) (data_02150330 + 0x58);
    gp    = *(u8 *volatile *) (g + 0x1c);
    t5    = *(u32 *) (data_02150330 + 0x64);
    t6    = *(u32 *) (data_02150330 + 0x50);
    t7    = *(u32 *) (data_02150330 + 0x5c);
    t8    = *(u32 *) (data_02150330 + 0x68);
    v1    = *(T3 *) (gp + 0x48);
    tt[3] = t6;
    tt[0] = t3;
    tt[1] = t4;
    tt[2] = t5;
    tt[4] = t7;
    tt[5] = t8;
    v4    = *(T3 *) (*(u8 **) (g + 0x1c) + 0x30);
    func_01ff832c(0x4000, (u32 *) &v1, (u32 *) &v4, (u32 *) (p + 188));
    func_01ff832c(-0x171, tt, (u32 *) (p + 188), (u32 *) (p + 188));
    func_01ff832c(0x28f, tt + 3, (u32 *) (p + 188), (u32 *) (p + 188));
    uVar4 = func_020dca1c(p, (u32 *) (p + 200));
    if (iv3 == 0) {
        return uVar4;
    }
    if ((*(u16 *) (data_02153720 + 0x84) & 1) != 0) {
        func_02044644(*(s16 *) (p + 156));
        pq  = *(u32 **) (p + 0x214);
        iv6 = *(s16 *) (data_02153720 + 0x86);
        iv5 = *(s16 *) (data_02153720 + 0x88);
        if (iv6 > 0) {
            n6 = iv6;
        } else {
            n6 = -iv6;
        }
        if (n6 < 2) {
            if (iv5 > 0) {
                n6 = iv5;
            } else {
                n6 = -iv5;
            }
            if (n6 < 2) {
                sVar2 = *(u16 *) ((u8 *) pq + 8);
                goto done;
            }
        }
        sVar2 = func_02069878(iv5, iv6);
    done:
        uVar4 = (u16) (sVar2 - *(u16 *) ((u8 *) piVar7 + 8));
        if (uVar4 > 0x8000) {
            if (uVar4 < 0xe000) {
                uVar4 = 0xe000;
            }
            piVar7[0] = piVar7[0] + (0x10000 - uVar4);
            if ((s32) piVar7[0] >= 0x100000) {
                piVar7[0] = piVar7[0] - 0x100000;
            }
            uVar4 = func_020dcbc4(p);
        } else {
            if (uVar4 > 0x2000) {
                uVar4 = 0x2000;
            }
            piVar7[0] = piVar7[0] - uVar4;
            if ((s32) piVar7[0] < 0) {
                piVar7[0] = piVar7[0] + 0x100000;
            }
            uVar4 = func_020dcbc4(p);
        }
        *(u16 *) ((u8 *) piVar7 + 8) = (u16) sVar2;
        return uVar4;
    }
    return func_0210fdf8(p);
}
