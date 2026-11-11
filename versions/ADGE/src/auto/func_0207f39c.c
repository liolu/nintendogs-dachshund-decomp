/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
extern u32 func_02080c14(void);
extern void func_02080c8c(void);
extern void func_0207f39c(void *arg);

/* func_02078bc4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_thread.c (license: none), reused by
 * tools/donor_match.py */
void func_0207f39c(void *arg) {
    func_02080c14();
    while (1) {
        func_02080c8c();
    }
}
