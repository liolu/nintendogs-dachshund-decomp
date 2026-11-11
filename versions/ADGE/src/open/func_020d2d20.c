#include "m2c.h"

extern void *data_02159e60;
typedef struct {
    u8 pad[0x8C];
    void (*fn)(void *);
} Unk_020d2d20;

extern Unk_020d2d20 *data_02159e64;

void func_020d2d20(void) {
    void (*fn)(void *);

    if (data_02159e60 != NULL) {
        return;
    }
    fn = data_02159e64->fn;
    if (fn != NULL) {
        fn(data_02159e64);
        data_02159e64->fn = NULL;
    }
}
