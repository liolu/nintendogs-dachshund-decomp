/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020934cc from projets/nintendogs-shiba-friends/src/donor/func_020934cc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u16 a;
    s16 b;
    u32 c;
} Obj;
extern void func_020cd3d8(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02096268(void);
void func_020934cc(u8 *param_1) {
    Obj *o;

    o = (Obj *) (param_1 + 0x128);
    if (o->a == 0xffff) {
        return;
    }
    if (o->b != 0) {
        func_020cd3d8(o->a, o->c, 0, (u32) func_02096268, 1);
    } else {
        func_020cd3d8(o->a, o->c, 0, (u32) func_02096268, 0);
    }
    o->a = 0xffff;
    o->b = 0;
    o->c = 0xffffffff;
}
