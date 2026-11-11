/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209f438 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209f438.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
extern u8 data_02154cb8[];
extern u8 data_02154dd8[];
extern s16 data_02154d88;
extern u32 data_02154ddc;
extern void func_020f07bc(u32 a);
extern void func_02072214(u8 *p, s32 a, s32 b);
void func_020ee1d0(void) {
    u8 *S;
    u16 sVar1;
    u16 uVar2;
    s32 iVar6;
    s32 iVar7;

    S     = data_02154dd8;
    sVar1 = *(u16 *) (data_02154cb8 + 0x18);
    if (*(s32 *) (data_02154cb8 + 0x1c) == 0) {
        func_020f07bc(7);
    }
    if (*(s16 *) (data_02154cb8 + 0x3e) == 3) {
        return;
    }
    if (*(s32 *) (data_02154cb8 + 0x1c) != 0) {
        return;
    }
    if (sVar1 == 29) {
        return;
    }
    if (sVar1 == 30) {
        return;
    }
    if (data_02154d88 == 100) {
        return;
    }
    {
        u8 *q               = data_02154dd8;
        *(u16 *) (q + 0x0e) = 60;
        iVar6               = *(s32 *) q;
        iVar7               = 30;
        if (iVar6 != 0) {
            if (*(s32 *) (q + 0x1c) != 0) {
                u16 hi               = *(u16 *) (q + 0x1a);
                uVar2                = *(u16 *) (q + 0x18);
                *(vu16 *) (q + 0x18) = 0;
                *(vu32 *) (q + 0x1c) = 0;
                iVar7                = hi - uVar2;
            }
            iVar6 = *(s16 *) (q + 12) * 60;
            func_02072214(q, iVar6 / 100, iVar7);
        }
    }
    {
        u8 *q2               = data_02154dd8;
        u8 *pv               = (u8 *) &data_02154ddc;
        *(u16 *) (q2 + 0x24) = 60;
        if (*(s32 *) pv != 0) {
            iVar6 = *(s16 *) (q2 + 0x22) * 60;
            func_02072214(pv, iVar6 / 100, 30);
        }
    }
    {
        u8 *q3               = data_02154dd8;
        *(u16 *) (q3 + 0x10) = 60;
    }
    *(s32 *) (S + 0x10c) = 1;
}
