#include "m2c.h"

typedef struct {
    u32 unk_0x00;       /* 0x00: two s16 halves */
    s16 id;             /* 0x04 */
    u8 pad_0x06[0x6];
    u16 unk_0x0C;       /* 0x0C */
    u8 pad_0x0E[0x6];
    u16 unk_0x14;       /* 0x14 */
    u8 pad_0x16[0xA];
} Unk_0209a5a0;

extern Unk_0209a5a0 data_02147e8c[];

extern s32 func_020cece8(void);
extern void func_020e82bc(s32);
s32 func_0209a5a0(Unk_0209a5a0 *arg0, s32 arg1, s32 arg2) {
    s32 count;
    Unk_0209a5a0 *p;
    s32 ret;

    count = 0;
    ret = func_020cece8();
    p = data_02147e8c;
    func_020e82bc(ret);
    while (p->id != -1) {
        if (*(s16 *) &p->unk_0x00 == arg2 && p->unk_0x0C != 0) {
            if ((p->unk_0x14 & 0x100) == 0 || ret != *(s16 *) ((s8 *) &p->unk_0x00 + 2)) {
                *arg0 = *p;
                arg0++;
                count++;
            }
        }
        p++;
    }
    return count;
}
