/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021207f8 from projets/nintendogs-shiba-friends/src/donor/func_021207f8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_02157b60[];
extern u16 func_020713c8(u32 a);
extern s32 func_02071304(u32 a, u32 b, s32 *c, s32 *d);
u32 func_02120800(u32 acc) {
    s32 iStack_20;
    s32 iStack_1c;
    s32 j;
    s32 i;
    s32 r;

    r = func_02071304(0x438, func_020713c8(*(u16 *) (*(u8 **) data_02157b60 + 256 + 10)), &iStack_20, &iStack_1c);
    if (r != 0) {
        acc = (acc + 1) & 0xff;
    }
    acc = (acc + 2) & 0xff;
    for (i = 0; i < 16; i++) {
        if (((u32 *) (*(u8 **) data_02157b60 + 0x40))[i] != 0) {
            for (j = 0; j < 10; j++) {
                func_020713c8(*(u16 *) (*(u8 **) data_02157b60 + 256 + 10));
            }
            acc = (acc + 1) & 0xff;
        }
    }
    return acc;
}
