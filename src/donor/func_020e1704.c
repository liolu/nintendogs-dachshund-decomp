/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e1704 from projets/nintendogs-chihuahua-friends/src/donor/func_020e1704.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u8 *data_02154cac;
u32 func_020e1704(void) {
    s32 x = *(s32 *) (data_02154cac + 0xc);
    return (u32) ((s32) (((s64) (x) * (0x19a) + 0x800) >> 12));
}
