#include "m2c.h"

typedef struct {
    s32 id;
    const char *name;
} Tbl;

extern Tbl data_02145c18[0x49];
extern s32 data_02145278[10];
extern char data_021452a8[12];
extern void *data_02159fe4;
s32 func_0205ece8(void *, s32, void *, ...);
s32 func_020c78f4(s32 *, s32, char *);

extern void *data_02159e70;
void func_0206cbc4(u16, void *, s32);
void func_0207e124(s32);
s32 func_0207dd68(s32, u32);
s32 func_020034f0(s32, s32);
void func_020e7f9c(s32 arg0) {
    char buf[0x40];
    s32 i;
    Tbl *e;
    s8 *slot;
    s32 *ret;

    i = 0;
    e = data_02145c18;
    for (;;) {
        if (arg0 == e->id) {
            func_0205ece8(buf, 0x40, data_021452a8, e->name);
            break;
        }
        i++;
        e++;
        if (i >= 0x49) {
            break;
        }
    }
    i = 0;
    slot = (s8 *) data_02159fe4 + 8;
    for (;;) {
        if (M2C_FIELD(slot, s32 *, 0) == arg0) {
            return;
        }
        if (M2C_FIELD(slot, s32 *, 8) == 0) {
            M2C_FIELD(slot, s32 *, 8) = data_02145278[i];
            ret = (s32 *) func_020c78f4((s32 *) M2C_FIELD(data_02159fe4, s32 *, 4), M2C_FIELD(slot, s32 *, 8), buf);
            M2C_FIELD(slot, s32 *, 4) = M2C_FIELD(M2C_FIELD(ret, void **, 0x50), s32 *, 8);
            M2C_FIELD(slot, s32 *, 0) = arg0;
            M2C_FIELD(slot, s32 *, 0xC) = (s32) ret;
            return;
        }
        i++;
        slot += 0x10;
        if (i >= 0xA) {
            return;
        }
    }
}
