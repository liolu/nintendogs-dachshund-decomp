/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200c370 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200c370.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern void *func_02003844(s32 *p, u32 n);
extern void func_020c4f28(u8 *p, u32 v);
extern u32 *func_02043e04(void);
extern void func_020c4ea8(u8 *p, u32 v);
extern void func_0200c058(void);
u8 *func_0200c2c4(s32 *param_1) {
    u8 *puVar4;
    u32 *piVar5;
    u32 iVar6;
    s64 lVar2;
    s32 v;
    u32 mask;
    u32 dv;

    mask   = 0x0fff;
    puVar4 = (u8 *) func_02003844(param_1, 0x38);
    func_020c4f28(puVar4, 0xff);
    *(u16 *) (puVar4 + 0x1c) = 1;
    piVar5                   = func_02043e04();
    iVar6                    = *piVar5 * 0x10dcd + 1;
    v                        = (s16) (u16) (iVar6 & mask);
    lVar2                    = (s64) v * 81920 + 0x800;
    *piVar5                  = iVar6;
    *(u32 *) (puVar4 + 0x20) = (u32) (lVar2 >> 12) - 0xa000;
    *(u32 *) (puVar4 + 0x24) = 0x3000;
    piVar5                   = func_02043e04();
    iVar6                    = *piVar5 * 0x10dcd + 1;
    *piVar5                  = iVar6;
    v                        = (s16) (u16) (iVar6 & mask);
    dv                       = (u32) func_0200c058;
    lVar2                    = (s64) v * 81920 + 0x800;
    *(u32 *) (puVar4 + 0x28) = (u32) (lVar2 >> 12) - 0xa000;
    *(u32 *) (puVar4 + 0x2c) = 0;
    *(u32 *) (puVar4 + 0x30) = 0;
    *(u32 *) (puVar4 + 0x34) = 0;
    func_020c4ea8(puVar4, dv);
    return puVar4;
}
