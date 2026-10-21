#include "m2c.h"
u32 func_02080978(void);
void func_02119744(s16 *, u32, u32 *);
s32 func_0211b590(u32 *, s32, s32);
void func_0211b418(s32 arg0, s32 arg1) {
    s16 i;
    u32 rand;
    s16 buf[0x20];
    s8 *p;

    rand = func_02080978();
    func_02119744(buf, 0x20, &rand);
    p = (s8 *) (arg0 + 0x18);
    for (i = 0; i < 4; i++) {
        if (i > 0) {
            *(s16 *) (p + 0) = i;
            *(s16 *) (p + 2) = buf[i];
            *(s16 *) (p + 4) = func_0211b590(&rand, arg1, i);
            switch (i) {
            case 1:
                rand = rand * 0x10DCD + 1;
                *(s16 *) (p + 6) = -(s16) ((u16) (((u32) (u16) rand * 0x12D) >> 16) + 0x258);
                break;
            case 2:
                rand = rand * 0x10DCD + 1;
                *(s16 *) (p + 6) = -(s16) ((u16) (((u32) (u16) rand * 0x12C) >> 16) + 0x12C);
                break;
            case 3:
                rand = rand * 0x10DCD + 1;
                *(s16 *) (p + 6) = -(s16) ((u16) (((u32) (u16) rand * 0x12C) >> 16));
                break;
            }
            *(s16 *) (p + 8) = *(s16 *) (p + 6);
        }
        p += 0xA;
    }
}
