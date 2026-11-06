/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020995d4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020995d4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
typedef struct {
    u16 *buf;
    u8 pad[0xc];
    u32 size;
} Plane;
typedef struct {
    u16 screenWidth;
    u16 screenHeight;
    u16 colorMode;
    u16 screenFormat;
    u32 szByte;
    u32 rawData[1];
} NNSG2dScreenData;
typedef struct {
    u32 fmt;
    BOOL bExtendedPlt;
    u32 szByte;
    void *pRawData;
} NNSG2dPaletteData;
typedef struct {
    u32 x00;
    NNSG2dScreenData *scr[5];
    NNSG2dPaletteData *pltt;
    u16 colors[32];
    Plane *plane;
    Plane *planes[2];
    Plane *plane2;
    u16 h6c[7];
    u16 h7a;
    s32 w7c;
    s32 w80;
    s32 w84;
    s32 w88;
    s32 w8c;
    u16 h90;
    u16 h92;
    s16 h94;
    s16 h96;
    u16 h98;
    s16 h9a;
    s16 h9c;
    u16 h9e;
    s32 wa0;
    s32 wa4;
    s32 wa8;
    s32 wac;
} Scene;
extern u32 data_02144150;
extern u32 data_02144154;
extern char data_02144200[];
extern char data_0214421c[];
extern char data_02144224[];
extern char data_0214423c[];
extern char data_02144244[];
extern char *data_0214416c[];
extern u8 data_0212d570[];
extern Scene *data_02154c70;
extern void *func_02003844(void *heap, u32 size);
extern void func_020c234c(void *heap, u32 a, u32 b);
extern int func_0205e950(char *buf, u32 n, const char *fmt, ...);
extern void *func_0207e718(const char *path);
extern void func_02074d7c(void *res, Scene *s);
extern NNSG2dPaletteData *func_02006b04(void *res);
extern void func_0206dfd4(const void *src, void *dst, u32 size);
extern void func_02074e3c(void *res, NNSG2dScreenData **out);
extern Plane *func_02007380(void *heap, u32 w, u32 h, u32 c);
extern void func_0206dfbc(u16 data, void *dest, u32 size);
static inline void MI_CpuCopy16(const void *src, void *dest, u32 size) {
    func_0206dfd4(src, dest, size);
}
static inline void FillPlane(Plane *p, u16 data) {
    func_0206dfbc(*(u16 *) &data, p->buf, p->size);
}
void func_020cedf0(void *heap) {
    char path1[64];
    char path2[64];
    char path3[64];
    Scene *s;
    void *res1;
    void *res2;
    s16 i;

    s = func_02003844(heap, sizeof(Scene));
    func_020c234c(heap, data_02144150, data_02144154);
    func_0205e950(path1, 64, data_0214421c, data_02144150, data_02144200);
    res1 = func_0207e718(path1);
    func_0205e950(path2, 64, data_0214423c, data_02144150, data_02144224);
    res2 = func_0207e718(path2);
    func_02074d7c(res1, s);
    s->pltt = func_02006b04(res2);
    MI_CpuCopy16((u8 *) s->pltt->pRawData + 0x1c0, s->colors, 64);

    for (i = 0; i < 5; i++) {
        func_0205e950(path3, 64, data_02144244, data_02144150, data_0214416c[i]);
        func_02074e3c(func_0207e718(path3), &s->scr[i]);
        if (i == 4) {
            NNSG2dScreenData *scr = s->scr[i];
            u32 k;
            for (k = 0; k < scr->szByte / 2; k++) {
                ((u16 *) scr->rawData)[k] += 192;
            }
        }
    }

    {
        u16 *dst = (u16 *) s->scr[0]->rawData;
        s32 col;
        u16 v = 0;
        s32 row;
        for (row = 0; row < 10; row++) {
            for (col = 0; col < 18; col++) {
                *(dst + (row + 5) * 32 + col + 7) = v | 0xe000;
                v++;
            }
        }
    }

    {
        Plane *p = func_02007380(heap, 18, 10, 0);
        FillPlane(p, 0xffff);
        s->plane = p;
    }
    {
        s16 j;
        for (j = 0; j < 2; j++) {
            u8 c     = data_0212d570[j];
            Plane *p = func_02007380(heap, 8, 2, 0);
            FillPlane(p, (u16) ((c << 12) | (c << 8) | (c << 4) | c));
            s->planes[j] = p;
        }
    }
    {
        Plane *p = func_02007380(heap, 16, 2, 0);
        FillPlane(p, (u16) ((data_0212d570[0] << 12) | (data_0212d570[0] << 8) | (data_0212d570[0] << 4) | data_0212d570[0]));
        s->plane2 = p;
    }

    s->h6c[0]     = 0;
    s->h6c[1]     = 0;
    s->h6c[2]     = 0;
    s->h6c[3]     = 0;
    s->h6c[4]     = 0;
    s->h6c[5]     = 0;
    s->h6c[6]     = 0;
    s->h7a        = 0xffff;
    s->w7c        = -1;
    s->w80        = -1;
    s->w84        = 0;
    s->w88        = 0;
    s->w8c        = 0;
    s->h90        = 0;
    s->h92        = 0;
    s->h94        = -1;
    s->h96        = -1;
    s->h98        = 0;
    s->h9a        = -1;
    s->h9c        = -1;
    s->wa0        = 0;
    s->wa4        = 0;
    s->wa8        = 0;
    s->wac        = 0;
    data_02154c70 = s;
}
