#include "m2c.h"

typedef struct {
    u32 words[8];       /* 0x00..0x1F, copied as words */
} Unk_020e8214;

#define FIELD_ID(p)    M2C_FIELD((p), s16 *, 4)
#define FIELD_MASK(p)  M2C_FIELD((p), u16 *, 0xC)

extern Unk_020e8214 data_02147e8c[];
extern void func_020e82bc(void);

/* table walk */
s32 func_020e8214(s32 arg0, Unk_020e8214 *arg1, u16 arg2) {
    Unk_020e8214 *p = data_02147e8c;
    u16 n = 0;

    func_020e82bc();
    for (; FIELD_ID(p) != -1 && arg2 - 1 > 0; p++) {
        if (FIELD_ID(p) == arg0 && FIELD_MASK(p) != 0) {
            *arg1 = *p;
            arg1++;
            arg2--;
            n++;
        }
    }
    FIELD_ID(arg1) = -1;
    return n;
}
