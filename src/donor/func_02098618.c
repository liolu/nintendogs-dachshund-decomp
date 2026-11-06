/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02098618 from projets/nintendogs-chihuahua-friends/src/donor/func_02098618.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0213bbf0[];
u32 func_02098618(u32 a, u32 b, s32 c) {
    u32 r = 0;
    if (c >= 1 && c <= 3) {
        s16 idx = (s16) (c - 1);
        u32 *pp = (u32 *) data_0213bbf0[a];
        switch (b) {
            case 0:
                break;
            case 1:
                r = ((u32 *) pp[0])[idx];
                break;
            case 2:
                r = ((u32 *) pp[1])[idx];
                break;
            case 3:
                r = ((u32 *) pp[2])[idx];
                break;
            case 4:
                r = ((u32 *) pp[3])[idx];
                break;
            case 5:
                r = ((u32 *) pp[4])[idx];
        }
    }
    return r;
}
