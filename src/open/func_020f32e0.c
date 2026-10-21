#include "m2c.h"
s32 func_01ffdb08(s32 arg0);
s32 func_0202816c(s32 arg0);
void *func_020ce154(s32 arg0);
s32 func_020cbbe8(s32 arg0, s32 arg1, s32 arg2);
extern void *data_0215a04c;
extern void *data_0215a050;
extern void *data_02159e30;
extern u8 data_02131358[];
extern u8 data_02159ff4[];
extern s32 data_02147534;
extern s32 data_0214752c;
s32 func_020280f0(s32);
s32 func_020cac38(s32);
s32 func_020f3590(void);
void func_020d5de4(s32, void *);
s32 func_020f0bfc(s32, s32, s32);
s32 func_020f0af4(s32);
void func_020dd924(void);
s32 func_020f32e0(u32 arg0, s32 arg1) {
    s32 r4 = 0;
    s32 idx = -1;
    void *g;
    u8 *p;
    s16 i;

    g = data_0215a04c;
    p = (u8 *) g + 0x20;
    for (i = 0; i < 3; i = (s16) (i + 1)) {
        u16 flags = *(u16 *) p;
        if (flags & 1) {
            if (flags & 2) {
                idx = i;
                break;
            }
        }
        p += 0x14;
    }

    switch (arg0) {
    case 0x30002: {
        s32 x = 0;
        switch (arg1) {
        case 0:
            x = func_01ffdb08(M2C_FIELD(g, s16 *, 0xE));
            break;
        case 1:
            x = func_01ffdb08(idx);
            break;
        }
        r4 = func_0202816c(x) + 0x78;
        break;
    }
    case 0x30005: {
        s32 t;
        r4 = 0;
        t = M2C_FIELD(data_02159e30, s32 *, 4);
        switch (func_020280f0(func_01ffdb08(M2C_FIELD(g, s16 *, 0xE)))) {
        case 0:
            r4 = func_020cbbe8(t, 0x546, arg1);
            break;
        case 1:
            r4 = func_020cbbe8(t, 0x547, arg1);
            break;
        }
        break;
    }
    case 0x30003: {
        s32 x = 0;
        switch (arg1) {
        case 0:
            x = func_01ffdb08(M2C_FIELD(g, s16 *, 0xE));
            break;
        case 1:
            x = func_01ffdb08(idx);
            break;
        }
        r4 = func_020cac38(M2C_FIELD(func_0202816c(x), u16 *, 0));
        break;
    }
    case 0x3000E: {
        s32 t;
        r4 = 0;
        t = M2C_FIELD(data_02159e30, s32 *, 4);
        switch (data_02147534) {
        case 0:
            r4 = func_020cbbe8(t, 0x579, 0);
            break;
        case 1:
            r4 = func_020cbbe8(t, 0x57a, 0);
            break;
        case 2:
            r4 = func_020cbbe8(t, 0x578, 0);
            break;
        }
        break;
    }
    case 0x3000F:
        r4 = func_020f3590();
        break;
    case 0x30013:
        func_020d5de4(data_0214752c, data_02159ff4);
        r4 = (s32) data_02159ff4;
        break;
    case 0x30000:
        if (arg1 == 1) {
            s32 t = M2C_FIELD(data_02159e30, s32 *, 0x38);
            void *v = func_020ce154(M2C_FIELD(data_0215a050, s16 *, 4));
            s32 *e = (s32 *) (data_02131358 + M2C_FIELD(v, s16 *, 0) * 0xC);
            r4 = func_020cbbe8(t, e[2], 1);
        }
        break;
    }
    return r4;
}
