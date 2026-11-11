/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020037a8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020037a8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern void func_0207da10(s32 a, s32 b, u16 *c);
extern void func_0200390c(void);
typedef struct {
    u16 a;
    u16 b;
    u32 c;
} Loc;
u32 func_02003734(s32 *param_1, u16 param_2) {
    Loc loc;
    loc.a = param_2;
    loc.b = 0;
    loc.c = 0;
    switch (*param_1) {
        case 0x45585048:
            func_0207da10((s32) param_1, (s32) func_0200390c, (u16 *) &loc);
            break;
        case 0x46524d48:
            break;
    }
    return loc.c;
}
