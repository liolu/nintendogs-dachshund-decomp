/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bb67c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bb67c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
extern s32 func_02002dec(void);
extern u32 *func_02002de4(s32 a);
extern void func_02006850(u32 *p, u16 *q);
extern void func_0200684c(u32 *p, s32 a);
extern void func_0200668c(s32 a, void *fn);
extern void func_0200682c(void);
extern void func_02006764(void);
extern void func_020066c0(void);
extern void func_02005da4(u16 *p);
extern u16 *func_020055c8(u32 *p, u16 *q);
extern void func_02005598(u16 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern u64 func_02004274(u16 *p);
extern void func_0200588c(s32 a, s32 b);
extern void func_0212042c(void);
extern void func_020040c8(void);
extern s32 func_021203f8(void);
extern void func_02003f40(void);
extern void func_02003e88(void);
extern void func_0200420c(void);
extern void func_02006830(void);
u32 func_020a32e8(void) {
    s32 bVar1;
    s32 iVar2;
    u32 *piVar3;
    u16 *puVar4;
    u16 small[2];
    u16 arr[17];
    u64 uVar7;

    bVar1    = 1;
    iVar2    = func_02002dec();
    piVar3   = func_02002de4(iVar2);
    small[0] = 0xff;
    small[1] = 0;
    func_02006850(piVar3, small);
    func_0200684c(piVar3, 4);
    func_0200668c(0, func_0200682c);
    func_0200668c(1, func_02006764);
    func_0200668c(2, func_020066c0);
    func_02005da4(arr);
    arr[1] = 1;
    arr[3] = 1;
    arr[4] = 0;
    arr[5] = 0;
    arr[7] = 15;
    arr[8] = 112;
    puVar4 = func_020055c8(piVar3, arr);
    func_02005598(puVar4 + 0x16, 1, 0, 0, 1, 5, 1, 0);
    uVar7 = func_02004274(puVar4);
    func_0200588c((s32) uVar7, (s32) (uVar7 >> 32));
    func_0212042c();
    do {
        func_020040c8();
        if (func_021203f8() != 0) {
            bVar1 = 0;
        }
        func_02003f40();
        func_02003e88();
    } while (bVar1);
    func_0200420c();
    func_02006830();
    return 0;
}
