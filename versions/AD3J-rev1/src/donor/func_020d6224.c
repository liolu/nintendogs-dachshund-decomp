/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d9e90 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d9e90.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern void func_02069668(u8 *a, s32 *b, u8 *c);
extern void func_02108218(u8 *p, s32 a);
extern void func_02069504(s32 *a, s32 *b, s32 *c);
extern void func_020069bc(s32 *a, s32 *b);
extern s32 func_02111cb4(u32 a, s32 b);
extern void func_0210fe50(u8 *p, s32 a, s32 *b, s32 *c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020d6574(void);
extern void func_020d6540(void);
extern void func_020d6524(void);
extern void func_020d6518(void);
void func_020d6224(u8 *param_1) {
    s32 *piVar2;
    s32 aA[3];
    s32 aB[3];
    s32 aC[3];
    s32 iVar1;
    s32 t0;
    s32 t1;
    s32 t2;
    s32 u0;
    s32 u1;
    s32 u2;

    piVar2                    = *(s32 **) (param_1 + 0x214);
    *(s32 *) (param_1 + 0xb4) = *(s32 *) (param_1 + 0xb4) + *(s32 *) *piVar2;
    func_02069668(param_1 + 0xbc, (s32 *) (param_1 + 0xb0), param_1 + 0xbc);
    func_02108218(param_1, *(s32 *) (*piVar2 + 0x5c));
    t2    = *(s32 *) (param_1 + 0xd0);
    t1    = *(s32 *) (param_1 + 0xcc);
    t0    = *(s32 *) (param_1 + 0xc8);
    aA[0] = t0;
    aA[1] = t1;
    aA[2] = t2;
    u2    = *(s32 *) (param_1 + 0xdc);
    u1    = *(s32 *) (param_1 + 0xd8);
    u0    = *(s32 *) (param_1 + 0xd4);
    aB[0] = u0;
    aB[1] = u1;
    aB[2] = u2;
    func_02069504(aA, aB, aC);
    func_020069bc(aA, aA);
    func_020069bc(aC, aC);
    func_02069504(aC, aA, aB);
    *(s32 *) (param_1 + 0xc8) = aA[0];
    *(s32 *) (param_1 + 0xcc) = aA[1];
    *(s32 *) (param_1 + 0xd0) = aA[2];
    *(s32 *) (param_1 + 0xd4) = aB[0];
    *(s32 *) (param_1 + 0xd8) = aB[1];
    *(s32 *) (param_1 + 0xdc) = aB[2];
    *(s32 *) (param_1 + 0xe0) = aC[0];
    *(s32 *) (param_1 + 0xe4) = aC[1];
    *(s32 *) (param_1 + 0xe8) = aC[2];
    iVar1                     = func_02111cb4(*(u16 *) (param_1 + 0xa0), *(s32 *) (param_1 + 0xf8));
    func_0210fe50(param_1, *(s32 *) (param_1 + 0xf8), (s32 *) (param_1 + 0xfc), (s32 *) (param_1 + 0x108), iVar1,
                  (u32) func_020d6574, 0, (u32) func_020d6540, (u32) func_020d6524, (u32) func_020d6518);
}
