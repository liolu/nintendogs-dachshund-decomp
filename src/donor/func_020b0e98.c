/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b0e98 from projets/nintendogs-chihuahua-friends/src/donor/func_020b0e98.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef volatile u16 vu16;
extern u32 data_02153894;
extern u32 data_0213c504[];
extern void func_0206dfbc(u16 a, void *b, s32 c);
typedef void (*FP)(void *);
void func_020b0e98(void) {
    s32 iVar4;
    s32 *piVar2;
    s32 iVar5;
    vu16 z;
    vu16 z2;

    piVar2 = *(s32 **) &data_02153894;
    if (*piVar2 == 0) {
        return;
    }
    iVar4 = piVar2[3];
    ((FP) (*(u32 *) (iVar4 + 4)))(piVar2 + 4);
    switch (piVar2[2]) {
        case 0:
            goto C0;
        case 1:
            goto C1;
        case 2:
            goto C2;
        case 3:
            goto C3;
        case 4:
            goto C4;
        case 5:
            goto C5;
        case 6:
            goto C6;
        default:
            goto Lend;
    }
C1:
    ((FP) (*(u32 *) (iVar4 + 0x10)))(piVar2 + 4);
    piVar2[0x66] = 0;
    piVar2[2]    = 2;
    ((FP) (*(u32 *) (iVar4 + 0x14)))(piVar2 + 4);
    return;
C2:
    ((FP) (*(u32 *) (iVar4 + 0x14)))(piVar2 + 4);
    if (piVar2[0x66] != 0) {
        piVar2[0x66] = 0;
        piVar2[2]    = 3;
    }
    return;
C3:
    ((FP) (*(u32 *) (iVar4 + 8)))(piVar2 + 4);
    piVar2[2] = 4;
    ((FP) (*(u32 *) (iVar4 + 0xc)))(piVar2 + 4);
    return;
C4:
    ((FP) (*(u32 *) (iVar4 + 0xc)))(piVar2 + 4);
    return;
C5:
    ((FP) (*(u32 *) (iVar4 + 0x18)))(piVar2 + 4);
    piVar2[0x67] = 0;
    piVar2[2]    = 6;
    ((FP) (*(u32 *) (iVar4 + 0x1c)))(piVar2 + 4);
    return;
C6:
    ((FP) (*(u32 *) (iVar4 + 0x1c)))(piVar2 + 4);
    if (piVar2[0x67] != 0) {
        piVar2[0x67] = 0;
        piVar2[2]    = 0;
    }
    return;
C0:
    iVar5 = piVar2[1];
    if (iVar5 != 0) {
        piVar2 = *(s32 **) &data_02153894;
        z      = 0;
        func_0206dfbc(z, piVar2 + 4, 324);
        piVar2[0] = iVar5;
        piVar2[1] = 0;
        piVar2[2] = 1;
        piVar2[3] = (s32) ((u32 *) data_0213c504)[iVar5];
        ((FP) (*(u32 *) piVar2[3]))(piVar2 + 4);
        return;
    }
    piVar2 = *(s32 **) &data_02153894;
    z2     = 0;
    func_0206dfbc(z2, piVar2 + 4, 324);
    piVar2[0] = 0;
    piVar2[1] = 0;
    piVar2[2] = 1;
    piVar2[3] = (s32) data_0213c504[0];
    ((FP) (*(u32 *) piVar2[3]))(piVar2 + 4);
Lend:
    return;
}
