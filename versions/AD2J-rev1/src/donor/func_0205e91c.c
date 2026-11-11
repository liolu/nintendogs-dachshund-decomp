/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02001dfc from projets/children-of-mana/src/donor/func_02001dfc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef char *va_list;
extern int func_0205e980(char *s, unsigned int n, const char *format, va_list arg);
int func_0205e91c(char *s, const char *format, ...) {
    return func_0205e980(
        s, 0xffffffffUL, format,
        ((va_list) ((char *) ((unsigned int) (&format) & ~3U) + ((((unsigned int) (sizeof(format))) + 3U) & ~3U))));
}
