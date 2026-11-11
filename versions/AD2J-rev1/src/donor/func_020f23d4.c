/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f23cc from projets/nintendogs-shiba-friends/src/donor/func_020f23cc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 data_02154cb8;
extern u32 data_0214b150;
extern u32 data_02132d88;
extern u32 data_02132ea0;
extern u32 data_02132e24;
extern u32 data_02132f1c;
extern u32 data_02132da8;
extern u32 func_020ef698(u8 *p);
u8 func_020f23d4(u8 *param_1) {
    u8 *iVar1;
    u32 uVar2;
    u8 *r0;

    r0    = (u8 *) data_0214b150 + 28;
    uVar2 = *(u16 *) ((u8 *) &data_02154cb8 + 24);
    if (uVar2 == 0x18) {
        iVar1 = (u8 *) &data_02132d88 + func_020ef698(r0) * 4;
    } else {
        switch (*(u32 *) (r0 + 4)) {
            case 3:
            case 4:
            case 5:
                iVar1 = (u8 *) &data_02132ea0 + uVar2 * 4;
                break;
            case 6:
            case 7:
            case 8:
                iVar1 = (u8 *) &data_02132e24 + uVar2 * 4;
                break;
            case 9:
            case 10:
            case 11:
                iVar1 = (u8 *) &data_02132f1c + uVar2 * 4;
                break;
            case 1:
            case 2:
            case 12:
                iVar1 = (u8 *) &data_02132da8 + uVar2 * 4;
                break;
            case 0:
            default:
                iVar1 = (u8 *) &data_02132ea0 + uVar2 * 4;
                break;
        }
    }
    return *(u8 *) (iVar1 + (u32) param_1);
}
