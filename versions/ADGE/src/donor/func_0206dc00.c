/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02063718 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02063718.c (license: MIT), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
extern void func_0206cc0c(void *dst, void *src, int n);
extern void func_02070178(void);
extern int func_020701a0(void);
extern int func_02070144(void);
extern int func_02070154(void);
extern int func_0206f4a8(char *q, int a, int b, int c, int d);
extern void func_0206ed14(char *a, int b, void *c, int d);
extern int func_0206f36c(char *q, int a, int b, int c, int d);
extern int func_0206f210(char *q, int a, int b, int c, int d);
extern int func_0206efb0(char *q, int a, int b, char *c, int d);
int func_0206dc00(char *p, char *q) {
    int t;
    int ret = 0;
    int *st = (int *) ((long long) (unsigned int) (p + 0x9c));
    int b;
    int i;
    char *ptr;
    if (*(int *) p != 0) {
        return ret;
    }
    if (*st == 0) {
        return ret;
    }
    func_02070178();
    t = func_020701a0();
    switch (*st) {
        case 2:
            func_0206cc0c(st, p, 0x9c);
            *(u8 *) (p + 0xc) = t;
            ret               = func_02070144();
            b                 = func_02070154();
            ret               = func_0206f4a8(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), ret, b);
            break;
        case 6:
            func_0206cc0c(st, p, 0x9c);
            *(u8 *) (p + 0xc) = t;
            ptr               = p + 0x1f8;
            for (i = 0; i < 0x10; i++, ptr += 0x68) {
                if ((*(u16 *) (p + 8) >> i) & 1) {
                    func_0206ed14(ptr, *(int *) (p + 0x18), ptr + 0x1c, ((int *) p + i)[7]);
                }
            }
            if (*(int *) ((long long) (unsigned int) (p + 0x9c)) == 4) {
                ret = func_0206f36c(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), *(int *) (p + 0x14), 0);
            } else {
                ret = func_0206f210(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), *(int *) (p + 0x14), 0);
            }
            break;
        case 4:
            func_0206cc0c(st, p, 0x9c);
            *(u8 *) (p + 0xc) = t;
            ptr               = p + 0x1f8;
            for (i = 0; i < 0x10; i++, ptr += 0x68) {
                if ((*(u16 *) (p + 8) >> i) & 1) {
                    func_0206ed14(ptr, *(int *) (p + 0x18), (void *) ((int *) p + i)[23], ((int *) p + i)[7]);
                }
            }
            if (*(int *) ((long long) (unsigned int) (p + 0x9c)) == 4) {
                ret = func_0206f36c(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), *(int *) (p + 0x14), 0);
            } else {
                ret = func_0206f210(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), *(int *) (p + 0x14), 0);
            }
            break;
        case 0xa:
            func_0206cc0c(st, p, 0x9c);
            *(u8 *) (p + 0xc) = t;
            ret               = func_0206efb0(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), p + 0x14, *(u8 *) (p + 0x1d));
            break;
    }
    *(int *) ((long long) (unsigned int) (p + 0x9c)) = 0;
    return ret;
}
