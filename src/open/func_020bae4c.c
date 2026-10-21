#include "m2c.h"

typedef struct {
    u32 data[11];
} struct_20bae4c;

s32 func_020bae4c(void *arg0, s32 arg1) {
    s32 *countPtr;
    struct_20bae4c *arr;
    struct_20bae4c *dst;
    struct_20bae4c *src;
    s32 index;

    countPtr = (s32 *) arg0;
    arr = (struct_20bae4c *) ((s8 *) arg0 + 0x20);
    index = arg1;
    if (*countPtr <= 1) {
        return 0;
    }
    if (index < 0 && *countPtr - 1 < index) {
        return 0;
    }
    while (index <= *countPtr - 2) {
        dst = &arr[index];
        src = &arr[index + 1];
        *dst = *src;
        index++;
    }
    *countPtr = *countPtr - 1;
    return 1;
}
