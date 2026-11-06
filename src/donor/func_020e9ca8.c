/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209aed4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209aed4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_02154cb8;
extern void func_020edd8c(void);
extern void func_020f1288(void);
extern void func_020f26d4(void);
extern void func_020715f0(u32 a, s32 b);
void func_020e9ca8(void) {
    u8 *iVar1;
    u32 uVar2;
    s32 iVar3;

    iVar1 = &data_02154cb8;
    func_020edd8c();
    func_020f1288();
    func_020f26d4();
    iVar3                   = *(u16 *) (iVar1 + 0x1a) + 1;
    *(u16 *) (iVar1 + 0x1a) = (u16) iVar3;
    if (*(u16 *) (iVar1 + 0x1a) >= 3) {
        *(u16 *) (iVar1 + 0x1a) = 0;
    }
    uVar2 = *(u32 *) (iVar1 + 0x38);
    if (uVar2 != 0) {
        *(u16 *) (iVar1 + 0x3c) = *(u16 *) (iVar1 + 0x3c) + 1;
        uVar2                   = *(u16 *) (iVar1 + 0x3c);
        if (uVar2 > 3600) {
            uVar2                   = 0;
            *(u16 *) (iVar1 + 0x3c) = 0;
            *(u32 *) (iVar1 + 0x38) = 0;
        }
    }
    func_020715f0(uVar2, iVar3);
}
