/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210843c from projets/nintendogs-chihuahua-friends/src/donor/func_0210843c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_02153720;
extern void func_02044644(s32);
extern void func_01ff832c(s32, s32 *, s32 *, s32);
typedef struct {
    u32 w[3];
} Triple;
void func_0210843c(u8 *param_1, s32 param_2, s32 param_3) {
    s32 local_28[3];
    s32 local_1c[3];
    u8 *r5;
    func_02044644((s32) * (s16 *) (param_1 + 0x9c));
    r5                   = *(u8 **) &data_02153720;
    *(Triple *) local_28 = *(Triple *) (*(u8 **) (r5 + 0x1c) + 0x48);
    *(Triple *) local_1c = *(Triple *) (*(u8 **) (r5 + 0x1c) + 0x30);
    func_01ff832c(param_3, local_28, local_1c, param_2);
}
