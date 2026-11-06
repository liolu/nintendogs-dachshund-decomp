/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209fb34 from projets/nintendogs-chihuahua-friends/src/donor/func_0209fb34.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02154c70[];
extern u8 data_02153700[];
extern s32 func_0200399c(void);
extern u32 func_020ca9f0(void);
extern void func_020caaac(s32 a, s32 b);
extern void func_020cc36c(s32 a, s32 b, s32 c);
extern void func_020cb090(void);
extern void func_020cb414(s32 a, s32 b, s32 c, s32 d);
extern void func_020cb070(void);
extern void func_020cd3ac(void);
extern void func_020cd3d8(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_0209fb34(u8 *param_1) {
    u32 uVar3;
    s32 iVar2;
    u16 st;

    st = *(u16 *) (param_1 + 4);
    if (st == 0) {
        goto st0;
    }
    if (st == 0xf00) {
        goto stf00;
    }
    if (st == 0xf01) {
        goto stf01;
    }
    return;
st0:
    iVar2 = func_0200399c();
    if (iVar2 != 0) {
        *(u16 *) (param_1 + 4) = 0xf00;
        *(u16 *) (param_1 + 6) = 0;
    }
    return;
stf00:
    if (*(s16 *) (param_1 + 10) == -1) {
        return;
    }
    *(u16 *) (param_1 + 6) = 0;
    if (*(s16 *) (param_1 + 10) == -3) {
        *(u32 *) (param_1 + 0x18) = 23;
    } else if (*(s16 *) (param_1 + 10) >= 0) {
        *(u32 *) (param_1 + 0x18) = 9;
    } else {
        *(u32 *) (param_1 + 0x18) = 1;
    }
    if (*(s16 *) (param_1 + 10) >= 0) {
        *(u16 *) (param_1 + 4) = 0xf01;
        func_020cd3d8(0, 1200, 0, 0, 0);
        return;
    }
    *(u16 *) (param_1 + 4)   = 1;
    *(u32 *) (param_1 + 0xc) = 1;
    return;
stf01:
    *(s16 *) (param_1 + 6) = (s16) (*(s16 *) (param_1 + 6) + 1);
    if (*(s16 *) (*(u8 **) data_02154c70 + 108) != 2) {
        return;
    }
    if (*(s16 *) (param_1 + 6) < 60) {
        return;
    }
    uVar3 = func_020ca9f0();
    func_020caaac(*(s32 *) (*(u8 **) data_02153700 + *(s16 *) (param_1 + 10) * 4 + 0x24), (s32) uVar3);
    func_020cc36c(0, 0, 0);
    func_020cc36c(1, (u16) uVar3, 0);
    func_020cb090();
    func_020cb414(0, 0, 0, 1);
    func_020cb414(1, (u16) uVar3, 0, 1);
    func_020cb070();
    *(u16 *) (param_1 + 4)   = 1;
    *(u32 *) (param_1 + 0xc) = 1;
    func_020cd3ac();
}
