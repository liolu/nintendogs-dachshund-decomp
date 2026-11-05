/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211d234 from projets/nintendogs-shiba-friends/src/donor/func_0211d234.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 data_021560e8;
extern void func_0211cfd8(void);
extern void func_0211d17c(void);
extern s32 func_0211f80c(u16 *);
extern s32 func_02065ab4(s32, void *, s32);
extern void func_0211f66c(void *, s32, s32, s32, s32, s32, void *);
void func_0211d23c(u16 *param_1) {
    s32 *piVar3;
    s32 iVar4;
    u8 *iVar5;
    u16 asStack_c[2];
    u16 sVar1;
    u16 uVar2;
    void (*cb)(u16 *);
    s32 r;
    u8 *pd;

    iVar4 = func_0211f80c(param_1);
    if (iVar4 == 0) {
        goto ZERO;
    }
    iVar5 = (u8 *) data_021560e8;
    iVar4 = *(s32 *) (iVar5 + 0x2c);
    if (iVar4 == 1) {
        goto L48;
    }
    if (iVar4 == 2) {
        goto L48;
    }
    if (iVar4 == 3) {
        goto L64;
    }
    return;
L48:
    if (*(s16 *) (iVar5 + 0x38) == 0) {
        *(s16 *) (iVar5 + 0x38) = 1;
    }
    return;
L64:
    switch (param_1[4]) {
        case 7:
            goto C7;
        case 9:
            goto C9;
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 8:
            goto END;
        default:
            goto END;
    }
C7:
    cb = *(void (**)(u16 *))(iVar5 + 0x18);
    if (cb != 0) {
        cb(param_1);
    }
    if (*(s32 *) (data_021560e8 + 0x28) == 3) {
        return;
    }
    r            = func_02065ab4(5, (void *) func_0211cfd8, 0);
    asStack_c[0] = (u16) r;
    if (asStack_c[0] != 0) {
        return;
    }
    iVar4 = data_021560e8;
    func_0211f66c((void *) func_0211d17c, *(s32 *) (iVar4 + 0x10), (u16) * (u32 *) (iVar4 + 0xc), *(s32 *) (iVar4 + 8),
                  (u16) * (u32 *) (iVar4 + 4), 0, asStack_c);
    return;
C9:
    if (*(s32 *) (iVar5 + 0x34) == 1) {
        return;
    }
    *(s32 *) (iVar5 + 0x34)         = 1;
    *(u16 *) (data_021560e8 + 0x30) = 20;
    *(u16 *) (data_021560e8 + 0x32) = 12;
    return;
ZERO:
    piVar3 = &data_021560e8;
    pd     = (u8 *) *piVar3;
    if (*(s32 *) (pd + 0x48) == 1) {
        if (*(s16 *) (pd + 0x38) == 0) {
            *(s16 *) (pd + 0x38) = 1;
        }
        return;
    }
    sVar1 = param_1[1];
    if (sVar1 != 11) {
        goto Z12;
    }
    uVar2 = param_1[0];
    if (*(s32 *) (pd + 0x34) == 1) {
        return;
    }
    *(s32 *) (pd + 0x34)      = 1;
    *(u16 *) (*piVar3 + 0x30) = sVar1;
    *(u16 *) (*piVar3 + 0x32) = uVar2;
    return;
Z12:
    if (sVar1 != 12) {
        goto Z1;
    }
    uVar2 = param_1[0];
    if (*(s32 *) (pd + 0x34) == 1) {
        return;
    }
    *(s32 *) (pd + 0x34)      = 1;
    *(u16 *) (*piVar3 + 0x30) = sVar1;
    *(u16 *) (*piVar3 + 0x32) = uVar2;
    return;
Z1:
    if (sVar1 != 1) {
        return;
    }
    uVar2 = param_1[0];
    if (*(s32 *) (pd + 0x34) == 1) {
        return;
    }
    *(s32 *) (pd + 0x34)      = 1;
    *(u16 *) (*piVar3 + 0x30) = sVar1;
    *(u16 *) (*piVar3 + 0x32) = uVar2;
    return;
END:
    return;
}
