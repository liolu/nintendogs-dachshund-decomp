#include "m2c.h"
extern u32 data_0213cf48[];
extern u8 data_02154300[];
extern u8 data_02154350[];
s32 func_0208fe1c(void);
s32 func_02089d60(void *arg0);
s32 func_020a5d54(void);
s32 func_01ffdb08(s16 arg0);
s32 func_02027050(s32 arg0);
void func_0209150c(s32 arg0, s32 arg1);
void func_02090fbc(s32 arg0, s16 arg1);
void func_0208d310(s16 arg0);
s32 func_0208b5c4(s32 arg0, s32 arg1) {
    s16 i;
    s16 type;
    s16 mode;
    s32 idx;
    s32 key;
    s32 o;
    u16 bit;

    type = *(s16 *) ((u8 *) data_0213cf48[*(u16 *) (arg0 + 0x24)] + 2);
    if (func_0208fe1c() != 0) {
        return -1;
    }
    for (i = 0; i < *(s32 *) arg0; i = (s16) (i + 1)) {
        bit = (u16) (1 << i);
        if ((*(u16 *) (arg0 + 4) & bit) != 0) {
            if (arg1 == *(s16 *) (arg0 + i * 2 + 0x12)) {
                if (*(s32 *) (arg0 + i * 4 + 0x18) != 0) {
                    *(u16 *) (arg0 + 6) |= bit;
                    return i;
                }
            }
        }
    }
    idx = func_02089d60((void *) arg0);
    if (idx != -1) {
        *(s16 *) (arg0 + idx * 2 + 0x12) = arg1;
        bit = (u16) (1 << idx);
        *(u16 *) (arg0 + 4) |= bit;
        *(u16 *) (arg0 + 6) |= bit;
        *(u16 *) (arg0 + 8) |= bit;
        *(s32 *) (arg0 + idx * 4 + 0x28) = 0;
        *(u16 *) (arg0 + 0x26) &= ~bit;
        if (*(s16 *) (arg0 + idx * 2 + 0xC) == 0x1F) {
            mode = *(s16 *) (data_02154300 + 2);
            if (mode != 4 && mode != 5) {
                key = func_020a5d54();
                for (i = 0; i < 3; i = (s16) (i + 1)) {
                    o = func_01ffdb08(i);
                    if (o != 0) {
                        if (key == -1) {
                            func_0209150c(o, arg1);
                        } else if (func_02027050(o) != 0 && key == i) {
                            func_0209150c(o, arg1);
                            func_02090fbc(arg1, i);
                        }
                    }
                }
            }
        }
    }
    if (*(s32 *) (data_02154350 + 4) == 0 && (type == 8 || type == 0x1A || type == 0x20)) {
        func_0208d310(type);
    }
    return idx;
}
