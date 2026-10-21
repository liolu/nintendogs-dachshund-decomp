#include "m2c.h"

typedef struct {
    s16 v[15];
} Row15;

typedef struct {
    s16 v[9];
} Row9;

extern void *data_02138ed4[0x100];
extern Row15 data_0213a60c[];
extern Row9 data_0213a100[];
extern Row15 data_0213a25c[];
extern Row9 data_0213a36c[];

s32 func_0202d930(u8 *arg0, s32 arg1, s32 arg2, u32 arg3, u8 arg4, s32 arg5) {
    u8 *entry;
    s16 b5;
    s32 ok;
    s16 v;

    if (*(u8 *) (arg0 + 0xA4) != 0 && *(u16 *) (arg0 + 0xF2) == arg3 && *(u8 *) (arg0 + 0xA6) == arg4) {
        return 0;
    }
    if (arg5 != 0) {
        if (arg3 >= 0x4F && arg3 < 0x63) {
            entry = (u8 *) data_02138ed4[0x4F] + arg4 * 0xA;
        } else {
            entry = (u8 *) data_02138ed4[arg3] + arg4 * 0xA;
        }
        if (entry != NULL) {
            b5 = entry[5];
            if (entry[4] == arg1) {
                if (arg1 == 0) {
                    v = data_0213a60c[b5].v[arg2];
                    if (v != -1) {
                        *(s16 *) (arg0 + 0xEA) = v;
                        ok = 1;
                    } else {
                        ok = 0;
                    }
                } else {
                    v = data_0213a100[b5].v[arg2];
                    if (v != -1) {
                        *(s16 *) (arg0 + 0xEA) = v;
                        ok = 1;
                    } else {
                        ok = 0;
                    }
                }
            } else {
                if (arg1 == 0) {
                    *(s16 *) (arg0 + 0xEA) = data_0213a25c[b5].v[arg2];
                    ok = 1;
                } else {
                    *(s16 *) (arg0 + 0xEA) = data_0213a36c[b5].v[arg2];
                    ok = 1;
                }
            }
            if (ok == 0) {
                v = *(s16 *) (entry + 6);
                if (v != -1) {
                    *(s16 *) (arg0 + 0xEA) = v;
                }
            }
        }
        return 1;
    }
    return 1;
}
