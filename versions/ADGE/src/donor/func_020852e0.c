/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0201dbd8 from https://github.com/RonyxDumb/mkds src/arm9/0201dbd8_func_0201dbd8.c (license: none), reused by
 * tools/donor_match.py */
void func_020852e0(int obj, int src, int a) {
    int t;
    int q;
    t                       = *(short *) (*(int *) (src + 0x14) + 4);
    q                       = (t - 0x1000) * (a - 0xff) / 255;
    *(short *) (obj + 0x34) = (short) (t + q);
}
