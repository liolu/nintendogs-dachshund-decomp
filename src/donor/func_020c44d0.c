/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208eb68 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208eb68.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s16 data_02124ae0[];
extern void func_02069634(void *a, void *b, void *c);
extern void func_020069bc(void *a, void *b);
extern void func_02069504(void *a, void *b, void *c);
extern void func_020c4648(int p);
void func_020c44d0(int param_1) {
    u32 uVar5;
    s32 a1;
    s32 a2;
    s32 v;

    a1    = (*(u16 *) (param_1 + 0x80) >> 4) * 2;
    a2    = (*(u16 *) (param_1 + 0x82) >> 4) * 2;
    v     = *(s32 *) (param_1 + 0x7c);
    uVar5 = ((u32) ((s32) (((s64) (s32) (v) * (s64) (s32) (data_02124ae0[a1 + 1]) + 0x800) >> 12)));
    *(u32 *) (param_1 + 0x30) =
        *(u32 *) (param_1 + 0x3c) + ((u32) ((s32) (((s64) (s32) (uVar5) * (s64) (s32) (data_02124ae0[a2]) + 0x800) >> 12)));
    *(u32 *) (param_1 + 0x34) =
        *(u32 *) (param_1 + 0x40) + ((u32) ((s32) (((s64) (s32) (v) * (s64) (s32) (data_02124ae0[a1]) + 0x800) >> 12)));
    *(u32 *) (param_1 + 0x38) = *(u32 *) (param_1 + 0x44) +
                                ((u32) ((s32) (((s64) (s32) (uVar5) * (s64) (s32) (data_02124ae0[a2 + 1]) + 0x800) >> 12)));
    func_02069634((void *) (param_1 + 0x3c), (void *) (param_1 + 0x30), (void *) (param_1 + 0x48));
    func_020069bc((void *) (param_1 + 0x48), (void *) (param_1 + 0x48));
    func_02069504((void *) (param_1 + 0x54), (void *) (param_1 + 0x48), (void *) (param_1 + 0x60));
    func_020069bc((void *) (param_1 + 0x60), (void *) (param_1 + 0x60));
    func_020c4648(param_1);
}
