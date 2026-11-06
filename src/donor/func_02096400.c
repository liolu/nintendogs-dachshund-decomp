/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02096400 from projets/nintendogs-chihuahua-friends/src/donor/func_02096400.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0213bb38;
extern s32 func_021060d4(void);
extern s32 func_01ffda04(s32 a);
extern s32 func_02028144(s32 a);
extern u8 func_020280c8(s32 a);
extern s32 func_020c55c8(u32 a, u32 b);
s32 func_02096400(s32 p0, u32 p1) {
    s32 r4;
    s32 r;

    r4 = (s32) &data_0213bb38;
    switch (p0) {
        case 0x30002:
            r = func_01ffda04(func_021060d4());
            if (r != 0) {
                r4 = func_02028144(r) + 120;
            }
            break;
        case 0x30005:
            r = func_01ffda04(func_021060d4());
            if (r != 0) {
                r4 = func_020c55c8(func_020280c8(r), p1);
            }
            break;
    }
    return r4;
}
