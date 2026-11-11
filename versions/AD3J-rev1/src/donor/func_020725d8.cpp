/* compiler: 1.2/sp2p3 -O4,p -inline on,noauto */
/* func_020500a4 from https://github.com/tangosdev/sm64ds-decomp src/engine/sound/SoundEngine.cpp (license: MIT), reused by
 * tools/donor_match.py */
struct Q {
    int f0, f4, f8, fc, f10;
};
struct T {
    int f0, f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c, f20, f24, f28;
    int f2c;
    void (*f30)(int, int, int, int, int);
    int f34;
};
extern "C" {
extern void func_02080820(unsigned int addr, unsigned int n);
extern int data_0214fc48;
extern int data_0214fc4c;
extern int data_0214fc50;
extern struct Q data_0214fcb4[];
extern int func_020804c0(struct Q *q, int val, int flag);
extern void func_020725d8(struct T *thiz);
}
extern "C" void func_020725d8(struct T *thiz) {
    int quot = thiz->f14 / thiz->f2c;
    int prod = quot * thiz->f18;
    int e6   = thiz->fc + prod;
    int e5   = thiz->f10 + prod;

    if (data_0214fc4c != 0) {
        struct Q *slot = &data_0214fcb4[data_0214fc48];
        slot->f0       = (int) thiz;
        slot->f4       = quot;
        slot->f8       = prod;
        slot->fc       = e6;
        slot->f10      = e5;
        ((void (*)(void *a, void *slot, int c)) func_020804c0)(&data_0214fc50, slot, 0);
        data_0214fc48 = data_0214fc48 + 1;
        if (data_0214fc48 >= 8) {
            data_0214fc48 = 0;
        }
    } else {
        func_02080820(e6, quot);
        func_02080820(e5, quot);
        thiz->f30(e6, e5, quot, thiz->f8, thiz->f34);
    }
    {
        int *pf18 = (int *) ((int) &thiz->f18);
        *pf18     = *pf18 + 1;
        if (thiz->f18 >= thiz->f2c) {
            thiz->f18 = 0;
        }
    }
}
