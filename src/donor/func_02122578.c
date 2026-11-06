/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02122578 from projets/nintendogs-chihuahua-friends/src/donor/func_02122578.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed int s32;
typedef signed long long s64;
extern s32 func_02069430(s32 *p);
extern s32 func_02069098(s32 a, s32 b);
void func_02122578(s32 *param_1, s32 param_2) {
    s32 iVar2;

    iVar2 = func_02069430(param_1);
    if (param_2 < iVar2) {
        iVar2      = func_02069098(param_2, iVar2);
        param_1[0] = (s32) (((s64) param_1[0] * (s64) iVar2 + 0x800) >> 12);
        param_1[1] = (s32) (((s64) param_1[1] * (s64) iVar2 + 0x800) >> 12);
        param_1[2] = (s32) (((s64) param_1[2] * (s64) iVar2 + 0x800) >> 12);
    }
}
