/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02117060 from projets/nintendogs-chihuahua-friends/src/donor/func_02117060.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern void func_02069634(u8 *a, u8 *b, s32 *c);
extern s32 func_02069430(s32 *v);
extern s32 func_0206902c(s32 v);
extern s32 func_02069878(s32 a, s32 b);
void func_02117060(u8 *param_1, u8 *param_2, s32 *param_3, s16 *param_4, s16 *param_5) {
    s32 v[3];
    s32 iVar4;
    s16 sVar3;

    func_02069634(param_1, param_2, v);
    iVar4    = func_02069430(v);
    *param_3 = iVar4;
    iVar4 = func_0206902c(((s32) (((s64) (v[0]) * (v[0]) + 0x800) >> 12)) + ((s32) (((s64) (v[2]) * (v[2]) + 0x800) >> 12)));
    sVar3 = (s16) func_02069878(v[1], iVar4);
    *param_4 = sVar3;
    sVar3    = (s16) func_02069878(v[0], v[2]);
    *param_5 = sVar3;
}
