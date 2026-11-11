/* compiler: 1.2/sp2p3  */
/* func_02037d3c from projets/nintendogs-chihuahua-friends/src/auto/func_02037d3c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern s32 *data_0214b484;
s16 func_02037d3c(void) {
    s32 temp_r2;

    temp_r2        = (*data_0214b484 * 0x10DCD) + 1;
    *data_0214b484 = temp_r2;
    return (s16) ((u16) ((u32) (temp_r2 << 0x10) >> 0x1F) + 0x13F);
}
