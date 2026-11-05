/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 pad0[0x10];
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
    u8 pad28[0x30 - 0x28];
    u8 file[0x7C - 0x30];
    void *volatile p84;
    void *volatile p88;
    void *volatile p8c;
} SndData;

extern u8 func_02072e40[];
extern u8 func_02072e34[];
extern u8 func_02072e28[];

s32 func_0208b57c(void *, s32, s32);
s32 func_0208b5e8(void *, void *, s32);
void *func_02073638(void *, s32, void *, void *, s32);

s32 func_020731bc(SndData *arg0, void *arg1, s32 arg2) {
    s32 t;

    if (func_0208b57c(arg0->file, 0, 0) == 0) {
        return 0;
    }
    if (func_0208b5e8(arg0->file, arg0, 0x30) != 0x30) {
        return 0;
    }
    if (arg1 != 0) {
        arg0->p8c = func_02073638(arg1, arg0->f1c, func_02072e40, arg0, 0);
        if (arg0->p8c == 0) {
            return 0;
        }
        if (func_0208b57c(arg0->file, arg0->f18, 0) == 0) {
            return 0;
        }
        t = func_0208b5e8(arg0->file, arg0->p8c, arg0->f1c);
        if (t != arg0->f1c) {
            return 0;
        }
        arg0->p84 = func_02073638(arg1, arg0->f24, func_02072e34, arg0, 0);
        if (arg0->p84 == 0) {
            return 0;
        }
        if (func_0208b57c(arg0->file, arg0->f20, 0) == 0) {
            return 0;
        }
        t = func_0208b5e8(arg0->file, arg0->p84, arg0->f24);
        if (t != arg0->f24) {
            return 0;
        }
        if (arg2 != 0 && arg0->f14 != 0) {
            arg0->p88 = func_02073638(arg1, arg0->f14, func_02072e28, arg0, 0);
            if (arg0->p88 == 0) {
                return 0;
            }
            if (func_0208b57c(arg0->file, arg0->f10, 0) == 0) {
                return 0;
            }
            t = func_0208b5e8(arg0->file, arg0->p88, arg0->f14);
            if (t != arg0->f14) {
                return 0;
            }
        }
    }
    return 1;
}
