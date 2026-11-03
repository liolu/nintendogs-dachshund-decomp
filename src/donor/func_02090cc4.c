/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8d80 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a8d80.c (license: none), reused by
 * tools/donor_match.py */
typedef signed short s16;
typedef signed int s32;
extern void func_0208cf74(void);
extern void func_0208ffb4(void *p, s32 v);
extern void func_02002f5c(void *p, void *f);
extern void func_02002dfc(void *p, void *q);
extern void func_0208ff6c(s32 a, s32 b, s32 c);
extern void func_02090034(void *p, s32 a, s32 b);
extern void func_0208ff00(s32 a, s32 b, s32 c, s32 d);
s32 func_02090cc4(void) {
    s32 stk[26];
    s32 iVar1;
    s32 iVar2;

    iVar2 = -1;
    func_0208ffb4(&stk[7], 3);
    func_02002f5c(&stk[0], (void *) func_0208cf74);
    func_02002dfc(&stk[0], &stk[7]);
    iVar1 = (s32) (((s16 *) (stk))[17]);
    if (iVar1 >= 0) {
        iVar2 = iVar1;
        func_0208ff6c(3, 2, (((s16 *) (stk))[18]));
        func_02002f5c(&stk[0], (void *) func_0208cf74);
        func_02002dfc(&stk[0], 0);
        func_02090034(&stk[10], (((s16 *) (stk))[17]), (((s16 *) (stk))[18]));
        func_02002f5c(&stk[0], (void *) func_0208cf74);
        func_02002dfc(&stk[0], &stk[10]);
        func_0208ff00((((s16 *) (stk))[17]), 2, (((s16 *) (stk))[18]), 3);
        func_02002f5c(&stk[0], (void *) func_0208cf74);
        func_02002dfc(&stk[0], &stk[10]);
    }
    return iVar2;
}
