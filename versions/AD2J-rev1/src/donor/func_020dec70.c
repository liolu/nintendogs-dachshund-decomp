/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f0fd0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020f0fd0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef s32 fx32;
typedef struct {
    fx32 x, y, z;
} VecFx32;
typedef struct {
    fx32 _00, _01, _02, _10, _11, _12, _20, _21, _22;
} MtxFx33;
typedef struct {
    u8 pad[0x94];
    s16 type;
    u8 pad96[0xc8 - 0x96];
    MtxFx33 mtx;
} Obj;
static inline void VEC_Set(VecFx32 *a, fx32 x, fx32 y, fx32 z) {
    a->x = x;
    a->y = y;
    a->z = z;
}
static inline void MTX_GetRows(const MtxFx33 *m, VecFx32 *a, VecFx32 *b, VecFx32 *c) {
    VEC_Set(a, m->_00, m->_01, m->_02);
    VEC_Set(b, m->_10, m->_11, m->_12);
    VEC_Set(c, m->_20, m->_21, m->_22);
}
static inline void MTX_SetRows(MtxFx33 *m, const VecFx32 *a, const VecFx32 *b, const VecFx32 *c) {
    m->_00 = a->x;
    m->_01 = a->y;
    m->_02 = a->z;
    m->_10 = b->x;
    m->_11 = b->y;
    m->_12 = b->z;
    m->_20 = c->x;
    m->_21 = c->y;
    m->_22 = c->z;
}
void func_020dec70(Obj *p) {
    VecFx32 x, y, z;
    if (p->type != 9) {
        return;
    }
    MTX_GetRows(&p->mtx, &x, &y, &z);
    ((fx32 *) &x)[0] = -((fx32 *) &x)[0];
    ((fx32 *) &x)[1] = -((fx32 *) &x)[1];
    ((fx32 *) &x)[2] = -((fx32 *) &x)[2];
    ((fx32 *) &z)[0] = -((fx32 *) &z)[0];
    ((fx32 *) &z)[1] = -((fx32 *) &z)[1];
    ((fx32 *) &z)[2] = -((fx32 *) &z)[2];
    MTX_SetRows(&p->mtx, &x, &y, &z);
}
