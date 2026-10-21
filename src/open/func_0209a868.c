#include "m2c.h"

typedef struct {
    u32 unk_0x00;       /* 0x00: two s16 halves */
    s16 id;             /* 0x04 */
    u8 pad_0x06[0x6];
    u16 unk_0x0C;       /* 0x0C */
    u8 pad_0x0E[0x6];
    u16 unk_0x14;       /* 0x14 */
    u8 pad_0x16[0xA];
} Unk_0209a868;

extern Unk_0209a868 data_02147e8c[];
extern void func_020e82bc(void);
extern void *func_020d049c(s32 arg0);
extern s32 func_020d04f8(void);

s32 func_0209a868(Unk_0209a868 *arg0, s32 arg1, s32 arg2) {
    s32 n;
    s32 matches;
    Unk_0209a868 *p;
    void *obj;
    s16 j;
    s16 i;
    s32 count;

    count = 0;
    p = data_02147e8c;
    func_020e82bc();
    while (p->id != -1) {
        matches = 0;
        if (arg2 == 4) {
            for (n = 0; n < func_020d04f8(); n++) {
                obj = NULL;
                i = -1;
                j = 0;
                do {
                    i = (s16)(i + 1);
                    while (i < 3 && *(u16 *)func_020d049c(i) == 0xFFFF) {
                        i = (s16)(i + 1);
                    }
                } while (j++ < n);
                if (i >= 3) {
                    i = -1;
                }
                if (i >= 0) {
                    obj = func_020d049c(i);
                }
                if (M2C_FIELD(p, s16 *, 2) == *(s16 *)((u8 *)obj + 6)) {
                    matches++;
                }
            }
        }
        if (p->id == arg2 && p->unk_0x0C > matches && p->unk_0x14 != 0x80) {
            *arg0 = *p;
            if (p->id == 4) {
                arg0->unk_0x0C -= matches;
            }
            arg0++;
            count++;
        }
        p++;
    }
    return count;
}
