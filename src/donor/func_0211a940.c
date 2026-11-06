/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211a938 from projets/nintendogs-shiba-friends/src/donor/func_0211a938.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[11];
} T44;
void func_0211a940(u8 *param_1, s32 param_2, T44 *param_3) {
    *(T44 *) (param_1 + param_2 * 44 + 0x20) = *param_3;
}
