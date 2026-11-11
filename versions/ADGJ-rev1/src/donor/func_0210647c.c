/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210647c from projets/nintendogs-chihuahua-friends/src/donor/func_0210647c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern int data_02156080;
extern s32 func_0210775c(s32 p);
s32 func_0210647c(s32 param_1) {
    s32 iVar9;
    s32 iVar8;
    s32 iVar7;
    u32 uVar6;
    u32 uVar5;
    s32 iVar4;
    s32 iVar3;
    u32 uVar2;

    uVar2 = 0xffff;
    iVar8 = -1;
    if (*(s16 *) ((u8 *) *(int *) &data_02156080 + 0x2c) == 2) {
        iVar7 = 0;
        uVar5 = 0xffffffff;
        iVar9 = iVar8;
        do {
            if (iVar7 < 0 || *(s16 *) ((u8 *) *(int *) &data_02156080 + 0x20) <= iVar7) {
                iVar4 = 0;
            } else {
                iVar4 = *(s32 *) ((u8 *) *(int *) &data_02156080 + iVar7 * 4 + 4);
            }
            uVar6 = uVar5;
            iVar8 = iVar9;
            if (iVar4 != 0 && param_1 == *(s16 *) (iVar4 + 0x94)) {
                iVar3 = func_0210775c(iVar4);
                if (iVar3 != 0) {
                    uVar6 = uVar2;
                    iVar8 = iVar7;
                } else if ((s32) * (u16 *) (iVar4 + 0x9e) > (s32) uVar5) {
                    uVar6 = *(u16 *) (iVar4 + 0x9e);
                    iVar8 = iVar7;
                }
            }
            iVar7 = (s16) (iVar7 + 1);
            uVar5 = uVar6;
            iVar9 = iVar8;
        } while (iVar7 < 7);
    }
    return iVar8;
}
