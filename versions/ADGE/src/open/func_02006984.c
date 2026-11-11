#include "m2c.h"

typedef struct {
    void *p;
    u16 a;
    u16 b;
} T1;

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    u16 e;
    s32 f;
    u16 g;
    s32 h;
} T2;

extern s32 data_0214d62c;
extern T1 data_0214d630[];
extern s32 data_02134f6c[];
extern T2 data_0214d670[];
extern s32 data_02134f78[];

void func_02006984(s32 arg0) {
    int i;
    int j;

    data_0214d62c = arg0;
    for (i = 0; i < 8; i++) {
        data_0214d630[i].p = data_02134f6c;
        data_0214d630[i].a = 0xFF;
        data_0214d630[i].b = 0;
    }
    for (j = 0; j < 7; j++) {
        data_0214d670[j].a = (s32) data_02134f78;
        data_0214d670[j].b = 0;
        data_0214d670[j].c = 0;
        data_0214d670[j].d = 0;
        data_0214d670[j].e = 0;
        data_0214d670[j].f = 0;
        data_0214d670[j].g = 0;
        data_0214d670[j].h = 0;
    }
}
