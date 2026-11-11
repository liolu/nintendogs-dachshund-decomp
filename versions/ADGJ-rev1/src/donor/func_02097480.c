/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02097480 from projets/nintendogs-chihuahua-friends/src/donor/func_02097480.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02156080[];
extern s32 func_02106e90(s32 a);
extern s32 func_0210bebc(s32 a);
extern void func_020c99e8(s16 *p, s32 v);
extern void func_02106990(s32 a);
void func_02097480(u8 *param_1) {
    s32 iVar1;
    s16 lc[4];
    s16 t;

    if (*(s16 *) (param_1 + 0x7c) == -1) {
        goto dflt;
    }
    iVar1                     = func_02106e90(*(s16 *) (param_1 + 0x7c));
    *(s16 *) (param_1 + 0x7e) = -1;
    switch (iVar1) {
        case 2:
        case 7:
            goto c7;
        case 0:
        case 1:
            goto c01;
        case 15:
            goto c7;
        default:
            goto dflt;
    }
c7:
    t     = *(s16 *) (param_1 + 0x7c);
    lc[0] = 0;
    lc[1] = t;
    func_020c99e8(lc, 1);
    goto dflt;
c01:
    iVar1 = *(s16 *) (param_1 + 0x7a);
    if (iVar1 < 0 || *(s16 *) (*(u8 **) data_02156080 + 0x20) <= iVar1) {
        iVar1 = 0;
    } else {
        iVar1 = *(s32 *) (*(u8 **) data_02156080 + iVar1 * 4 + 4);
    }
    if (iVar1 != 0) {
        iVar1 = func_0210bebc(iVar1);
        t     = *(s16 *) (param_1 + 0x7c);
        lc[2] = 0;
        lc[3] = t;
        func_020c99e8(&lc[2], (iVar1 << 4) >> 16);
    }
dflt:
    *(s16 *) (param_1 + 0x7c) = -1;
    func_02106990(0);
    *(s16 *) (param_1 + 0x76) = 0;
    *(s16 *) (param_1 + 0x78) = 0;
}
