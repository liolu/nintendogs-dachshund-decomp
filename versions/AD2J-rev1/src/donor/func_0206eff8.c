/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e4bc from projets/children-of-mana/src/auto/func_0205e4bc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
extern void func_0206e004(void *dst, void *src, int n);
extern void func_02071570(void);
extern int func_02071598(void);
extern int func_0207153c(void);
extern int func_0207154c(void);
extern int func_020708a0(char *q, int a, int b, int c, int d);
extern void func_0207010c(char *a, int b, void *c, int d);
extern int func_02070764(char *q, int a, int b, int c, int d);
extern int func_02070608(char *q, int a, int b, int c, int d);
extern int func_020703a8(char *q, int a, int b, char *c, int d);
int func_0206eff8(char *p, char *q) {
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
    func_02071570();
    t = func_02071598();
    switch (*st) {
        case 2:
            func_0206e004(st, p, 0x9c);
            *(u8 *) (p + 0xc) = t;
            ret               = func_0207153c();
            b                 = func_0207154c();
            ret               = func_020708a0(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), ret, b);
            break;
        case 6:
            func_0206e004(st, p, 0x9c);
            *(u8 *) (p + 0xc) = t;
            ptr               = p + 0x1f8;
            for (i = 0; i < 0x10; i++, ptr += 0x68) {
                if ((*(u16 *) (p + 8) >> i) & 1) {
                    func_0207010c(ptr, *(int *) (p + 0x18), ptr + 0x1c, ((int *) p + i)[7]);
                }
            }
            if (*(int *) ((long long) (unsigned int) (p + 0x9c)) == 4) {
                ret = func_02070764(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), *(int *) (p + 0x14), 0);
            } else {
                ret = func_02070608(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), *(int *) (p + 0x14), 0);
            }
            break;
        case 4:
            func_0206e004(st, p, 0x9c);
            *(u8 *) (p + 0xc) = t;
            ptr               = p + 0x1f8;
            for (i = 0; i < 0x10; i++, ptr += 0x68) {
                if ((*(u16 *) (p + 8) >> i) & 1) {
                    func_0207010c(ptr, *(int *) (p + 0x18), (void *) ((int *) p + i)[23], ((int *) p + i)[7]);
                }
            }
            if (*(int *) ((long long) (unsigned int) (p + 0x9c)) == 4) {
                ret = func_02070764(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), *(int *) (p + 0x14), 0);
            } else {
                ret = func_02070608(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), *(int *) (p + 0x14), 0);
            }
            break;
        case 0xa:
            func_0206e004(st, p, 0x9c);
            *(u8 *) (p + 0xc) = t;
            ret               = func_020703a8(q, *(u16 *) (p + 8), *(u8 *) (p + 0xc), p + 0x14, *(u8 *) (p + 0x1d));
            break;
    }
    *(int *) ((long long) (unsigned int) (p + 0x9c)) = 0;
    return ret;
}
