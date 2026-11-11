/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov028_0215c030;

void func_ov028_0215b088(void *arg0) {
    void (*fn)(void *);

    *(s32 *) (data_ov028_0215c030 + 0x30) = 1;
    fn                                    = *(void (**)(void *))(data_ov028_0215c030 + 0x18);
    if (fn != 0) {
        fn(arg0);
    }
}
