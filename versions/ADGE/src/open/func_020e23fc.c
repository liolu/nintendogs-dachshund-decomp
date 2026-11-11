#include "m2c.h"
extern void *data_02159e70;
void func_020e23fc(s32 arg0) {
    typedef struct {
        s32 a;
        s32 b;
    } Pair;
    s32 *base = *(s32 **) &data_02159e70;
    if (*(s32 *) ((u8 *) base + 0x5000 + 0x28) != 0) {
        ((Pair *) ((u8 *) base + 0x5028))->b = arg0;
    }
}
