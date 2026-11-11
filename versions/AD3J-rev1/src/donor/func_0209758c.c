/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020af770 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020af770.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02156080;
extern s32 func_0210beb4(u32 p);
extern void func_020c99e4(s16 *p, s32 v);
s32 func_0209758c(u8 *param_1) {
    s16 local[2];
    s32 iVar1;
    s32 iVar2;
    u8 *b;
    s16 t;

    iVar1 = *(s16 *) (param_1 + 0x7a);
    iVar2 = 0;
    if (iVar1 < 0) {
        goto zero;
    }
    b = data_02156080;
    if (*(s16 *) (b + 0x20) > iVar1) {
        goto body;
    }
zero:
    iVar1 = 0;
    goto check;
body:
    iVar1 = *(u32 *) (b + iVar1 * 4 + 4);
check:
    if (iVar1 != 0) {
        iVar2    = func_0210beb4(iVar1);
        iVar2    = (iVar2 << 4) >> 16;
        t        = *(s16 *) (param_1 + 0x7c);
        local[0] = 0;
        local[1] = t;
        func_020c99e4(local, iVar2);
    }
    return iVar2;
}
