/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201c528 from https://github.com/RonyxDumb/mkds src/arm9/0201c528_func_0201c528.c (license: none), reused by
 * tools/donor_match.py */
void func_02083c80(int arg0, int arg1, int *m) {
    int r3 = (int) ((((long long) (0x1000 - arg1) * 0x555) + 0x800) >> 12);
    int r5 = (int) ((((long long) arg0 * 0x93d) + 0x800) >> 12);
    int r1;
    int sum = r3 + r5;
    int dif = r3 - r5;
    r1      = r3 + arg1;
    m[0]    = r1;
    m[3]    = sum;
    m[6]    = dif;
    m[9]    = 0;
    m[1]    = dif;
    m[4]    = r1;
    m[7]    = sum;
    m[10]   = 0;
    m[2]    = sum;
    m[5]    = dif;
    m[8]    = r1;
    m[11]   = 0;
}
