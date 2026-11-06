/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210e524 from projets/nintendogs-chihuahua-friends/src/donor/func_0210e524.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s32 w[3];
} T12;
extern void func_02044644(s32 a);
void func_0210e524(u8 *param_1) {
    s32 iVar2;
    s32 iVar3;
    s32 bVar1;
    s32 iVar5;
    s32 v[3];
    int iVar4;
    int lim;
    func_02044644(*(s16 *) (156 + param_1));
    *(T12 *) v = *(T12 *) (*(u8 **) (0x214 + param_1) + 192);
    if (v[0] > 8192) {
        bVar1 = 1;
        goto test;
    }
    if (v[0] < -8192) {
        bVar1 = 1;
        goto test;
    }
    if (8192 < v[1]) {
        bVar1 = 1;
        goto test;
    }
    if (v[1] < -8192) {
        bVar1 = 1;
        goto test;
    }
    if (8192 < v[2]) {
        bVar1 = 1;
        goto test;
    }
    bVar1 = v[2] < -8192;
test:
    if (0 == bVar1) {
        iVar4 = v[1];
        if (0 >= iVar4) {
            iVar4 = -iVar4;
        }
        iVar3 = v[0];
        if (0 >= iVar3) {
            iVar3 = -iVar3;
        }
        iVar2 = v[2];
        if (0 >= iVar2) {
            iVar2 = -iVar2;
        }
        iVar5 = *(s32 *) (0xa8 + param_1) + ((iVar3 + iVar4 + iVar2) << ((*(s16 *) (param_1 + 144) == 3) + 6));
        *(s32 *) (param_1 + 0xa8) = iVar5;
    }
    *(s32 *) (0xa8 + param_1) = *(s32 *) (param_1 + 0xa8) - 0xa000;
    lim                       = 0x07530000;
    if (lim < *(s32 *) (0xa8 + param_1)) {
        *(s32 *) (0xa8 + param_1) = lim;
    }
    if (*(s32 *) (param_1 + 0xa8) < 0x3e8000) {
        *(s32 *) (0xa8 + param_1) = 0x3e8000;
    }
}
