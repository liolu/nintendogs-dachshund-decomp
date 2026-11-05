/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208cdfc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208cdfc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_021415a0;
extern u32 data_021415a8;
extern u32 data_021415b4[];
extern u32 data_021415c0[];
extern u32 data_021415d0[];
typedef struct {
    u8 b16[16];
    u8 b64[64];
} Fr;
extern void func_0208b6fc(u8 *p);
extern void func_0207e79c(u32 a, u32 b, u32 c);
extern void func_020c1d70(u8 *a, u32 b, u32 c, u32 d);
extern void func_0205e950(u8 *a, u32 b, u32 *c, u32 d, u8 *e);
extern u32 func_0207e718(u8 *buf);
extern void func_020c4bf4(u8 *p, u32 a);
extern u32 func_02006b04(u32 v);
extern void func_0207e76c(u32 a);
void func_020c2870(u8 *p1) {
    Fr F;
    u32 uVar4;
    u32 iv;

    {
        u32 fl = (*(u32 *) (p1 + 0x10) & 1) != 0;
        if (fl) {
            return;
        }
    }
    {
        u32 t84 = *(u32 *) (p1 + 0x84);
        iv      = t84 + 0x60;
    }
    func_0208b6fc(p1 + 4);
    func_0207e79c(*(u32 *) (p1 + 0x84), data_021415a0, iv);
    func_020c1d70(F.b16, 16, *(u16 *) (p1 + 122), *(u16 *) (p1 + 124));
    func_0205e950(F.b64, 64, (u32 *) &data_021415a8, data_021415a0, F.b16);
    iv = func_0207e718(F.b64);
    func_020c4bf4(p1 + 152, iv);
    func_0205e950(F.b64, 64, data_021415b4, data_021415a0, F.b16);
    *(u32 *) (p1 + 0x88) = func_0207e718(F.b64);
    func_0205e950(F.b64, 64, data_021415c0, data_021415a0, F.b16);
    *(u32 *) (p1 + 0x8c) = func_0207e718(F.b64);
    func_0205e950(F.b64, 64, data_021415d0, data_021415a0, F.b16);
    *(u32 *) (p1 + 0x90) = func_02006b04(func_0207e718(F.b64));
    func_0207e76c(*(u32 *) (p1 + 0x84));
    *(u32 *) (p1 + 0x84) = 0;
    *(u32 *) (p1 + 0xb4) = 0;
    *(u32 *) (p1 + 0xbc) = 0;
    *(u16 *) p1          = 3;
    *(u16 *) (p1 + 2)    = *(u16 *) (p1 + 2) | 1;
}
