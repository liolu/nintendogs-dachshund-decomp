/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02090034 from projets/nintendogs-chihuahua-friends/src/donor/func_02090034.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u16 flags;
    s16 idx;
    u8 pad[16];
} Entry;
typedef struct {
    u8 pad0[4];
    u16 f4;
    u16 f6;
    u16 f8;
    u8 pad1[4];
    u16 f14;
    u8 pad2[16];
    Entry entries[16];
} Obj;
extern Obj *data_02153708;
extern void func_02090508(Obj *obj, u32 n);
extern void func_0209026c(u32 *p);
void func_02090034(u32 *param_1, u16 param_2, u16 param_3) {
    Obj *puVar3;
    s16 sVar1;
    u16 uVar1;
    Entry *e;

    puVar3 = data_02153708;
    func_02090508(puVar3, 4);
    puVar3->f4  = 3;
    puVar3->f6  = 2;
    puVar3->f8  = param_3;
    puVar3->f14 = param_2;
    sVar1       = puVar3->f14;
    e           = &puVar3->entries[sVar1];
    uVar1       = e->flags;
    e->flags    = uVar1 | 1;
    e->idx      = sVar1;
    if (param_1 != 0) {
        func_0209026c(param_1);
    }
}
