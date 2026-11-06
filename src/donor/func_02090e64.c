/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090e64 from projets/nintendogs-chihuahua-friends/src/donor/func_02090e64.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 a;
    u16 pad;
    s16 e;
    s16 c;
} S;
extern void func_0208cf74(void);
extern void func_0208ffb4(S *s, u32 b);
extern void func_02002f5c(u32 *a, void (*f)(void));
extern void func_02002dfc(u32 *a, u32 *b);
extern void func_0208ff6c(u32 a, u32 b, s32 c);
extern void func_020901e0(u32 *a, s32 b, s32 c);
extern void func_0208ff00(s32 a, u32 b, s32 c, u32 d);
s32 func_02090e64(void) {
    u32 A[7];
    S s;
    u32 B[16];
    s32 iVar1, iVar2;

    iVar2 = -1;
    func_0208ffb4(&s, 1);
    func_02002f5c(A, func_0208cf74);
    func_02002dfc(A, (u32 *) &s);
    iVar1 = s.e;
    if (iVar1 >= 0) {
        iVar2 = iVar1;
        func_0208ff6c(1, 0, s.c);
        func_02002f5c(A, func_0208cf74);
        func_02002dfc(A, 0);
        func_020901e0(B, s.e, s.c);
        func_02002f5c(A, func_0208cf74);
        func_02002dfc(A, B);
        func_0208ff00(s.e, 0, s.c, 1);
        func_02002f5c(A, func_0208cf74);
        func_02002dfc(A, B);
    }
    return iVar2;
}
