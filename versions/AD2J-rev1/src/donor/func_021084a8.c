/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021084a0 from projets/nintendogs-shiba-friends/src/donor/func_021084a0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef struct {
    u32 w[3];
} T3;
extern u32 data_02153720;
extern void func_02044644(s16 a);
extern u32 func_01ff832c(u32 a, u32 *b, u32 *c, u32 *d);
void func_021084a8(u8 *param_1, u32 *param_2) {
    T3 local_28;
    T3 local_1c;
    u8 *p;
    func_02044644(*(s16 *) (param_1 + 156));
    p        = *(u8 **) &data_02153720;
    local_28 = *(T3 *) (*(u8 **) (p + 0x1c) + 0x48);
    local_1c = *(T3 *) (*(u8 **) (p + 0x1c) + 0x30);
    func_01ff832c(0x5000, (u32 *) &local_28, (u32 *) &local_1c, param_2);
}
