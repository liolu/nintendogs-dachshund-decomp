/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a2a70 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a2a70.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u16 a;
    s16 b;
} Pair;
typedef struct {
    s16 h0;
    s16 h2;
    u8 pad4[0x80];
    s32 x84;
    s16 cnt;
    s16 cnt2;
    u32 x8c;
    u32 x90;
    u32 x94;
    u32 x98;
} Mgr;
extern Mgr data_02154f64;
extern Pair data_02154f68[16];
extern s32 func_020f7170(void);
extern void func_020f1930(void);
void func_020f177c(u16 param_1, s32 param_2) {
    Mgr *m  = &data_02154f64;
    Pair *t = data_02154f68;
    s32 prev;
    s32 cur;
    s32 n;

    prev  = m->h2;
    m->h0 = param_2;
    if (param_2 != prev) {
        if (m->x8c != 0) {
            m->x8c = 0;
            m->h2  = -1;
        }
    }
    if (m->x8c == 0 && func_020f7170() != -11) {
        func_020f1930();
        data_02154f64.x8c = 1;
        data_02154f64.x98 = 0;
    }
    if (m->x8c != 0) {
        cur = m->x84;
        if (cur == 0xffff) {
            func_020f1930();
        } else {
            n = m->cnt;
            if (n < 16) {
                if (n == 0) {
                    t[m->cnt].a = 30;
                    t[m->cnt].b = param_1;
                    m->x84      = 0;
                    m->cnt      = m->cnt + 1;
                    m->x94      = 1;
                } else if (cur < 15) {
                    t[n - 1].a  = cur;
                    t[m->cnt].b = param_1;
                    m->x84      = 0;
                    m->cnt2     = m->cnt2 + 1;
                    if (m->cnt2 > 1) {
                        m->x94 = 0;
                    }
                } else {
                    t[n].a      = cur;
                    t[m->cnt].b = param_1;
                    m->x84      = 0;
                    m->cnt      = m->cnt + 1;
                }
            } else if (n >= 16) {
                m->x84 = 0;
            }
        }
    }
    m->h2 = param_2;
}
