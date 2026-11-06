/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f1ed8 from projets/nintendogs-chihuahua-friends/src/donor/func_020f1ed8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
extern u8 data_02155000[];
extern void func_02072320(u32 a, u32 b);
extern void func_0207227c(u32 a);
void func_020f1ed8(void) {
    u8 *g = data_02155000;
    u8 *q;
    if (*(u32 *) (g + 0x34) != 0) {
        if (*(u32 *) (g + 0x38) == 0) {
            q = g + 8;
            if (*(s16 *) (g + 4) == 3 && *(u32 *) q != 0) {
                func_02072320((u32) q, 10);
                func_0207227c((u32) q);
            }
        }
        *(u32 *) (g + 0x38) = 0;
    }
}
