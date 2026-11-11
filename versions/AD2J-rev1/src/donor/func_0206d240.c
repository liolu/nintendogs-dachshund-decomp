/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200810c from projets/code-lyoko/src/donor/func_0200810c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_0206a3e0();
extern void func_0206d240();
extern s32 data_0214e9e8;
extern u32 data_0214e9f8;
#pragma thumb off
void func_0206d240() {
    u32 temp      = func_0206a3e0();
    data_0214e9e8 = (s32) temp;
    switch (temp) {
        case 2:
        case 3:
            data_0214e9f8 = 0x6800000;
            return;
        case 8:
        case 12:
            data_0214e9f8 = 0x6840000;
            return;
        case 1:
            data_0214e9f8 = 0x67E0000;
            return;
        case 4:
            data_0214e9f8 = 0x6820000;
    }
}
