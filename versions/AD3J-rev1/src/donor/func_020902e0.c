/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a839c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a839c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153708;
extern void func_02090508(u8 *p, s32 v);
void func_020902e0(u16 param_1) {
    s16 sVar1;
    u8 *puVar4;
    u8 *iVar7;
    u8 *iVar6;
    s32 iVar5;
    s32 iVar2;

    puVar4 = *(u8 **) &data_02153708;
    func_02090508(puVar4, 10);
    *(u16 *) (puVar4 + 4)  = 6;
    *(u16 *) (puVar4 + 14) = param_1;
    sVar1                  = *(s16 *) (puVar4 + 14);
    {
        u8 *bq                         = puVar4 + 0x20;
        *(u16 *) (bq + sVar1 * 20)     = *(u16 *) (bq + sVar1 * 20) | 1;
        *(s16 *) (bq + sVar1 * 20 + 2) = sVar1;
    }
    iVar2                    = (s16) (((s16) * (u16 *) (puVar4 + 14) + 2) % 3) * 20;
    sVar1                    = (s16) (((s16) * (u16 *) (puVar4 + 14) + 1) % 3);
    iVar6                    = *(u8 **) &data_02153708 + 0x20;
    iVar5                    = sVar1 * 20;
    *(u16 *) (iVar6 + iVar5) = *(u16 *) (iVar6 + iVar5) | 1;
    *(u16 *) (iVar6 + iVar5) = *(u16 *) (iVar6 + iVar5) | 2;
    iVar7                    = *(u8 **) &data_02153708 + 0x20;
    *(u16 *) (iVar7 + iVar2) = *(u16 *) (iVar7 + iVar2) | 1;
    *(u16 *) (iVar7 + iVar2) = *(u16 *) (iVar7 + iVar2) | 2;
    *(s16 *) (puVar4 + 28)   = sVar1;
}
