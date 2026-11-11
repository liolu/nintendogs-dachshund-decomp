/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern int func_0208120c(void);
extern void func_02081220(int);
extern void func_01ffda34(int, int *, int, unsigned);

void func_0206dbdc(int a, int b, int c, unsigned d) {
    volatile unsigned *st;
    int irq;
    int *p;
    if (d == 0) {
        return;
    }
    st = (volatile unsigned *) (0x040000B0 + (a * 3 + 2) * 4);
    while (*st & 0x80000000) {
    }
    irq = func_0208120c();
    p   = (int *) 0x040000E0 + a;
    *p  = c;
    func_01ffda34(a, p, b, (d >> 2) | 0x85000000);
    func_02081220(irq);
    while (*st & 0x80000000) {
    }
}
