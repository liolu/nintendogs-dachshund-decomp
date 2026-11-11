/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020facd8 from projets/nintendogs-shiba-friends/src/donor/func_020facd8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u8 pad[2];
    s16 id;
    u8 rest[28];
} Ent;
s32 func_020face0(Ent *param_1, s32 param_2, s32 param_3) {
    s32 r     = -1;
    s32 iVar1 = 0;
    if (param_2 > 0) {
        do {
            if (param_3 == param_1[iVar1].id) {
                r = iVar1;
                break;
            }
            iVar1 = iVar1 + 1;
        } while (iVar1 < param_2);
    }
    return r;
}
