/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8b5c from projets/nintendogs-chihuahua-friends/src/donor/func_020a8b5c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct ObjSize {
    u16 w;
    u16 h;
} ObjSize;
typedef struct Cell {
    u32 attr01;
    u32 attr23;
    u16 f8;
    u16 fa;
} Cell;
typedef struct Sub {
    s32 idx;
    s32 id;
    s32 count;
    s32 total;
    Cell *cells;
    u8 recs[16][16];
    s32 xs[16];
    s32 ys[16];
    u8 pad194[4];
    s32 base;
    s32 charBase;
} Sub;
typedef struct Obj {
    u32 f0;
    u32 f4;
    u32 f8;
    u16 width;
    u16 height;
    u32 vram;
    u32 size;
    Sub sub;
} Obj;
typedef struct TblEntry {
    s32 a;
    s32 id;
} TblEntry;
typedef struct Tbl {
    u8 pad[8];
    TblEntry e[1];
} Tbl;
extern u8 *data_02153744;
extern ObjSize data_0213c228[];
extern u16 func_020894dc(s32 a, s32 b);
extern u8 *func_0208948c(s32 a, s32 b);
extern Cell *func_020894b4(s32 a, s32 b);
extern void func_02089ca0(void *a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_020a8b5c(Obj *obj, s32 p2, Tbl *tbl, s32 idx, u32 p5, s32 p6) {
    s32 count;
    Sub *sub;
    u8 *dims;
    s32 total;
    Sub *s;
    s32 i;
    s32 curX;
    s32 curY;
    u16 cb;
    u32 vram;
    s32 id;
    vram       = *(u32 *) (data_02153744 + 0x7348);
    id         = tbl->e[idx].id;
    sub        = &obj->sub;
    count      = func_020894dc(p2, id);
    dims       = func_0208948c(p2, id);
    sub->cells = func_020894b4(p2, id);
    cb         = sub->cells->f8;
    curY = curX = total = 0;
    obj->f4             = 1;
    obj->f8             = 1;
    obj->vram           = vram;
    obj->f0             = p5;
    sub->id             = id;
    obj->sub.idx        = idx;
    sub->count          = count;
    sub->charBase       = p6 + cb * 128;
    i                   = 0;
    if (count > 0) {
        s = &obj->sub;
        for (; i < count; i++) {
            u16 tiles;
            u32 a;
            s32 k;
            u32 w;
            u32 h;
            a          = sub->cells[i].attr01;
            k          = (a >> 30) + ((a << 16) >> 30) * 4;
            w          = data_0213c228[k].w;
            h          = data_0213c228[k].h;
            sub->xs[i] = curX;
            sub->ys[i] = curY;
            tiles      = (w >> 3) * (h >> 3);
            if (tiles != 0 && tiles <= 64) {
                func_02089ca0((u8 *) s + 20 + i * 16, *(u32 *) (data_02153744 + 0x7348), w, h, 0, 0);
                *(u32 *) (data_02153744 + 0x7348) += tiles * 32;
            }
            curX += w;
            total += tiles;
            (*(s16 *) data_02153744)++;
            if (curX >= dims[0]) {
                curY += h;
                curX = 0;
            }
        }
    }
    sub->total  = total;
    obj->width  = dims[0];
    obj->height = dims[1];
    obj->size   = total << 5;
    sub->base   = p6;
}
