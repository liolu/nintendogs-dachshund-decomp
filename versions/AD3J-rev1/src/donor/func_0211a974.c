/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d14e8 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d14e8.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[11];
} Blk;
void func_0211a974(u8 *param_1, s32 param_2, u32 *param_3) {
    Blk *src         = (Blk *) (param_1 + param_2 * 44 + 0x20);
    *(Blk *) param_3 = *src;
}
