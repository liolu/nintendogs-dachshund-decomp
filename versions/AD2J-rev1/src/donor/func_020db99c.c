/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020db994 from projets/nintendogs-shiba-friends/src/donor/func_020db994.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 data_0212dbe0[];
extern u32 func_020afd88(u8 *p);
extern void func_0210fdc8(u8 *p);
extern u32 func_020894a0(u32 a);
extern u32 func_020894a8(u32 a);
extern void func_0207d0e0(u32 a, u32 b, u32 c, u32 d);
void func_020db99c(u8 *param_1) {
    int iVar4;
    u32 uVar2;
    u32 iVar3;

    if (func_020afd88(param_1) == 0) {
        return;
    }
    iVar4 = *(volatile int *) (param_1 + 0x214);
    func_0210fdc8(param_1);
    uVar2 = func_020894a0(*(u32 *) (iVar4 + 0x68));
    iVar3 = func_020894a8(*(u32 *) (iVar4 + 0x68));
    func_0207d0e0(0x23, 0, iVar3, uVar2);
    func_0207d0e0(0x1a, 0, *(u32 *) (iVar4 + 0x98) + 0xc, 0x400);
    func_0207d0e0(0x1b, 0, *(u32 *) (iVar4 + 0x9c) + 0xc, 0x400);
    func_0207d0e0(0x19, 0, *(u32 *) (iVar4 + 0xa0) + 0xc, 0x800);
    func_0207d0e0(0x16, 0, *(u32 *) (*(u32 *) (iVar4 + 0x8c) + 0x14), 0x2000);
    func_0207d0e0(0x15, 0, *(u32 *) (*(u32 *) (iVar4 + 0x90) + 0x14), 0x4000);
    func_0207d0e0(0x1e, 0, *(u32 *) (*(u32 *) (iVar4 + 0x88) + 0xc), 0x1c0);
    func_0207d0e0(0x1f, 0, *(u32 *) (*(u32 *) (iVar4 + 0x94) + 0xc), 0x1c0);
    {
        u8 *tb = data_0212dbe0;
        func_0207d0e0(0x1f, 0x24, (u32) (tb + *(u8 *) (iVar4 + 4) * 8), 2);
    }
    {
        u8 *tb = data_0212dbe0;
        func_0207d0e0(0x1f, 0x26, (u32) (tb + *(u8 *) (iVar4 + 4) * 8 + 2), 2);
    }
    {
        u8 *tb = data_0212dbe0;
        func_0207d0e0(0x1f, 0x3c, (u32) (tb + *(u8 *) (iVar4 + 4) * 8 + 4), 2);
    }
    {
        u8 *tb = data_0212dbe0;
        func_0207d0e0(0x1f, 0x3e, (u32) (tb + *(u8 *) (iVar4 + 4) * 8 + 6), 2);
    }
    *(u32 *) (iVar4 + 0x154) = 1;
}
