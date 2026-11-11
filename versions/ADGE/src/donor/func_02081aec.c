/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fab6c from https://github.com/banatic/acww-decomp src/autoload_2/func_020fab6c.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern int (*data_0213cd78)(int, int, int);
int func_02081aec(int a, int b, int c) {
    return (data_0213cd78(a, b, 0) & 0xffff) << 3;
}
