/* compiler: 2.0/sp1p5  */
/* func_02020844 from projets/nintendogs-chihuahua-friends/src/auto/func_02020844.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern s32 *data_0214b484;
s16 func_02020844(void *arg0) {
    s16 temp_r0;
    s32 temp_r1;

    temp_r0 = (*(s16 *) ((s8 *) (arg0) + (0x162)));
    switch (temp_r0) {
        case 11:
            return 0xC;
        case 12:
            return 0xB;
        default:
            temp_r1        = (*data_0214b484 * 0x10DCD) + 1;
            *data_0214b484 = temp_r1;
            return (s16) ((u16) ((u32) (temp_r1 << 0x10) >> 0x1F) + 0xB);
    }
}
