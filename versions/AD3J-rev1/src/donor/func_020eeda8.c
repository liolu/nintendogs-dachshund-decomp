/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020eedb0 from projets/nintendogs-chihuahua-friends/src/donor/func_020eedb0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u8 pad0[0x5c];
    s32 a[16];
    u32 b[16];
    u16 c[16];
    u16 flags;
} Glob;
extern Glob data_02154dd8;
extern void func_02072174(s32 *, u32, s32);
extern u32 _s32_div_f(s32, u32);
void func_020eeda8(s32 *p1, u32 mask, s32 p3, u32 p4) {
    Glob *g;
    s16 i;
    u32 m;
    s32 sh;
    s32 cur;
    u32 z;

    g = &data_02154dd8;
    if (p4 == 0) {
        func_02072174(p1, mask, p3);
        return;
    }
    sh = p3 << 12;
    i  = 0;
    z  = 0;
    do {
        m   = (u16) (1u << i);
        cur = g->a[i] >> 12;
        if (mask & m) {
            if (cur == p3) {
                func_02072174(p1, m, p3);
                g->a[i] = sh;
                g->flags &= ~m;
                g->b[i] = z;
                func_02072174(p1, m, p3);
            } else {
                g->flags |= m;
                g->b[i] = _s32_div_f((p3 - cur) * 0x1000, p4);
                g->c[i] = p3;
            }
        }
        i++;
    } while (i < 16);
}
