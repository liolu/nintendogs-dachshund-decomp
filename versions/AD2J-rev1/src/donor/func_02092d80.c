/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02092d80 from projets/nintendogs-shiba-friends/src/donor/func_02092d80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_02153720;
extern s32 func_0200b7f4(void *a, void *b, void *c);
typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;
u32 func_02092d80(u8 *param_1, void *param_2, s32 param_3) {
    u8 *obj;
    Triple local;
    s32 r;
    obj = *(u8 **) &data_02153720;
    if ((*(u16 *) (obj + 0x84) & 2) != 0) {
        local = *(Triple *) (obj + 0x9c);
        r     = func_0200b7f4(param_2, (void *) (*(u8 **) (param_1 + 0x1c) + 0x30), &local);
        if (r < param_3) {
            return 1;
        }
    }
    return 0;
}
