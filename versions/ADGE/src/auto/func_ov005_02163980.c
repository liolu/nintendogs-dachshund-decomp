/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov005_021639d8(void *);
void func_ov005_02163d34(void *);

void func_ov005_02163980(void *arg0) {
    s16 t;

    t = *(s16 *) ((u8 *) arg0 + 0x90);
    if (t == 0) {
        return;
    }
    switch (t) {
        case 2:
            func_ov005_02163d34(arg0);
            return;
        case 3:
            func_ov005_021639d8(arg0);
            return;
    }
}
