/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ee700 from projets/nintendogs-chihuahua-friends/src/donor/func_020ee700.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 f0;
    u8 pad4[8];
    u16 fc;
    u8 pad14[10];
    u16 f18;
    u16 f1a;
    u32 f1c;
} Glob;
extern Glob data_02154dd8;
extern void func_02072214(Glob *g, s32 a, s32 b);
u32 func_020ee700(s32 param_1, s32 param_2) {
    Glob *g;
    u16 uVar1;
    u16 uVar3;

    g = &data_02154dd8;
    if (g->f0 != 0) {
        g->fc = (u16) param_1;
        if (g->f1c != 0) {
            uVar3   = g->f1a;
            uVar1   = g->f18;
            g->f18  = 0;
            g->f1c  = 0;
            param_2 = (s32) uVar3 - (s32) uVar1;
        }
        func_02072214(g, param_1, param_2);
        return 1;
    }
    return 0;
}
