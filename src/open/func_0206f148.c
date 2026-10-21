#include "m2c.h"
void func_0206cdc0(const void *src, void *dst, unsigned int size);
void func_0206cd2c(void *dst, u8 value, u32 size);

int func_0206f148(unsigned char *dst, unsigned short a1, unsigned char a2, unsigned int a3, unsigned int a4,
                  const void *a5, unsigned int a6) {
    unsigned char hdr = 7;
    unsigned short s  = a1;
    unsigned char *p1, *p2, *p3, *p4, *p5;
    func_0206cdc0(&hdr, dst, 1);
    p1 = dst + 1;
    func_0206cdc0(&s, p1, 2);
    p2 = p1 + 2;
    func_0206cdc0(&a2, p2, 1);
    p3 = p2 + 1;
    func_0206cdc0(&a3, p3, 4);
    p4 = p3 + 4;
    func_0206cdc0(&a4, p4, 4);
    p5 = p4 + 4;
    if (a5 == 0) {
        func_0206cd2c(p5, 0, a6);
    } else {
        func_0206cdc0(a5, p5, a6);
    }
    return (p5 + a6) - dst;
}
