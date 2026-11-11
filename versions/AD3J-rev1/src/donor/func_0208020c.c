/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207fbc4 from projets/nintendogs-dachshund/src/donor/func_0207fbc4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern int func_0207f624(void);
extern unsigned int func_0208120c(void);
extern int func_0207f68c(unsigned short *p);
extern int func_0207f72c(int x);
extern int func_0207f74c(int a);
extern void func_02081220(unsigned int flags);
int func_0208020c(void) {
    int result;
    int done = 0;
    int x;
    int res;
    unsigned int irq;

    x      = (unsigned short) func_0207f624();
    result = done;

    do {
        res = -1;
        irq = func_0208120c();
        if ((func_0207f68c((unsigned short *) 0x027fffe8) & 0x40) != 0 || (res = func_0207f72c(x)) == 0) {
            if (*(unsigned int *) 0x8000000 == 0x544e494e && *(unsigned int *) 0x8000004 == 0x4f444e45) {
                result = 0x1000000;
            } else {
                result = 0x2000000;
            }
            if (res == 0) {
                func_0207f74c(x);
                done = 1;
            }
        }
        func_02081220(irq);
    } while (done == 0);

    return result;
}
