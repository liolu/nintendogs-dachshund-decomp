/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020861b4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020861b4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u8 w;
    u8 h;
} GlyphSize;
typedef struct {
    u16 *data;
    u8 pad[0x10];
    s16 stride;
    GlyphSize size;
} Font;
typedef struct {
    u32 pad0;
    u16 width;
    u16 height;
} Canvas;
static inline void GetCanvasSize(const Canvas *cv, s32 *w, s32 *h) {
    *w = cv->width;
    *h = cv->height;
}
extern u32 *func_02089aec(Canvas *cv, s32 x, s32 y);
void func_02089958(Font *font, Canvas *cv, s32 x, s32 y, u16 code, u32 color) {
    s32 cvw;
    s32 cvh;
    GlyphSize sz;
    u16 bits;
    u16 cnt;
    u16 *src;
    s32 lineWords;
    u32 *line;
    s32 ix;
    u32 *dst;
    u32 word;
    s32 iy;

    GetCanvasSize(cv, &cvw, &cvh);
    lineWords = cvw * 8 / 8;
    sz        = font->size;
    src       = font->data + font->stride * code;
    bits      = 0;
    cnt       = 0;
    dst = line = func_02089aec(cv, x, y);
    word       = *line;
    for (iy = y; iy < y + sz.h; iy++) {
        if (iy >= cvh) {
            return;
        }
        for (ix = x; ix < x + sz.w; ix++) {
            if (cnt == 0) {
                bits = *src;
            }
            if ((bits & 1) == 0 && ix >= 0 && ix < cvw && iy >= 0) {
                s32 sh = (ix & 7) * 4;
                word   = (word & ~(0xf << sh)) | ((color & 0xf) << sh);
            }
            bits >>= 1;
            cnt++;
            if (cnt > 15) {
                cnt = 0;
                src++;
            }
            if ((ix & 7) == 7) {
                *dst = word;
                dst += 8;
                word = *dst;
            }
        }
        if ((iy & 7) == 7) {
            line = line + lineWords - 7;
        } else {
            line++;
        }
        *dst = word;
        dst  = line;
        word = *dst;
    }
}
