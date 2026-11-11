/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211c258 from projets/nintendogs-chihuahua-friends/src/donor/func_0211c258.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u32 data_021245cc[2];
extern s32 func_01ffda04(s32 a);
extern s32 func_02111ed8(s32 a, s32 *b, u32 c, s32 *d);
extern void func_02069668(s32 *a, s32 *b, s32 *c);
u32 func_0211c258(s32 *param_1, s32 param_2, u32 param_3) {
    s32 iStack[3];
    u32 flag;
    s32 iVar2;
    s32 iVar3;
    s32 i;
    s32 off;
    s64 lVar1;
    s64 K;

    flag  = 0;
    iVar2 = func_01ffda04(param_2);
    if (iVar2 == 0) {
        return 0;
    }
    i = 0;
    if (0 >= param_1[0]) {
        goto fin;
    }
    off = 0;
    K   = *(s64 *) data_021245cc;
    do {
        iStack[0] = 0;
        iStack[1] = 0;
        iStack[2] = 0;
        iVar3     = func_02111ed8(iVar2, (s32 *) (param_1[1] + off), param_3, iStack);
        if (iVar3 != 0) {
            lVar1 = (s64) iStack[0] * iStack[0] + (s64) iStack[1] * iStack[1] + (s64) iStack[2] * iStack[2];
            if (lVar1 >= K) {
                func_02069668((s32 *) (param_1[1] + off), iStack, (s32 *) (param_1[1] + off));
                *(s32 *) (param_1[2] + off)     = *(s32 *) (param_1[2] + off) + (iStack[0] >> 3);
                *(s32 *) (param_1[2] + off + 8) = *(s32 *) (param_1[2] + off + 8) + (iStack[2] >> 3);
            }
            flag = 1;
        }
        i   = i + 1;
        off = off + 12;
    } while (i < param_1[0]);
fin:
    return flag;
}
