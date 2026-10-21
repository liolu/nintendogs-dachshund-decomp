typedef unsigned int u32;
extern char data_0214ec20[];
extern char data_0214f200[];
extern char data_0214f220[];
extern int data_02153e78[];
extern void func_02065278(void);
extern void func_0207f670(void *p);
extern void func_0206c3ec(u32 dmaNo);
extern int func_02065fb0(void *p);
extern int func_02065d48(void);
extern int func_02065508(void *fn);
extern int func_02065e7c(void *g);
extern unsigned int func_02080c28(void);
extern void func_02080c3c(unsigned int flags);
int func_02065d54(u32 a, int b, int c, int d, int e, int f, int g) {
    u32 *s = (u32 *) data_0214ec20;
    char *t = data_0214f220;
    unsigned int irq;

    func_02065278();
    irq = func_02080c28();
    if (s[0xD] & 4) {
        do {
            func_0207f670((char *) s + 0xD4);
        } while (s[0xD] & 4);
    }
    s[0xD] |= 4;
    func_02080c3c(irq);
    s[9] = a;
    s[6] = b + *(int *) data_0214f200;
    s[7] = c;
    s[8] = d;
    s[0xA] = e;
    s[0xB] = f;
    if (a <= 3) {
        func_0206c3ec(a);
    }
    if (func_02065fb0(t) != 0) {
        if (g != 0) {
            return g;
        }
        return func_02065d48();
    }
    if (g != 0) {
        return func_02065508((void *) func_02065e7c);
    }
    s[0x34] = data_02153e78[2];
    return func_02065e7c(s);
}
