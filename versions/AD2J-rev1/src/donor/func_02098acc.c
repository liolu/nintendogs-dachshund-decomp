/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02098acc from projets/nintendogs-shiba-friends/src/donor/func_02098acc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153720;
extern u8 *func_01ffda04(s32 a);
extern u8 *func_02028144(u8 *a);
void func_02098acc(u8 *param_1) {
    s32 m1 = -1;
    u8 *iVar2;
    u8 *iVar3;
    if (*(s16 *) (*(u8 **) &data_02153720 + 0x6c) == m1) {
        return;
    }
    *(u16 *) (param_1 + 4)   = 1;
    *(u32 *) (param_1 + 0xc) = 1;
    iVar3                    = *(u8 **) (param_1 + 0x1c);
    if (iVar3 == 0) {
        return;
    }
    *(u16 *) (iVar3 + 6) = *(s16 *) (*(u8 **) &data_02153720 + 0x6c);
    if (*(s16 *) (*(u8 **) &data_02153720 + 0x6c) < 0) {
        goto NEGE;
    }
    iVar2 = func_01ffda04(*(s16 *) (*(u8 **) &data_02153720 + 0x6c));
    iVar2 = func_02028144(iVar2);
    switch (*(s16 *) (iVar3 + 4)) {
        case 0:
            break;
        case 1:
            *(u16 *) (iVar3 + 8) = *(s16 *) (iVar2 + 0x68);
            return;
        case 2:
            goto LAB_020b0db4;
        case 4:
            break;
        case 5:
            break;
        case 6:
        LAB_020b0db4:
            *(u16 *) (iVar3 + 8) = *(s16 *) (iVar2 + 0x6a);
            return;
        case 3:
            *(u16 *) (iVar3 + 8) = *(s16 *) (iVar2 + 0x6c);
            return;
    }
NEG:
    *(s16 *) (iVar3 + 8) = -1;
    return;
NEGE:
    *(s16 *) (iVar3 + 8) = (s16) m1;
    return;
}
