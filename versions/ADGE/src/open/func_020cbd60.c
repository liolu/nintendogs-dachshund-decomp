#include "m2c.h"
extern void *data_02159e30;
void func_020cbd60(void) {
    s16 i;

    for (i = 0; i < 14; i = (s16) (i + 1)) {
        if ((*(u32 *) data_02159e30 & (1u << i)) == 0) {
            *(u32 *) ((u8 *) data_02159e30 + i * 4 + 4) = 0;
        }
    }
}
