#include "m2c.h"

typedef struct {
    u32 unk_0x00;       /* 0x00 */
    s16 id;             /* 0x04 */
    u8 pad_0x06[0xE];
    u16 mask;           /* 0x14 */
    s16 flag;           /* 0x16 */
    u8 pad_0x18[0x8];
} Unk_0209ab74;

extern Unk_0209ab74 data_02147e8c[];

s32 func_0209ab74(Unk_0209ab74 *arg0, s32 arg1, s32 arg2) {
    Unk_0209ab74 *p = data_02147e8c;
    s32 count = 0;
    s32 match;

    while (p->id != -1) {
        match = 0;
        if ((p->mask & arg2) != 0) {
            if ((p->mask & 0x38) == 0) {
                goto set_match;
            }
            if (p->flag != 0) {
                match = 1;
            }
        }
        goto after;
    set_match:
        match = 1;
    after:
        if (match != 0) {
            *arg0 = *p;
            arg0++;
            count++;
        }
        p++;
    }
    return count;
}
