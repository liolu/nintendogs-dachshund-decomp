/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b5448 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b5448.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153894[];
extern u8 data_02153720[];
extern u8 data_02153708[];
extern s32 func_0200399c(void);
extern s32 func_020af178(void);
extern void func_020af13c(void);
extern void func_020ee7dc(s32 a);
extern void func_020efa24(s32 a, s32 b, s32 c);
extern u32 func_01ffda04(s32 a);
extern void func_020aec40(void);
extern void func_02028fc4(u32 a, s32 b, s32 c);
extern void func_0209e030(u8 *p);
extern void func_0209d698(u8 *p);
extern void func_0209d37c(u8 *p);
extern s32 func_020aec20(void);
extern void func_02105f84(s32 a);
void func_0209d11c(u8 *param_1) {
    s32 iVar3;
    u32 uVar4;
    u8 *piVar2;
    s32 st;

    st = *(u16 *) (param_1 + 4);
    if (st > 0) {
        goto big;
    }
    if (st == 0) {
        goto zero;
    }
    return;
big:
    switch ((u32) (st - 2048)) {
        case 0:
            goto c0;
        case 1:
            goto c1;
        case 2:
            goto c2;
        case 3:
            goto c3;
        case 4:
            goto c4;
        case 5:
            goto c5;
        case 6:
            goto c6;
        case 7:
            goto c7;
    }
    goto ret;
zero:
    iVar3 = func_0200399c();
    if (iVar3 != 0) {
        *(s16 *) (param_1 + 4) = (s16) 0x800;
        *(u16 *) (param_1 + 6) = 0;
    }
    return;
c0:
    iVar3 = func_020af178();
    if (iVar3 == 0) {
        return;
    }
    *(s16 *) (param_1 + 4) = (s16) 0x801;
    *(u16 *) (param_1 + 6) = 0;
    func_020af13c();
    func_020ee7dc(120);
    func_020efa24(0, 60, 120);
    return;
c1:
    *(s16 *) (param_1 + 8) = (s16) (*(s16 *) (param_1 + 8) - 1);
    if (*(s16 *) (param_1 + 8) <= 0) {
        *(s16 *) (param_1 + 4) = (s16) 0x802;
        *(u16 *) (param_1 + 6) = 0;
    }
    return;
c2:
    if (*(s32 *) *(u8 **) data_02153894 != 9) {
        return;
    }
    *(s16 *) (param_1 + 4)   = (s16) 0x803;
    *(u16 *) (param_1 + 6)   = 0;
    piVar2                   = *(u8 **) data_02153720;
    *(u32 *) (piVar2 + 0x20) = *(u32 *) (piVar2 + 0x20) | 2;
    func_02105f84(*(s16 *) (*(u8 **) data_02153708 + 0xe));
    func_0209e030(param_1);
    return;
c3:
    func_0209d698(param_1);
    return;
c4:
    *(s16 *) (param_1 + 6) = (s16) (*(s16 *) (param_1 + 6) + 1);
    if (*(s16 *) (param_1 + 6) < 120) {
        return;
    }
    uVar4                  = func_01ffda04(*(s16 *) (*(u8 **) data_02153708 + 0xe));
    *(s16 *) (param_1 + 4) = (s16) 0x805;
    *(u16 *) (param_1 + 6) = 0;
    func_020aec40();
    func_02028fc4(uVar4, 76, 1);
    return;
c5:
    *(s16 *) (param_1 + 6) = (s16) (*(s16 *) (param_1 + 6) + 1);
    if (*(s16 *) (param_1 + 6) < 180) {
        return;
    }
    *(s16 *) (param_1 + 4) = (s16) 0x803;
    *(u16 *) (param_1 + 6) = 0;
    func_0209e030(param_1);
    return;
c6:
    func_0209d37c(param_1);
    return;
c7:
    iVar3 = func_020aec20();
    if (iVar3 != 0) {
        *(s16 *) (param_1 + 4)   = 1;
        *(u32 *) (param_1 + 0xc) = 1;
    }
ret:
    return;
}
