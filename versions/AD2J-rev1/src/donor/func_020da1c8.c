/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020da1c0 from projets/nintendogs-shiba-friends/src/donor/func_020da1c0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02154ca4;
void func_020da1c8(s32 param_1) {
    s32 i;
    u32 *ent;
    u8 *e;

    for (i = 0; i < 3; i++) {
        ent = (u32 *) data_02154ca4 + i;
        e   = (u8 *) ent[2];
        if (e != 0) {
            if (param_1 == *(s16 *) (e + 140)) {
                *(u16 *) (e + 32) = *(u16 *) (e + 32) & ~1;
            }
        }
    }
}
