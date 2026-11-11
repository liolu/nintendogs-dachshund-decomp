/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* __write_console from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/console_io.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_0206377c(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
asm void func_0206373c(register void* c);
// clang-format on
extern void func_0206373c(void *c);
int func_0206377c(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        func_0206373c(&buffer[i]);
    }

    return 0;
}
