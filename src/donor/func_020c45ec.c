/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c45ec from projets/nintendogs-chihuahua-friends/src/donor/func_020c45ec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern void func_02069634(void *a, u8 *b, u32 *c);
extern u32 func_020695f0(u32 *a, u8 *b);
void func_020c45ec(u8 *param_1, void *param_2, u32 *param_3) {
    u32 loc[3];
    func_02069634(param_2, param_1 + 48, loc);
    param_3[0] = func_020695f0(loc, param_1 + 96);
    param_3[1] = func_020695f0(loc, param_1 + 84);
    param_3[2] = func_020695f0(loc, param_1 + 72);
}
