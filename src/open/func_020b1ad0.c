#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    s32 f[3];
} TableRow;

typedef struct {
    TableRow row[5];
} Table;

extern s64 data_02124d28;
extern s8 data_0213ebfc[];
void func_02027658(void *, Vec *);
void func_0206823c(Vec *, u8 *, Vec *);
s32 func_02006a20(Vec *, Vec *);
s32 func_020681f8(Vec *, Vec *);
s32 func_020a6990(s16);
void func_020b19f8(void *, void *, s32);

void func_020b1ad0(s32 arg0, void *arg1) {
    Vec v;
    Table tbl;
    s32 r;
    s32 dot;
    s32 sel;

    func_02027658((void *) arg0, &v);
    func_0206823c(&v, (u8 *) arg1 + 0xBC, &v);
    if ((s64) v.x * v.x + (s64) v.y * v.y + (s64) v.z * v.z < data_02124d28) {
        r = 0;
    } else {
        r = func_02006a20(&v, &v);
    }
    if (r == 0) {
        return;
    }
    dot = func_020681f8(&v, (Vec *) ((u8 *) arg1 + 0xB0));
    if (dot < 0x19A) {
        sel = 0;
    } else {
        tbl = *(Table *) data_0213ebfc;
        if (dot < 0x4CD) {
            sel = 0;
        } else if (dot < 0x800) {
            sel = 1;
        } else {
            sel = 2;
        }
        sel = tbl.row[func_020a6990(M2C_FIELD(arg1, s16 *, 0x94))].f[sel];
    }
    func_020b19f8(arg1, (void *) arg0, sel);
}
