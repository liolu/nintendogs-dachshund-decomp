/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ecca0 from projets/nintendogs-chihuahua-friends/src/donor/func_020ecca0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02154dd8;
extern u32 data_02154de0;
extern void func_02072320(u8 *p, s32 v);
extern void func_0207472c(u8 *p, s32 a, s32 b);
extern void func_02072144(u8 *p, s32 a, s32 b);
extern void func_02072214(u8 *p, s32 a, s32 b);
void func_020ecca0(s32 param_1, s32 param_2) {
    s32 lim;
    u8 *pA;
    u8 *pB;
    s32 iVar4;
    s32 sh;
    s32 iVar3;
    s32 v;

    pA = (u8 *) &data_02154dd8;
    pB = (u8 *) &data_02154de0;
    if (param_2 != 0) {
        if (*(u32 *) pA != 0) {
            func_02072320(pA, 0);
        }
        if (*(u32 *) (pA + 0x4c) == 0) {
            func_0207472c(pB, 48, 8);
            *(u32 *) (pA + 0x4c) = 1;
        }
        lim   = 10000;
        iVar4 = 40;
        iVar3 = 2;
        sh    = 6;
    } else {
        if (*(u32 *) pB == 0) {
            if (param_1 > 0) {
                func_0207472c(pB, 48, 10);
            } else {
                if (param_1 < 0) {
                    func_0207472c(pB, 48, 11);
                }
            }
        }
        lim   = 10000;
        iVar4 = 10;
        iVar3 = 3;
        sh    = 6;
    }
    if (*(u32 *) pB != 0) {
        if (param_1 < 0) {
            param_1 = -param_1;
        }
        if (param_1 > lim) {
            param_1 = lim;
        }
        func_02072144(pB, 0xffff, param_1 >> iVar3);
        v = iVar4 + (param_1 >> sh);
        if (127 < v) {
            v = 127;
        }
        func_02072214(pB, v, 0);
    }
    *(u32 *) (pA + 0x50) = 1;
}
