/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208cc68 from projets/nintendogs-chihuahua-friends/src/donor/func_0208cc68.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u8 data[0x13c];
} SubA;
typedef struct {
    u8 data[0x40];
} SubB;
typedef struct {
    u8 pad0[6];
    s16 f6;
    u8 pad8[0x85c - 8];
    SubA a;
    SubB b;
} Obj;
typedef struct {
    u8 pad[0x30];
    Obj *obj;
} Mgr;
extern Mgr *data_02153700;
extern s16 func_020c8798(void);
extern void func_020cac68(Obj *p, s16 a);
extern void func_020c88a4(Obj *p, s16 a);
extern void func_020cacf4(Obj *p);
extern void func_020cabfc(Obj *p, s16 a);
extern void func_020ca180(SubA *p, s16 a, s16 b);
extern void func_020ca070(SubA *p, s16 a, s16 b);
extern void func_0206dfbc(u16 data, void *dest, u32 size);
extern void func_020ca0cc(SubA *p, s16 a, s16 b);
extern void func_020ca018(SubB *p, s16 a, s16 b);
extern void func_020c9f08(SubB *p, s16 a, s16 b);
extern void func_020c9f64(SubB *p, s16 a, s16 b);
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    func_0206dfbc(*(u16 *) &data, dest, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MI_CpuFill16(dest, 0, size);
}
void func_0208cc68(s16 param) {
    s16 idx;
    Obj *obj;
    s16 i;

    idx = func_020c8798();
    obj = data_02153700->obj;
    func_020cac68(obj, param);
    obj->f6 = -1;
    func_020c88a4(obj, idx);
    func_020cacf4(obj);
    func_020cabfc(obj, param);
    for (i = 0; i < 20; i++) {
        func_020ca180(&obj->a, param, i);
        func_020ca070(&obj->a, idx, i);
        MI_CpuClear16(&obj->a, sizeof(SubA));
        func_020ca0cc(&obj->a, param, i);
        func_020ca018(&obj->b, param, i);
        func_020c9f08(&obj->b, idx, i);
        MI_CpuClear16(&obj->b, sizeof(SubB));
        func_020c9f64(&obj->b, param, i);
    }
}
