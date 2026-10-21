#include "m2c.h"
extern void *data_0215a064;
void func_021143d8(s8 *arg0, s32 arg1) {
    struct {
        u8 pad[0xC6];
        s16 arr[4];
    } *o = (void *) arg0;
    s16 *arr = (s16 *) arg0;
    s16 i;

    if (M2C_FIELD(data_0215a064, s16 *, 0x86) > 0) {
        if (arr[arg1 + 0x63] != -1) {
            return;
        }
        for (i = 0; i < 3; i++) {
            if (o->arr[i] != -1) {
                o->arr[i] = o->arr[i] + 1;
            }
        }
        arr[0x66] = arr[0x66] + 1;
        arr[arg1 + 0x63] = 0;
    } else {
        if (arr[arg1 + 0x63] == -1) {
            arr[0x66] = arr[0x66] + 1;
            arr[arg1 + 0x63] = arr[0x66];
        }
    }
}
