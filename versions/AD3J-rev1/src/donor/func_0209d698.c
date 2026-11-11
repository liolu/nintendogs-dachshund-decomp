/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b59c4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b59c4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153708[];
extern u8 data_02129240[];
extern u32 func_01ffda04(s32 a);
extern u32 func_02022d34(u32 a);
extern u32 func_02022ce4(u32 a);
extern u8 *func_0203b6ac(u32 a, u32 b);
extern u32 func_02027450(u32 a);
extern u32 func_02022c94(u32 a);
extern u32 func_02028144(u32 a);
extern void func_0209de10(u8 *p, s32 a, u32 b, u32 c, s32 d);
extern void func_020aecbc(void);
extern void func_020be508(void);
extern void func_020aed24(void);
extern void func_0209dc5c(u8 *p, s32 a);
extern void func_0209da30(u8 *p, s32 a);
extern void func_0209d8e8(u8 *p);
void func_0209d698(u8 *param_1) {
    s16 *psVar11;
    u32 iVar6;
    u32 uVar7;
    u32 bVar3;
    u8 *puVar8;
    u8 *puVar10;
    s32 bVar1;
    s32 r2;
    u32 iVar9;
    u32 uVar4;
    s32 tt;
    psVar11 = (s16 *) (*(s16 *) (param_1 + 0x20) * 6 + data_02129240);
    iVar6   = func_01ffda04(*(s16 *) (*(u8 **) data_02153708 + 0xe));
    uVar7   = func_02022d34(iVar6);
    bVar3   = func_02022ce4(iVar6);
    puVar8  = func_0203b6ac(uVar7, bVar3);
    if (uVar7 == *(u16 *) (param_1 + 0x24)) {
        if (bVar3 == *(u16 *) (param_1 + 0x26)) {
            goto TRUEB;
        }
    }
    uVar4 = func_02027450(iVar6);
    if (uVar4 <= 1) {
        goto TRUEB;
    }
    *(s16 *) (param_1 + 0x28) = 0;
    if (uVar7 == 0) {
        goto ZB;
    }
    iVar9 = func_02022c94(iVar6);
    iVar6 = func_02028144(iVar6);
    tt    = (s16) iVar9 * 60 + (iVar6 + 144);
    func_0209de10(param_1, *psVar11, uVar7, bVar3, tt + 18);
    goto J110;
ZB:
    puVar10 = func_0203b6ac(*(u16 *) (param_1 + 0x24), *(u16 *) (param_1 + 0x26) & 0xff);
    switch (*psVar11) {
        case 0:
            func_020aecbc();
            break;
        case 1:
            if (*(u16 *) puVar10 == *(s16 *) (param_1 + 0x3e)) {
                func_020be508();
            }
            break;
    }
J110:
    *(s16 *) (param_1 + 0x24) = (s16) uVar7;
    *(u16 *) (param_1 + 0x26) = (u16) bVar3;
    goto AFTER;
TRUEB:
    if (*(u16 *) puVar8 == *(s16 *) (param_1 + 0x3e)) {
        *(s16 *) (param_1 + 0x28) = (s16) func_02027450(iVar6);
    } else {
        *(s16 *) (param_1 + 0x28) = 0;
    }
AFTER:
    r2 = 0;
    switch (*psVar11) {
        case 0:
            if (*(s16 *) (param_1 + 0x22) >= *(s16 *) (param_1 + 0x2c)) {
                r2 = 1;
            }
            break;
        case 1:
            if (*(s16 *) (param_1 + 0x28) >= *(s16 *) (param_1 + 0x3c)) {
                r2 = 1;
            }
            break;
        case 2:
            break;
    }
    bVar1                  = r2;
    *(s16 *) (param_1 + 2) = *(s16 *) (param_1 + 2) - 1;
    if (*(s16 *) (param_1 + 2) > 0) {
        if (bVar1 == 0) {
            return;
        }
    }
    if (bVar1 != 0) {
        func_020aed24();
    }
    switch (*psVar11) {
        case 0:
            func_0209dc5c(param_1, psVar11[2]);
            break;
        case 1:
            func_0209da30(param_1, psVar11[2]);
            break;
        case 2:
            func_0209d8e8(param_1);
            break;
    }
    *(s16 *) (param_1 + 0x20) = *(s16 *) (param_1 + 0x20) + 1;
    if (*(s16 *) (param_1 + 0x20) >= 5) {
        *(s16 *) (param_1 + 4) = 0x806;
        *(s16 *) (param_1 + 6) = 0;
    } else {
        *(s16 *) (param_1 + 4) = 0x804;
        *(s16 *) (param_1 + 6) = 0;
    }
}
