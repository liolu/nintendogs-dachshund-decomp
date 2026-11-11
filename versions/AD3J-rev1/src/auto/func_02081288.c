/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* OS_Terminate from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_terminate.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
extern u32 func_0208120c(void);
extern void func_02081288(void);
extern void func_02081270(void);
void func_02081288(void) {
    while (1) {
        func_0208120c();
        func_02081270();
    }
}
void func_02081270(void);
