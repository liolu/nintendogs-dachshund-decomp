/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e184c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e184c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    s16 a;
    s8 b;
    s8 c;
} Ent;
extern u32 data_021558d4;
extern u32 data_02147400;
extern u32 data_021558d0;
extern u8 *data_021558a8;
extern u32 data_021558cc;
extern Ent data_021558ac;
extern Ent data_021558d8[];
extern s8 *data_021558b0;
extern void func_020f803c(s16 *a, u8 *b, u32 c, Ent *d);
extern void func_020f7cd4(void);
extern void func_020f7da8(u32 a);
static inline s32 Update(u32 i, u32 n) {
    if (i % n == 0) {
        if (data_021558ac.a == data_021558d8[i / n].a && data_021558ac.b == data_021558d8[i / n].b) {
            return 1;
        }
        data_021558d8[i / n] = data_021558ac;
    }
    return 0;
}
void func_020f98e8(void) {
    s16 v[2];
    u32 n;
    u32 i;

    data_021558d0 = 0;
    while (data_021558d4 < data_02147400) {
        v[0] = *data_021558b0++ << 8;
        i    = data_021558d4;
        v[1] = *data_021558b0++ << 8;
        n    = data_02147400 / 40;
        if (Update(i, n) == 1) {
            break;
        }
        func_020f803c(v, data_021558a8++, 2, &data_021558ac);
        data_021558d4 += 2;
    }
    func_020f7cd4();
    func_020f7da8(8000);
    data_021558cc = 0;
}
