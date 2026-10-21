#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Elem_020bcf5c;

void func_020bcf5c(s32 arg0) {
    s32 i;

    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0); i++) {
        Elem_020bcf5c *src = (Elem_020bcf5c *) (M2C_FIELD(arg0, s32 *, 4) + i * 0xC);
        Elem_020bcf5c *dst = (Elem_020bcf5c *) (M2C_FIELD(arg0, s32 *, 0x10) + i * 0xC);

        *dst = *src;
    }
}
