#include "m2c.h"

extern s16 *data_02153728;

void func_02099758(void) {
    if (data_02153728 == NULL) {
        return;
    }
    if (*data_02153728 == 0) {
        *data_02153728 = 1;
    }
}
