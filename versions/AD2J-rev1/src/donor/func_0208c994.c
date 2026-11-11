/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208c994 from projets/nintendogs-shiba-friends/src/donor/func_0208c994.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153700;
short *func_0208c994(s32 param_1, s32 param_2) {
    short *ret = 0;
    s32 cnt;
    s32 last;
    s32 run;
    short *ent;
    s32 id;
    run  = 0;
    ent  = (short *) (*(s32 *) (data_02153700 + 0x34) + 0x18);
    cnt  = 0;
    last = -1;
    for (;;) {
        id = ent[0];
        if (id != 0) {
            if (last != id) {
                run  = 0;
                last = id;
            } else {
                run = (s16) (run + 1);
            }
            if (id == param_1 && param_2 == run) {
                ret = ent;
                break;
            }
        }
        cnt = (s16) (cnt + 1);
        ent += 5;
        if (cnt >= 4) {
            break;
        }
    }
    return ret;
}
