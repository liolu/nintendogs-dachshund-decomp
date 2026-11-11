/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c372c from projets/nintendogs-chihuahua-friends/src/donor/func_020c372c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_02154c24[];
void func_020c372c(vu32 *param_1) {
    u32 a;
    u32 b;
    a                = param_1[0];
    b                = param_1[1];
    data_02154c24[0] = a;
    data_02154c24[1] = b;
}
