#include "m2c.h"

extern void func_020fa81c(void);
extern void func_020b27dc(void);
extern void func_020b26f0(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_020b1d6c(s32 a, s32 b);
extern void func_020aff08(void *p, s32 a, void *b, void *c, s32 d, void *e, s32 f, void *g, void *h, void *i);
extern void func_020faa28(void);
extern void func_020fa9f4(void);
extern void func_020fa9d8(void);
extern void func_020fa978(void);

void func_020fa738(void *arg0) {
    u8 *p = (u8 *) arg0;

    switch (*(s16 *) (p + 0x90)) {
    case 0:
        break;
    case 1:
        func_020fa81c();
        break;
    case 2:
        func_020b27dc();
        break;
    case 3: {
        u8 *s = *(u8 **) (p + 0x214);
        u8 *r = *(u8 **) (s + 0x0);
        s32 t;

        func_020b26f0(p, *(s32 *) (r + 0x48), *(s32 *) (r + 0x4C), *(s32 *) (r + 0x50),
                      *(s32 *) (r + 0x54), *(s32 *) (r + 0x58), 4);
        t = func_020b1d6c(*(u16 *) (p + 0xA0), *(s32 *) (p + 0xF8));
        func_020aff08(p, *(s32 *) (p + 0xF8), p + 0xFC, p + 0x108, t, func_020faa28, 0,
                      func_020fa9f4, func_020fa9d8, func_020fa978);
        break;
    }
    }
}
