/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210fe50 from projets/nintendogs-shiba-friends/src/donor/func_0210fe50.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
typedef s32 fx32;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 m[4][3];
} MtxFx43;
typedef struct {
    u8 pad00[0x8a];
    s16 f8a;
    u8 pad8c[4];
    s16 f90;
    u8 pad92[6];
    s16 f98;
    u8 pad9a[8];
    u16 fa2;
    u8 pada4[0x18];
    s32 fbc;
    fx32 fc0;
    u8 padc4[0x16c - 0xc4];
    u32 f16c;
} Obj;
extern void *func_01ffda04(s32 i);
extern BOOL func_02034c58(void *o);
extern BOOL func_02111ed8(void *o, s32 *b, fx32 r, VecFx32 *v);
extern BOOL func_020343a4(void *o);
extern BOOL func_02111d2c(void *o, s32 *b, fx32 r, VecFx32 *v);
extern BOOL func_021100d0(Obj *p, s32 a, s32 b, VecFx32 *v, MtxFx43 *m);
extern BOOL func_02111b3c(s32 *b, fx32 r, s32 c, VecFx32 *v, VecFx32 *w);
void func_0210fe58(Obj *p, fx32 r, s32 a, s32 b, s32 c, void (*onAny)(Obj *, VecFx32 *), void (*onMove)(Obj *, VecFx32 *),
                   void (*onMtx)(Obj *, VecFx32 *, MtxFx43 *), void (*onEnd)(Obj *, VecFx32 *), void (*onEach)(Obj *, s32)) {
    VecFx32 v0 = {0, 0, 0};
    s16 i;
    BOOL hit;
    void *o;

    hit = 0;
    if (p->f90 != 0 && p->f90 != 2 && p->f90 != 6 && p->f90 != 8) {
        for (i = 0; i < 3; i++) {
            s16 skip;
            o    = func_01ffda04(i);
            skip = p->f98;
            if (o != ((void *) 0) && i != skip && !func_02034c58(o)) {
                if (func_02111ed8(o, &p->fbc, r, &v0)) {
                    p->f16c |= 1 << (i + 3);
                    hit = 1;
                }
                if (func_020343a4(o) && p->fa2 == 0 && (p->f16c & 7) == 0 && func_02111d2c(o, &p->fbc, r, &v0)) {
                    p->f16c |= 1 << i;
                    onEach(p, i);
                    hit = 1;
                }
                if (p->f90 == 4 || p->f8a == 4) {
                    v0.x = 0;
                    v0.y = 0;
                    v0.z = 0;
                }
            }
        }
        if (hit) {
            onAny(p, &v0);
        }
    }
    if (p->f90 == 1 && p->f8a != 4) {
        VecFx32 v1 = {0, 0, 0};
        BOOL move;
        if (onMtx != ((void *) 0)) {
            MtxFx43 m;
            if (func_021100d0(p, a, b, &v1, &m)) {
                onMtx(p, &v1, &m);
            }
        } else {
            if (p->fc0 < r) {
                v1.y += r - p->fc0;
                move = 1;
            } else {
                move = 0;
            }
            if (move) {
                onMove(p, &v1);
            }
        }
    }
    if (p->f90 == 1) {
        VecFx32 v3 = {0, 0, 0};
        if (func_02111b3c(&p->fbc, r, c, &v3, &v0)) {
            onEnd(p, &v3);
        }
    }
}
