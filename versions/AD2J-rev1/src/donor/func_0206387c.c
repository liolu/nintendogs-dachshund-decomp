/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205beb8 from projets/need-for-speed-underground-2/src/donor/func_0205beb8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void func_020644a0(int i);
extern void func_0206355c(int a, int b, int c, int d, int e);
void func_0206387c(int a, int b, int c, int d) {
    int i;
    unsigned int mask = (unsigned int) c;
    for (i = 0; i < 8 && mask != 0;) {
        if (mask & 1) {
            func_020644a0(i);
        }
        i++;
        mask >>= 1;
    }
    func_0206355c(0xa, a, b, c, d);
}
