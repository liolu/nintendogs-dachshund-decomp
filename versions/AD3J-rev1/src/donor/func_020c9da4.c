/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c9da8 from projets/nintendogs-chihuahua-friends/src/donor/func_020c9da8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154c48[];
extern s32 func_02106e88(s32 a);
s32 func_020c9da4(void) {
    s32 iVar8;
    s32 iVar7;
    s32 iVar6;
    s32 bVar1;
    s32 iVar3;
    s32 iVar5;
    s32 iVar4;
    s32 f3;
    s32 f2;

    bVar1 = 0;
    iVar6 = 0;
    iVar5 = 0;
    iVar8 = (s32) * (s16 *) (*(u8 **) (*(u8 **) data_02154c48 + 0x141c) + 0x7e);
    iVar7 = 0x89;
    do {
        iVar3 = (s32) (*(u8 **) (*(u8 **) data_02154c48 + 0x141c)) + 0x248;
        iVar4 = iVar3 + iVar5;
        f3    = *(s8 *) (iVar4 + 3);
        iVar3 = (s32) * (s16 *) (iVar3 + iVar5);
        f2    = *(s8 *) (iVar4 + 2);
        if (f3 > 0 && f2 == 0 && func_02106e88(iVar3) == 5) {
            if (iVar7 > iVar3) {
                iVar7 = iVar3;
            }
            if (iVar8 == iVar3) {
                bVar1 = 1;
                goto LAB;
            }
        }
        iVar6 = (iVar6 + 1) * 0x10000 >> 16;
        iVar5 = iVar5 + 4;
    } while (iVar6 < 200);
LAB:
    if (!bVar1) {
        iVar6                    = *(s32 *) (*(u8 **) data_02154c48 + 0x141c);
        *(s16 *) (iVar6 + 0x7e)  = (s16) iVar7;
        *(u16 *) (iVar6 + 0x6ae) = *(u16 *) (iVar6 + 0x6ae) | 1;
        iVar8                    = iVar7;
    }
    return iVar8;
}
