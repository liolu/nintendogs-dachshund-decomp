/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov027_02159bb0;

void func_ov027_02158c08(void *arg0) {
    void (*fn)(void *);

    *(s32 *) (data_ov027_02159bb0 + 0x30) = 1;
    fn                                    = *(void (**)(void *))(data_ov027_02159bb0 + 0x18);
    if (fn != 0) {
        fn(arg0);
    }
}
