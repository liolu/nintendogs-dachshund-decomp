/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_InitException from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/os/os_init_exception.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef volatile u32 vu32;
extern u32 data_021540c4;
extern u32 data_021540cc;
extern void func_0208072c(void);
extern u32 func_0207fc98(void);
void func_020808cc(void) {
    u32 userHandler = (*(vu32 *) 0x027ffd9c);
    vu32 *dtcm      = (vu32 *) 0x027c3000;

    if (userHandler >= 0x02600000 && userHandler < 0x02800000) {
        data_021540cc = userHandler;
    } else {
        data_021540cc = 0;
    }
    if (data_021540cc == 0 || (func_0207fc98() & 0x40000000) == 0) {
        (*(vu32 *) 0x027ffd9c) = (u32) func_0208072c;
        dtcm[0xfdc / 4]        = (u32) func_0208072c;
    }
    data_021540c4 = 0;
}
