/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02007534 from projets/code-lyoko/src/donor/func_02007534.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
extern u32 func_0206a440();
extern void func_0206c668();
extern s32 data_0214e9e0;
extern u32 data_0214e9dc;
extern u32 data_0214e9d8;
#pragma thumb off
void func_0206c668() {
    data_0214e9e0 = (s32) func_0206a440();
    switch (data_0214e9e0) {
        case 0:
            break;
        case 0x10:
            data_0214e9dc = 0x06880000;
            data_0214e9d8 = 0x0;
            break;
        case 0x40:
            data_0214e9dc = 0x06894000;
            data_0214e9d8 = 0x4000;
            break;
        case 0x20:
        case 0x60:
            data_0214e9dc = 0x06890000;
            data_0214e9d8 = 0x0;
            break;
    }
}
