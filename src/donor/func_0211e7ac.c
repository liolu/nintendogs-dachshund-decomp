/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211e7ac from projets/nintendogs-chihuahua-friends/src/donor/func_0211e7ac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_021560e8;
extern u8 *func_02120174(void);
extern void func_0211d138(void);
extern s32 func_02066250(void *fn, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
void func_0211e7ac(u32 param_1, u32 param_2) {
    u8 *o;
    s32 ret;
    o = func_02120174();
    if (param_2 > *(u16 *) (o + 0x34)) {
        return;
    }
    if (*(u32 *) (*(u8 **) &data_021560e8 + 0x3c) != 0) {
        *(u32 *) (*(u8 **) &data_021560e8 + 0x3c) = 0;
        ret                                       = func_02066250((void *) func_0211d138, 0, param_1, param_2, 0xffff, 5, 2);
        if (ret != 2) {
            *(u32 *) (*(u8 **) &data_021560e8 + 0x3c) = 1;
        }
        return;
    }
    return;
}
