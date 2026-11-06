/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020906ec from projets/nintendogs-chihuahua-friends/src/donor/func_020906ec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 *data_0215370c;
extern void *func_02003844(int *p, int n);
void func_020906ec(int *param_1) {
    u32 *p;
    s16 i;

    p             = (u32 *) func_02003844(param_1, 0x10);
    data_0215370c = p;
    *p            = -1;
    i             = 0;
    do {
        *(s16 *) ((char *) data_0215370c + 4 + i * 2) = -1;
        ((s32 *) ((char *) data_0215370c + 8))[i]     = 1;
        i                                             = (s16) (i + 1);
    } while (i < 2);
}
