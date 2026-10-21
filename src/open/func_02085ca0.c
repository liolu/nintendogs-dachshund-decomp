#include "m2c.h"

typedef struct { s16 base : 12; u16 mode : 2; u16 unk : 2; } BF;
typedef union { BF b; s16 s; } U;

s32 func_02085ca0(U arg0, s32 arg1) {
    switch (arg0.b.mode) {
    case 1: return arg0.b.base - (arg1 + 1) / 2;
    case 2: return arg0.b.base - arg1;
    }
    return arg0.b.base;
}
