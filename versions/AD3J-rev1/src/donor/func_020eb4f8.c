/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eb500 from projets/nintendogs-chihuahua-friends/src/donor/func_020eb500.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct Handle {
    void *obj;
} Handle;
typedef struct Mgr {
    s32 count;
    u16 f4;
    u16 f6;
    u8 pad8[0x10];
    Handle h[3];
    u16 f24;
    u16 f26;
} Mgr;
typedef struct G74 {
    u8 pad[0x2c];
    s32 f2c;
} G74;
typedef struct G198 {
    u8 pad[0x40];
    s32 f40;
} G198;
typedef struct G148 {
    s16 f0;
    s16 f2;
    s16 f4;
    s16 f6;
    u8 pad8[8];
    u32 f10;
    u8 pad14[0x10];
    u32 f24;
    u32 f28;
    u32 f2c;
} G148;
extern void func_02072320(Handle *h, s32 a);
extern void func_020edab0(s32 a);
extern void func_020f1eb4(void);
extern void func_020e9850(void);
extern void func_020ee6f8(s32 a, s32 b);
extern void func_020f18f8(void);
extern void func_020ea5cc(Mgr *m);
extern G74 data_02154cb8;
extern G198 data_02154dd8;
extern G148 data_02154d88;
void func_020eb4f8(Mgr *m) {
    G148 *g = &data_02154d88;
    s16 i;

    for (i = 0; i < m->count; i++) {
        u16 bit   = (u16) (1 << i);
        Handle *h = &m->h[i];
        if (h != ((void *) 0)) {
            func_02072320(h, 0);
            m->f6 &= ~bit;
            m->f4 &= ~bit;
            m->f26 &= ~bit;
        }
    }
    func_020edab0(0);
    func_020f1eb4();
    if (data_02154cb8.f2c != 0) {
        func_020e9850();
    } else if (data_02154dd8.f40 == 0) {
        g->f0 = -1;
    } else {
        func_020ee6f8(65, 90);
    }
    g->f10           = 0;
    g->f24           = 0;
    g->f28           = 0;
    g->f2c           = 0;
    data_02154d88.f6 = -1;
    func_020f18f8();
    func_020ea5cc(m);
}
