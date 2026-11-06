/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020992b0 from projets/nintendogs-chihuahua-friends/src/donor/func_020992b0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef s32 fx32;
typedef s16 fx16;
typedef s64 fx64;
typedef struct {
    fx32 x;
    fx32 y;
    fx32 z;
} VecFx32;
extern void **data_02154c9c;
extern fx16 data_02124ae0[];
extern u32 func_02080f5c(void);
extern void func_02084a14(void *a, s32 b, VecFx32 *c);
extern void func_020ef914(s32 a, VecFx32 *b);
static inline fx16 FX_SinIdx(int idx) {
    return data_02124ae0[((idx >> 4) << 1)];
}
static inline fx16 FX_CosIdx(int idx) {
    return data_02124ae0[((idx >> 4) << 1) + 1];
}
static inline u16 RandMask(u32 *s) {
    *s = *s * 0x10dcd + 1;
    return (u16) (*s & 0xfff);
}
static inline u16 Rand16(u32 *s) {
    *s = *s * 0x10dcd + 1;
    return (u16) *s;
}
void func_020992b0(void) {
    VecFx32 pos;
    u32 seed;
    s16 y;
    s16 r;
    u16 ang;
    fx32 rad;
    void *obj;

    seed  = func_02080f5c();
    y     = RandMask(&seed);
    r     = RandMask(&seed);
    ang   = Rand16(&seed);
    rad   = ((fx32) (((fx64) (r) * (0x17000) + 0x800LL) >> 12)) + 0xc000;
    pos.x = ((fx32) (((fx64) (rad) * (FX_SinIdx(ang)) + 0x800LL) >> 12));
    pos.y = ((fx32) (((fx64) (y) * (0x10000) + 0x800LL) >> 12)) + 0x16000;
    pos.z = ((fx32) (((fx64) (rad) * (FX_CosIdx(ang)) + 0x800LL) >> 12));
    obj   = ((void *) 0);
    if (data_02154c9c != ((void *) 0)) {
        obj = *data_02154c9c;
    }
    func_02084a14(obj, 12, &pos);
    func_02084a14(obj, 11, &pos);
    func_02084a14(obj, 13, &pos);
    func_020ef914(1, &pos);
}
