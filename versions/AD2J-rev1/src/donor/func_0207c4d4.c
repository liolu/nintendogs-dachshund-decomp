/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02072aec from projets/children-of-mana/src/auto/func_02072aec.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef short s16;
typedef signed long long s64 __attribute__((aligned(4)));
typedef unsigned long long u64 __attribute__((aligned(4)));
typedef int BOOL;
typedef struct GeBuf4 {
    u32 cmd;
    s32 w[18];
} GeBuf4;
extern void func_01ffe490(u32 cmd, void *args, u32 n);
extern void FX_DivAsync(s32 num, s32 den);
extern s32 FX_GetDivResult(void);
extern void (*data_0213b598[8])(s32 *, u32 *);
static inline s32 FxMul(s32 a, s32 b) {
    return (s32) (((long long) a * b) >> 12);
}
typedef struct TexSrt {
    u8 pad[0x18];
    s32 sx;
    s32 sy;
    s16 sn;
    s16 cs;
    s32 tx;
    s32 ty;
    u16 w;
    u16 h;
} TexSrt;
extern void texmtxCalc_flag___xsi(s32 *m, TexSrt *t);
extern void texmtxCalc_flagS___xsi(s32 *m, TexSrt *t);
extern void texmtxCalc_flagR___xsi(s32 *m, TexSrt *t);
extern void texmtxCalc_flagRS___xsi(s32 *m, TexSrt *t);
extern void texmtxCalc_flagT___xsi(s32 *o, u8 *s);
extern void texmtxCalc_flagTS___xsi(s32 *o, u8 *s);
extern void texmtxCalc_flagTR___xsi(s32 *o, u8 *s);
extern void texmtxCalc_flagTRS___xsi(s32 *o);
void func_0207c4d4(u32 *a) {
    GeBuf4 s;
    if (a[0] & 8) {
        s.cmd = 0x00101610;
    } else {
        s.cmd = 0x00101810;
    }
    s.w[0]  = 3;
    s.w[17] = 2;
    s.w[16] = 0x1000;
    s.w[15] = 0;
    s.w[12] = 0;
    s.w[11] = 0;
    s.w[10] = 0;
    s.w[9]  = 0;
    s.w[8]  = 0;
    s.w[7]  = 0;
    s.w[4]  = 0;
    s.w[3]  = 0;
    if (a[0] & 1) {
        a[7] = 0x1000;
        a[6] = a[7];
    }
    if (a[0] & 2) {
        *(u16 *) ((u8 *) a + 34) = 0x1000;
        *(u16 *) ((u8 *) a + 32) = 0;
    }
    if (a[0] & 4) {
        a[10] = 0;
        a[9]  = a[10];
    }
    data_0213b598[a[0] & 7](&s.w[1], a);
    if (a[12] != 0x1000) {
        s.w[1]  = FxMul(a[12], s.w[1]);
        s.w[2]  = FxMul(a[12], s.w[2]);
        s.w[13] = FxMul(a[12], s.w[13]);
    }
    if (a[13] != 0x1000) {
        s.w[5]  = FxMul(a[13], s.w[5]);
        s.w[6]  = FxMul(a[13], s.w[6]);
        s.w[14] = FxMul(a[13], s.w[14]);
    }
    func_01ffe490(s.cmd, (u32 *) &s + 1, 18);
}
extern void texmtxCalc_flag___xsi();
extern void texmtxCalc_flagS___xsi();
extern void texmtxCalc_flagR___xsi();
extern void texmtxCalc_flagRS___xsi();
extern void texmtxCalc_flagT___xsi();
extern void texmtxCalc_flagTS___xsi();
extern void texmtxCalc_flagTR___xsi();
extern void texmtxCalc_flagTRS___xsi();
extern void (*data_0213b598[8])(s32 *, u32 *);
