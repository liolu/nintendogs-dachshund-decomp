#include "m2c.h"
typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} Blk;
extern void *data_0215a05c;
extern s32 data_0215449c[];
extern u8 data_02154578[];
extern u8 data_02154580[];
extern s32 *data_0215467c[];
extern volatile s32 data_02154670[];
void func_02070e7c(void *arg0, s32 arg1, s32 arg2);
void func_02070f88(void *arg0, s32 arg1);
void func_02070efc(u8 *, s32);
void func_02094bb8(s32 arg0) {
    Blk *p;
    s32 i;

    p = (Blk *) arg0;
    for (i = 0; i < 8; i++) {
        p[i].unk_00 = -1;
        p[i].unk_04 = 0;
        p[i].unk_08 = 0;
        p[i].unk_0C = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x84) = -1;
}
