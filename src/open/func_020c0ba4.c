#include "m2c.h"

typedef struct {
    u8 pad[4];
    u16 f4;
    u16 f6;
} Obj;

s32 func_020c0050(s32);                             /* extern */
void func_020c002c(M2C_UNK, u16 *);                 /* extern */
M2C_UNK func_020c081c(void);                        /* extern */
s32 func_02080ed4(void);                            /* extern */
void func_020801f4(M2C_UNK, s32);                   /* extern */
u16 func_020bfba4(u16);                             /* extern */
Obj *func_020c0828(void);                           /* extern */
u16 func_020bfafc(void);                            /* extern */
s32 func_020c0088(M2C_UNK, u16 *);                  /* extern */
void func_020c0b6c(void);                           /* extern */
extern s32 data_02156eb4;
extern u16 data_02156ea0;
extern u16 data_02156ea4;

void func_020c0ba4(u8 *arg0) {
    u16 m;

    if (func_020c0050((s32) arg0) == 0) {
        return;
    }
    if (data_02156eb4 != 0) {
        u16 out;
        func_020c002c((M2C_UNK) func_020c0b6c, &out);
        return;
    }
    m = *(u16 *) (arg0 + 8);
    switch (m) {
    case 5: {
        Obj *q;
        u16 out;
        func_020c081c();
        if (func_02080ed4() != 0) {
            data_02156ea0 = 2;
        }
        func_020801f4(func_020c081c(), 0xC0);
        data_02156ea4 = func_020bfba4(data_02156ea4);
        q = func_020c0828();
        q->f4 = data_02156ea4;
        q = func_020c0828();
        q->f6 = func_020bfafc();
        if (func_020c0088((M2C_UNK) func_020c0ba4, &out) != 0) {
            return;
        }
        break;
    }
    case 4: {
        Obj *q;
        u16 out;
        data_02156ea4 = func_020bfba4(data_02156ea4);
        q = func_020c0828();
        q->f4 = data_02156ea4;
        q = func_020c0828();
        q->f6 = func_020bfafc();
        func_020c0088((M2C_UNK) func_020c0ba4, &out);
        return;
    }
    }
}
