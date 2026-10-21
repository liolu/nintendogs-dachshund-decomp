#include "m2c.h"

typedef struct {
    void *(*fn)(s32);
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u16 unk_24;
    u16 unk_26;
    s16 unk_28;
    s16 unk_2A;
    u32 bits_00_05 : 6;
    u32 bits_06_11 : 6;
    u32 bits_12_17 : 6;
    u32 bits_18_23 : 6;
    u32 bits_24_31 : 8;
    s32 unk_30;
    u8 pad_34[0x08];
} Unk02081974;

void func_0206cd2c(void *, s32, s32);
void func_02085b48(void *, void *);

Unk02081974 *func_02081974(void *(*fn)(s32), s32 a, s32 b, s32 c, u16 d, u16 e) {
    Unk02081974 *obj;
    int i;
    u8 *rows;
    u8 *elems;

    obj = (Unk02081974 *) fn(0x3C);
    func_0206cd2c(obj, 0, 0x3C);
    obj->unk_28 = a;
    obj->unk_2A = b;
    obj->bits_00_05 = d;
    obj->bits_06_11 = e;
    obj->bits_12_17 = obj->bits_00_05;
    obj->bits_18_23 = c;
    obj->bits_24_31 = 0;
    obj->fn = fn;
    obj->unk_08 = 0;
    obj->unk_10 = 0;
    obj->unk_18 = 0;
    obj->unk_04 = 0;
    obj->unk_0C = 0;
    obj->unk_14 = 0;
    obj->unk_30 = 0;
    rows = (u8 *) fn(a * 0x78);
    func_0206cd2c(rows, 0, a * 0x78);
    for (i = 0; i < a; i++) {
        func_02085b48(&obj->unk_0C, rows);
        rows += 0x78;
    }
    elems = (u8 *) fn(b * 0x44);
    func_0206cd2c(elems, 0, b * 0x44);
    for (i = 0; i < b; i++) {
        func_02085b48(&obj->unk_14, elems);
        elems += 0x44;
    }
    obj->unk_1C = 0;
    obj->unk_20 = 0;
    obj->unk_26 = 0;
    obj->unk_24 = obj->unk_26;
    return obj;
}
