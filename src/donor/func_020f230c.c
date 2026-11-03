/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a3600 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a3600.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u32 a;
    u16 h4;
    u16 pad6;
    u32 x8;
    u32 c[5];
    u32 d[5];
    u32 x34;
    u32 x38;
    u16 h3c;
    u16 pad3e;
    u32 x40;
} S;
extern S data_02155000;
extern u8 data_02155008[];
extern void func_02072294(void *);
void func_020f230c(void) {
    S *s = &data_02155000;
    s16 i;

    s->h4  = 0;
    s->x34 = 0;
    s->x38 = 0;
    func_02072294(data_02155008);
    s->a   = 0;
    s->h3c = 0;
    s->x40 = 0;
    for (i = 0; i < 5; i++) {
        s->c[i] = 40;
        s->d[i] = 0;
    }
}
