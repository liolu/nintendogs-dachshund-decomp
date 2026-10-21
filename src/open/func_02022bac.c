#include "m2c.h"
s32 func_02022bac(u8 *arg0) {
    s16 v;
    u16 key;
    s16 i;
    u8 tag;
    u8 *p;
    s32 t;
    s32 ok;

    v = *(s16 *) (arg0 + 0xF0);
    ok = 0;
    if (v > 0xC) {
        ok = v < 0x6F;
    }
    if (ok == 0) {
        goto fail;
    }
    key = (u16) (v - 0xC);
    tag = *(u8 *) (arg0 + 0xA5);
    for (i = 0; i < 0x14; i = (s16) (i + 1)) {
        if ((i < 0) || (0x14 <= i)) {
            p = NULL;
        } else {
            p = (u8 *) M2C_FIELD(arg0, u32 *, 0x9E8) + 0x90 + i * 0x3C;
        }
        if (p != NULL && *(u16 *) p == key && *(u8 *) (p + 0x28) == tag) {
            goto found;
        }
    }
    i = -1;
found:
    if ((i < 0) || (0x14 <= i)) {
        p = NULL;
    } else {
        p = (u8 *) M2C_FIELD(arg0, u32 *, 0x9E8) + 0x90 + i * 0x3C;
    }
    if (p == NULL) {
        goto fail;
    }
    t = (s16) ((((s32) * (u16 *) (p + 2)) * 0x4CD >> 12) + 0x3C);
    if (t > 0x5DC) {
        t = 0x5DC;
    }
    return t;
fail:
    return 0;
}
