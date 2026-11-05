/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02094fbc from projets/nintendogs-shiba-friends/src/donor/func_02094fbc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_020422d0(void);
extern void func_020f73d0(void);
extern void func_020f748c(void);
u32 func_02094fbc(u8 *param_1) {
    u32 uVar3;
    s32 iVar2;
    s32 bVar1;

    uVar3 = 1;
    if ((((*(u16 *) 0x04000304) & 0x8000) >> 15) == 1 && (iVar2 = func_020422d0(), iVar2 != 0)) {
        uVar3 = 0;
    }
    iVar2 = *(s16 *) (param_1 + 0x7c);
    bVar1 = 1;
    switch (iVar2) {
        case 48:
        case 50:
        case 51:
        case 52:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 75:
        case 78:
        case 100:
            bVar1 = 0;
            break;
    }
    if (bVar1 != 0) {
        func_020f73d0();
    } else {
        func_020f748c();
    }
    return uVar3;
}
