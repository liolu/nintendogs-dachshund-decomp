/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern int func_0208120c(void);
extern void func_02081220(int);
extern void func_01ffda34(int, int, int, unsigned);
extern volatile unsigned data_040000b0[];
extern int data_040000e0[];

void func_0206dad0(int a, int b, int c, unsigned d) {
    volatile unsigned *st;
    int irq;
    if (d == 0) {
        return;
    }
    st = (volatile unsigned *) (0x040000B0 + (a * 3 + 2) * 4);
    while (*st & 0x80000000) {
    }
    irq                           = func_0208120c();
    *(int *) (0x040000E0 + a * 4) = c;
    func_01ffda34(a, 0x040000E0 + a * 4, b, (d >> 1) | 0x81000000);
    func_02081220(irq);
    while (*st & 0x80000000) {
    }
}
