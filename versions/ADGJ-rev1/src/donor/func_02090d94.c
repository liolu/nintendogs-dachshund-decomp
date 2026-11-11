/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090d94 from projets/nintendogs-chihuahua-friends/src/donor/func_02090d94.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_0208cf74(void);
extern void func_0208ffb4(u32 *p, s32 a);
extern void func_02002f5c(u32 *p, void *f);
extern void func_02002dfc(u32 *p, void *q);
extern void func_0208ff6c(s32 a, s32 b, s32 c);
extern void func_02090154(u32 *p, s32 a, s32 b);
extern void func_0208ff00(s32 a, s32 b, s32 c, s32 d);
typedef struct {
    u32 a70[7];
    u32 s54;
    s16 pad32;
    s16 s4e;
    s16 s4c;
    u32 a48[16];
} Frame;
s32 func_02090d94(void) {
    Frame f;
    s32 iVar1;
    s32 iVar2;

    iVar2 = -1;
    func_0208ffb4(&f.s54, 2);
    func_02002f5c(f.a70, (void *) func_0208cf74);
    func_02002dfc(f.a70, &f.s54);
    iVar1 = f.s4e;
    if (iVar1 >= 0) {
        iVar2 = iVar1;
        func_0208ff6c(2, 1, f.s4c);
        func_02002f5c(f.a70, (void *) func_0208cf74);
        func_02002dfc(f.a70, ((void *) 0));
        func_02090154(f.a48, f.s4e, f.s4c);
        func_02002f5c(f.a70, (void *) func_0208cf74);
        func_02002dfc(f.a70, f.a48);
        func_0208ff00(f.s4e, 1, f.s4c, 2);
        func_02002f5c(f.a70, (void *) func_0208cf74);
        func_02002dfc(f.a70, f.a48);
    }
    return iVar2;
}
