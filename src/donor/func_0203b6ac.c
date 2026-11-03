/* compiler: 1.2/sp2p3  */
/* func_0203b6ac from projets/nintendogs-chihuahua-friends/src/auto/func_0203b6ac.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021377bc;
s32 func_0203b6ac(u32 arg0, s32 arg1) {
    if ((arg0 >= 0x4FU) && (arg0 < 0x63U)) {
        return (arg1 * 0xA) + (*(s32 *) ((s8 *) (&data_021377bc) + (0x13C)));
    }
    return (arg1 * 0xA) + *((M2C_UNK *) ((s8 *) &data_021377bc + (arg0 * 4)));
}
