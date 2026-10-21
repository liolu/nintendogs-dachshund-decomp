#include "m2c.h"

typedef struct {
    s32 f00;
    s16 f04;
    s16 f06;
    s16 f08;
} SeqHdr;

typedef struct {
    s32 f00;
    s32 f04;
    s32 f08;
    s32 f0c;
    s32 f10;
    s32 f14;
} SeqEntry;

extern SeqHdr *data_02159e38;
extern u16 data_02159e34;
extern s32 data_02159e3c;

SeqEntry *func_020d28d8(u32, s32);
s32 func_020d18ac(SeqEntry *, s32, s32);
void func_02065144(u16);

void func_020d0928(s32 arg0) {
    SeqEntry *e;
    unsigned k;
    SeqHdr *h;
    s32 found;
    u32 i;
    s32 r;
    register u32 j;

    found = 0;
    data_02159e38->f00 = 1;
    h = data_02159e38;
    h->f04 = 0;
    h->f06 = 0;
    h->f08 = 0;
    func_02065144(data_02159e34);
    r = 0;
    e = func_020d28d8(0, 0);
    if (e->f10 != 0 && (arg0 != 0 || e->f0c != data_02159e3c)) {
        r = func_020d18ac(e, 0, 0);
    }
    if (r != 0) {
        e = func_020d28d8(0, 0);
        if (*(s32 *) (e->f10 + e->f04 - 8) == 0x544F5458) {
            found = 1;
        }
    }
    i = 0;
    do {
        e = func_020d28d8(1, i);
        if (e->f10 != 0 && (arg0 != 0 || e->f0c != data_02159e3c)) {
            func_020d18ac(e, 0, 0);
        }
        i = (u16) (i + 1);
    } while (i < 3);
    j = 0;
    do {
        k = 0;
        do {
            e = func_020d28d8(2, j);
            if (e->f10 != 0 && (arg0 != 0 || e->f0c != data_02159e3c)) {
                func_020d18ac(e, k, 0);
            }
            k = (u16) (k + 1);
        } while (k < 20);
        j = (u16) (j + 1);
    } while (j < 3);
    e = func_020d28d8(6, 0);
    if (e->f10 != 0 && (arg0 != 0 || e->f0c != data_02159e3c)) {
        func_020d18ac(e, 0, 0);
    }
    e = func_020d28d8(3, 0);
    if (e->f10 != 0 && (arg0 != 0 || e->f0c != data_02159e3c)) {
        func_020d18ac(e, 0, 0);
    }
    i = 0;
    do {
        e = func_020d28d8(4, i);
        if (e->f10 != 0 && (arg0 != 0 || e->f0c != data_02159e3c)) {
            func_020d18ac(e, 0, 0);
        }
        i = (u16) (i + 1);
    } while (i < 5);
    j = 0;
    do {
        k = 0;
        do {
            e = func_020d28d8(5, j);
            if (e->f10 != 0 && (arg0 != 0 || e->f0c != data_02159e3c)) {
                func_020d18ac(e, k, 0);
            }
            k = (u16) (k + 1);
        } while (k < 20);
        j = (u16) (j + 1);
    } while (j < 5);
    if (found == 0) {
        return;
    }
    e = func_020d28d8(0, 0);
    if (e->f10 == 0) {
        return;
    }
    func_020d18ac(e, 0, 1);
}
