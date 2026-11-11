#include "engine.h"
#include "m2c.h"

extern s16 *data_0215a06c;

void func_0211aee8(void) {
    if (data_0215a06c == NULL) {
        return;
    }
    if (*data_0215a06c == 0) {
        *data_0215a06c = 1;
    }
}
