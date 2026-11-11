/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a2574 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a2574.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154f24[];
extern void func_02072320(u32 *, s32);
extern void func_020ef2a8(void);
extern void func_020722b0(s32, s32, s32);
// clang-format off
void func_020f1280(void)
{
    volatile s32 z;
    u32 uVar2;
    u32 base;
    u32 uVar1;
    s16 uVar9;
    u32 *puVar8;
    u16 *puVar7;
    u16 *puVar6;
    u16 *puVar5;
    u16 uVar3;

    base = (u32)data_02154f24;
    uVar9 = 0;
    puVar8 = (u32 *)(base + 0x28);
    asm {
        str uVar9, [sp, #0]
    }
    puVar7 = (u16 *)(base + 0x18);
    puVar6 = (u16 *)(base + 0x1c);
    puVar5 = (u16 *)(base + 0x1e);
    do {
        uVar2 = 1u << uVar9;
        uVar1 = (u16)uVar2;
        uVar3 = (u16)uVar2;
        if (*(u16 *)(base + 0x1c) != 0 && (*(u16 *)(base + 0x1c) & uVar1) != 0) {
            if ((*(u16 *)(base + 0x1e) & uVar1) == 0) {
                func_02072320(puVar8, z);
                *puVar7 = *puVar7 & ~uVar3;
                *puVar6 = *puVar6 & ~uVar3;
            }
            *puVar5 = *puVar5 & ~uVar3;
        }
        if (*(s32 *)(base + uVar9 * 4 + 0x28) == 0 && (*(u16 *)(base + 0x18) & uVar1) != 0) {
            {
                u8 *bq = (u8 *)base;
                *(u16 *)(bq + 0x18) = *(u16 *)(bq + 0x18) & ~uVar3;
                *(u16 *)(bq + 0x1c) = *(u16 *)(bq + 0x1c) & ~uVar3;
                *(u16 *)(bq + 0x1a) = *(u16 *)(bq + 0x1a) & ~uVar3;
            }
        }
        uVar9 = (s16)(uVar9 + 1);
        puVar8 = puVar8 + 1;
    } while (uVar9 < 4);
    func_020ef2a8();
    if (*(s32 *)(base + 0x38) == 0) {
        return;
    }
    if (*(s32 *)(base + 0x24) == 0) {
        return;
    }
    *(s32 *)(base + 0x20) = *(s32 *)(base + 0x20) + 1;
    if (*(s32 *)(base + 0x20) > 15) {
        func_020722b0(0x43, 0, 0);
        *(s32 *)(base + 0x24) = 0;
        *(s32 *)(base + 0x20) = 0;
        return;
    }
    return;
}
// clang-format on
