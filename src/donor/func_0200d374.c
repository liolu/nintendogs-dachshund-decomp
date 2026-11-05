/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200d374 from projets/nintendogs-shiba-friends/src/donor/func_0200d374.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern u32 *data_0214b484;
extern void func_020235c0(u8 *p, s32 a, s32 b);
extern void func_020357c0(u8 *p, s32 a);
extern void func_02038edc(u8 *p);
extern void func_02036fbc(u8 *p, s32 a);
extern void func_0202c938(u8 *p, s32 a);
void func_0200d374(u8 *param_1) {
    u32 uVar6;
    s32 iVar5;
    s32 iVar4;

    func_020235c0(param_1, 1, 3);
    func_020357c0(param_1, 1);
    uVar6                  = *(u32 *) data_0214b484 * 0x10dcd + 1;
    *(u32 *) data_0214b484 = uVar6;
    if ((u16) (((u32) (u16) uVar6 * 500u) >> 16) == 0) {
        iVar5                      = *(s32 *) data_0214b484 * 0x10dcd + 1;
        *(s32 *) data_0214b484     = iVar5;
        *(s32 *) (param_1 + 0x26c) = ((s32) (((s64) ((s16) (u16) (iVar5 & 0xfff)) * (81920) + 0x800) >> 12)) - 40960;
        iVar4                      = *(s32 *) data_0214b484 * 0x10dcd + 1;
        *(s32 *) data_0214b484     = iVar4;
        *(s32 *) (param_1 + 0x274) = ((s32) (((s64) ((s16) (u16) (iVar4 & 0xfff)) * (81920) + 0x800) >> 12)) - 40960;
    }
    func_02038edc(param_1);
    func_02036fbc(param_1, 0x302);
    func_0202c938(param_1, 0);
}
