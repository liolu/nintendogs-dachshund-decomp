/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205b074 from projets/need-for-speed-underground-2/src/donor/func_0205b074.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_02153594;
extern u32 data_0215359c;
extern void func_02080d10(void);
extern u32 func_020802e0(void);
void func_02080eb0(void) {
    u32 userHandler = (*(vu32 *) 0x027ffd9c);
    vu32 *dtcm      = (vu32 *) 0x027c3000;

    if (userHandler >= 0x02600000 && userHandler < 0x02800000) {
        data_0215359c = userHandler;
    } else {
        data_0215359c = 0;
    }
    if (data_0215359c == 0 || (func_020802e0() & 0x40000000) == 0) {
        (*(vu32 *) 0x027ffd9c) = (u32) func_02080d10;
        dtcm[0xfdc / 4]        = (u32) func_02080d10;
    }
    data_02153594 = 0;
}
