/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov006_02162718(void *arg0) {
    void (*f)(void *) = *(void (**)(void *))((u8 *) arg0 + 0x28);
    if (f != 0) {
        f(arg0);
    }
}
