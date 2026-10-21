#include "m2c.h"
extern s16 *data_02159e6c;
void func_020d57f4(s16 *arg0);
s32 func_020c189c(void);
void func_020bf148(void);
s32 func_020bee8c(void);
void func_020c19f4(void);
s32 func_020c0ab8(void);
void func_020c19ac(void);
void func_020d5730(void) {
    s16 *p = data_02159e6c;
    s32 ok;

    switch (*p) {
    case 0:
        break;
    case 1:
        func_020d57f4(p);
        break;
    case 2:
        if (func_020c189c() == 1) {
            func_020bf148();
            *p = 3;
        } else {
            if (func_020c189c() == 5) {
                switch (func_020bee8c()) {
                case 0x14:
                    ok = 1;
                    goto test;
                }
            }
            ok = 0;
        test:
            if (ok) {
                func_020c19f4();
            }
        }
        break;
    }
    if (func_020c0ab8() != 0) {
        func_020c19ac();
    }
}
