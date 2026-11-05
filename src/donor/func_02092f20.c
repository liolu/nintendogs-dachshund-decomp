/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02092f20 from projets/nintendogs-shiba-friends/src/donor/func_02092f20.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[3];
} Blk12;
u32 func_02092f20(u8 *param_1, Blk12 *param_2) {
    s32 t = *(u16 *) (param_1 + 184);
    if (t == 0) {
        *param_2 = *(Blk12 *) (*(u8 **) (param_1 + 0x1c) + 48);
        return 0;
    }
    if (t < 60) {
        *param_2 = *(Blk12 *) (*(u8 **) (param_1 + 0x1c) + 48);
        return 1;
    }
    *param_2 = *(Blk12 *) (param_1 + 156);
    return 1;
}
