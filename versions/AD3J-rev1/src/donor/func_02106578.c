/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bc5f8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bc5f8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
extern u8 *data_02156080;
extern void func_0210bec0(s32 a);
extern void func_020d3d10(s32 a);
extern u16 *func_020b54bc(s32 a, s32 b);
extern void func_020c2fc8(u8 *p);
extern void func_020c2e0c(u8 *p, s32 a, s32 b, s32 c);
extern void func_020c2df4(u8 *p);
BOOL func_02106578(u32 param_1, u16 param_2) {
    u8 *puVar8;
    s32 iVar5;
    u16 uVar1;
    s32 iVar7;
    BOOL bVar2;
    u16 *psVar6;

    if (*(s16 *) (data_02156080 + 0x2c) != 0) {
        return 0;
    }
    *(u16 *) (data_02156080 + 0x22) = param_2;
    {
        s32 v0;
        v0 = *(s16 *) (data_02156080 + 0x22);
        switch (v0) {
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
                func_0210bec0(v0);
                goto L84;
            case 69:
                func_020d3d10(v0);
                goto L84;
            default:
                goto LDEF;
        }
    }
LDEF:
    *(u32 *) (data_02156080 + 0x30) = 0;
    *(u32 *) (data_02156080 + 0x34) = 0;
L84:
    if (*(u32 *) (data_02156080 + 0x30) != 0) {
        ((void (*)(u32))(*(u32 *) (data_02156080 + 0x30)))(*(u32 *) (data_02156080 + 0x28));
        goto L1c0;
    }
    iVar5 = *(s16 *) (data_02156080 + 0x22);
    switch (iVar5) {
        case 69:
            iVar7 = 7;
            break;
        default:
            iVar7 = 1;
            break;
    }
    psVar6 = func_020b54bc(0, iVar5);
    uVar1  = psVar6[7];
    switch (iVar5) {
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
            break;
        default:
            goto LT;
    }
    bVar2 = 0;
    goto L738;
LT:
    bVar2 = 1;
L738:
    if (bVar2) {
        puVar8 = *(u8 **) (data_02156080 + 0x28);
        func_020c2fc8(puVar8);
        func_020c2e0c(puVar8, uVar1, iVar7, 0x218);
        func_020c2e0c(puVar8, 0x5e, iVar7, 0x88);
        func_020c2df4(puVar8);
    } else {
        puVar8 = *(u8 **) (data_02156080 + 0x28);
        func_020c2fc8(puVar8);
        func_020c2e0c(puVar8, uVar1, iVar7, 0x218);
        func_020c2df4(puVar8);
    }
L1c0:
    *(u16 *) (data_02156080 + 0x2c) = 1;
    return 1;
}
