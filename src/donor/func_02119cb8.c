/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02119cb8 from projets/nintendogs-chihuahua-friends/src/donor/func_02119cb8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u32 w[10];
} T;
void func_02119cb8(u8 *param_1, u32 *param_2) {
    *(T *) param_2 = *(T *) (param_1 + 0x10);
}
