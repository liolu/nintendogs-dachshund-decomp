/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02095524 from projets/nintendogs-shiba-friends/src/donor/func_02095524.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_02153740;
extern s32 func_02003a08(void);
extern s32 func_020039d0(void);
u32 func_02095524(u8 *p) {
    u32 r4 = 1;
    u16 fl = *(u16 *) (p + 44);
    if ((fl & 1) != 0) {
        if (func_02003a08() == 0) {
            r4 = 0;
        }
    } else if ((fl & 2) != 0) {
        if (func_020039d0() == 0) {
            r4 = 0;
        }
    } else {
        u8 *q = data_02153740;
        if (q != ((void *) 0)) {
            s32 bc = *(volatile s32 *) (q + 0xbc);
            s32 b8 = *(volatile s32 *) (q + 0xb8);
            if (b8 == bc) {
                r4 = 0;
            }
        }
    }
    return r4;
}
