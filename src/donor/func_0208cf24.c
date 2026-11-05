/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0208cf24 from projets/nintendogs-shiba-friends/src/donor/func_0208cf24.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 data_02153700[];
s32 func_0208cf24(void) {
    u8 **pp = (u8 **) data_02153700;
    s32 r   = -1;
    s32 v;
    v = *(s16 *) *pp;
    switch (v) {
        case 0:
            break;
        case 1:
        case 2:
            r = 1;
            break;
        case 3:
        case 4:
            r = 25;
            break;
        case 5:
            r = 24;
            break;
        default:
            break;
    }
    return r;
}
