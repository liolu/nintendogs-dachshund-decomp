/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02099530 from projets/nintendogs-chihuahua-friends/src/donor/func_02099530.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153700;
extern u32 data_02154c9c;
extern u32 data_0213bc18[];
extern s32 func_020af4c0(void);
extern void func_02003c2c(s32 a);
extern s32 func_02003a08(void);
extern void func_02003d84(s32 a);
extern void func_02092f78(s32 a);
extern s32 func_020ae8b8(void);
extern void func_02084a14(s32 a, s32 b, s32 *c);
extern void func_020af384(s32 a);
extern void func_020edc84(s32 a, s32 b);
typedef struct {
    u32 w[3];
} T3;
void func_02099530(u8 *param_1) {
    u32 st;
    s32 iVar2;
    s32 iStack_18[3];
    s32 v;
    s32 uu;

    st = *(u16 *) (param_1 + 4);
    if ((s32) st > 0) {
        goto UP;
    }
    if (st == 0) {
        *(u16 *) (param_1 + 4) = 0x600;
        *(u16 *) (param_1 + 6) = 0;
    }
    return;
UP: {
    if ((s32) st > 0x602) {
        return;
    }
    if ((s32) st < 0x600) {
        return;
    }
    if (st == 0x600) {
        goto S600;
    }
    if (st == 0x601) {
        goto S601;
    }
    if (st == 0x602) {
        goto S602;
    }
    return;
S600: {
    iVar2 = func_020af4c0();
    if (iVar2 == 0) {
        return;
    }
    *(u16 *) (param_1 + 4) = 0x601;
    *(u16 *) (param_1 + 6) = 0;
    func_02003c2c(0x1e);
    return;
}
S601: {
    iVar2 = func_02003a08();
    if (iVar2 != 0) {
        *(s16 *) (param_1 + 6) = *(s16 *) (param_1 + 6) + 1;
    }
    if (*(s16 *) (param_1 + 6) < 0x1e) {
        return;
    }
    *(u16 *) (param_1 + 4) = 0x602;
    *(u16 *) (param_1 + 6) = 0;
    func_02003d84(0xf);
    func_02092f78(*(s16 *) ((*(u8 **) ((*(u8 **) &data_02153700) + 0x34)) + 4));
    v = *(s16 *) ((*(u8 **) ((*(u8 **) &data_02153700) + 0x34)) + 4);
    if (v >= 1 && v <= 3) {
        *(T3 *) iStack_18 = *(T3 *) data_0213bc18;
        iVar2             = (*(s32 **) &data_02154c9c != 0) ? **(s32 **) &data_02154c9c : 0;
        func_02084a14(iVar2, 5, iStack_18);
        func_02084a14(iVar2, 6, iStack_18);
        func_02084a14(iVar2, 7, iStack_18);
    }
    func_020af384((s16) (*(s16 *) ((*(u8 **) ((*(u8 **) &data_02153700) + 0x34)) + 4) - 1));
    v  = *(s16 *) ((*(u8 **) ((*(u8 **) &data_02153700) + 0x34)) + 4);
    uu = 7;
    if (v >= 1) {
        if (v <= 3) {
            uu = 6;
        }
    }
    func_020edc84(uu, 0x7f);
    return;
}
S602: {
    iVar2 = func_020ae8b8();
    if (iVar2 != 0) {
        *(u16 *) (param_1 + 4)   = 1;
        *(s32 *) (param_1 + 0xc) = 1;
    }
}
    return;
}
}
