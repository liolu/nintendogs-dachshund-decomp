/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f1930 from projets/nintendogs-shiba-friends/src/donor/func_020f1930.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u16 a;
    s16 b;
} Pair;
typedef struct {
    u8 pad0[0x84];
    u32 x84;
    s16 h88;
    s16 h8a;
    u32 x8c;
    u32 x90;
    u32 x94;
    u32 x98;
} Mgr;
extern Mgr data_02154f64;
extern Pair data_02154f68[16];
void func_020f1938(void) {
    Mgr *m  = &data_02154f64;
    Pair *t = data_02154f68;
    s16 i;

    m->x84 = 0;
    m->h88 = 0;
    m->h8a = 0;
    for (i = 0; i < 16; i++) {
        t[i].a = 0xffff;
        t[i].b = -1;
    }
    m->x8c = 0;
    m->x90 = 0;
    m->x94 = 0;
    m->x98 = 0;
}
