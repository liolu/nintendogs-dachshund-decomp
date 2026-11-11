/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d37a0 from projets/nintendogs-shiba-friends/src/donor/func_020d37a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153720;
extern u32 data_02156080;
extern void func_02044644(s32 a);
extern s32 func_021070e0(s32 a);
extern void func_020ec2a0(void *p, s32 a);
void func_020d37a8(u8 *param_1) {
    s16 *psVar5;
    s32 iVar1;
    s32 iVar6;
    s32 iVar4;
    u32 uVar2;

    psVar5 = *(s16 **) (param_1 + 0x214);
    func_02044644(*(s16 *) (param_1 + 156));
    if (*psVar5 > 0) {
        *psVar5 = *psVar5 - 1;
        return;
    }
    if ((*(u16 *) (*(u8 **) &data_02153720 + 0xc4) & 2) == 0) {
        return;
    }
    iVar1 = func_021070e0(0x45);
    iVar4 = -1;
    uVar2 = 0x12c0;
    iVar6 = 1;
    if (1 < iVar1) {
        u8 *tbl = *(u8 **) &data_02156080;
        do {
            u8 *iVar9;
            s32 iVar7;
            if (iVar6 < 0 || *(s16 *) (tbl + 0x20) <= iVar6) {
                iVar9 = 0;
            } else {
                iVar9 = *(u8 **) (tbl + iVar6 * 4 + 4);
            }
            iVar7 = iVar6;
            if (*(s32 *) (*(u8 **) (iVar9 + 0x214) + 4) == 0) {
                iVar4 = iVar6;
                iVar7 = iVar1;
            }
            iVar6 = (s16) (iVar7 + 1);
        } while (iVar6 < iVar1);
    }
    if (iVar4 == -1 && (iVar6 = 1, 1 < iVar1)) {
        u8 *tbl = *(u8 **) &data_02156080;
        do {
            u8 *iVar9;
            u32 uVar8;
            if (iVar6 < 0 || *(s16 *) (tbl + 0x20) <= iVar6) {
                iVar9 = 0;
            } else {
                iVar9 = *(u8 **) (tbl + iVar6 * 4 + 4);
            }
            uVar8 = *(u32 *) (*(u8 **) (iVar9 + 0x214) + 0x14);
            if (uVar8 <= uVar2) {
                uVar2 = uVar8;
                iVar4 = iVar6;
            }
            iVar6 = (s16) (iVar6 + 1);
        } while (iVar6 < iVar1);
    }
    {
        u8 *iVar9;
        if (iVar4 < 0 || *(s16 *) (*(u8 **) &data_02156080 + 0x20) <= iVar4) {
            iVar9 = 0;
        } else {
            iVar9 = *(u8 **) (*(u8 **) &data_02156080 + iVar4 * 4 + 4);
        }
        *(s32 *) (*(u8 **) (iVar9 + 0x214) + 8) = 1;
    }
    *psVar5 = 6;
    func_020ec2a0(param_1 + 400, 6);
}
