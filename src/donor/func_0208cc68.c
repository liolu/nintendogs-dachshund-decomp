/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a4b88 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a4b88.c (license: none), reused by
 * tools/donor_match.py */
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
extern s16 func_020c8794(void);
extern void func_020cac64(Obj *p, s16 a);
extern void func_020c88a0(Obj *p, s16 a);
extern void func_020cacf0(Obj *p);
extern void func_020cabf8(Obj *p, s16 a);
extern void func_020ca17c(SubA *p, s16 a, s16 b);
extern void func_020ca06c(SubA *p, s16 a, s16 b);
extern void func_0206dfbc(u16 data, void *dest, u32 size);
extern void func_020ca0c8(SubA *p, s16 a, s16 b);
extern void func_020ca014(SubB *p, s16 a, s16 b);
extern void func_020c9f04(SubB *p, s16 a, s16 b);
extern void func_020c9f60(SubB *p, s16 a, s16 b);
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

    idx = func_020c8794();
    obj = data_02153700->obj;
    func_020cac64(obj, param);
    obj->f6 = -1;
    func_020c88a0(obj, idx);
    func_020cacf0(obj);
    func_020cabf8(obj, param);
    for (i = 0; i < 20; i++) {
        func_020ca17c(&obj->a, param, i);
        func_020ca06c(&obj->a, idx, i);
        MI_CpuClear16(&obj->a, sizeof(SubA));
        func_020ca0c8(&obj->a, param, i);
        func_020ca014(&obj->b, param, i);
        func_020c9f04(&obj->b, idx, i);
        MI_CpuClear16(&obj->b, sizeof(SubB));
        func_020c9f60(&obj->b, param, i);
    }
}
